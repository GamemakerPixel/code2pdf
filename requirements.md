# Requirements

## Introduction

### Purpose
code2pdf is a command line tool that can be used to generate nicely-formatted PDFs of
source code files. The formatting and color schemes of the resulting PDFs will be fully
user-customizable.

### Functional Requirements

Puts the text from a source code file into a PDF.

Highlights the code using a syntax tree.

The application should be able to highlight code, with support for tree sitter plugins.

The styling of the document can be customized using a YAML file.
- Custom font can be provided by pointing to a .ttf or .odf file.
- Font size can be customized in pt.
- The colors used for syntax highlighting can be customized using hex code strings.
- The background color can be customized using a hex code string.

Multiple source files can be included in the same PDF.

Each page of the PDF is one source file and is fitted to the length of the file.

A header with the filename of the source file can optionally be included at the top of
each page.

### Nonfunctional Requirements

The document for a 250 line source file should be created in less than three seconds.

The entire process should be offline.


