#include "code_pdf.h"

#include <AbstractContentContext.h>
#include <PageContentContext.h>
#include <PDFPage.h>
#include <PDFWriter.h>
#include <PDFUsedFont.h>

#include <memory>
#include <string>

namespace core {

void create_test_pdf(const std::string& filename) {
  PDFWriter writer;
  writer.StartPDF(filename, ePDFVersion13);
  auto page = std::make_unique<PDFPage>();
  page->SetMediaBox(PDFRectangle(0, 0, 612, 792));
	PageContentContext* context = writer.StartPageContentContext(page.get());

	AbstractContentContext::GraphicOptions fill_options(
		AbstractContentContext::eFill,
		AbstractContentContext::eRGB,
		0x000000
	);
	context->DrawCircle(306, 396, 36, fill_options);

	PDFUsedFont* font = writer.GetFontForFile("regular.ttf");
	AbstractContentContext::TextOptions text_options(
		font,
		14,
		AbstractContentContext::eGray,
		0
	);
	context->WriteText(72, 72, "Hello World!", text_options);
	context->WriteText(72, 44, "Hello World, one line below!", text_options);
	context->WriteText(72, 30, "And directly below!", text_options);

	writer.EndPageContentContext(context);
  writer.WritePage(page.get());
  writer.EndPDF();
}

}  // namespace core
