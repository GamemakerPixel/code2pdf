#include "code_pdf.h"

#include <PDFPage.h>
#include <PDFWriter.h>

#include <memory>
#include <string>

namespace core {

void create_test_pdf(const std::string& filename) {
  PDFWriter writer;
  writer.StartPDF(filename, ePDFVersion13);
  auto page = std::make_unique<PDFPage>();
  page->SetMediaBox(PDFRectangle(0, 0, 612, 792));
  writer.WritePage(page.get());
  writer.EndPDF();
}

}  // namespace core
