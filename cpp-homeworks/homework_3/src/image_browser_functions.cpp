// @file      image_browser_functions.cpp
// @author    Mohamed W. Mehrez  [m.mehrez.said@gmail.com]
//
// Copyright (c) 2020 Mohamed W. Mehrez, all rights reserved
#include "homework_3.h"
#include <cstddef>
#include <cstdlib>
#include <iostream>
#include <sstream>
#include <string>

using std::cerr;
using std::cout;
using std::endl;
using std::get;
using std::string;
using std::stringstream;

void image_browser::AddFullRow(const ImageRow &row, bool first_row) {
  html_writer::OpenRow();
  bool highlight = false;
  for (int i = 0; i <= 2; i++) {
    if (i == 0) {
      highlight = first_row;
    } else {
      highlight = false;
    }
    html_writer::AddImage(get<0>(row[i]), get<1>(row[i]), highlight);
  }
  html_writer::CloseRow();
}

void image_browser::CreateImageBrowser(const std::string &title,
                                       const std::string &stylesheet,
                                       const std::vector<ImageRow> &rows) {
  html_writer::OpenDocument();
  html_writer::AddTitle(title);
  html_writer::AddCSSStyle(stylesheet);
  html_writer::OpenBody();
  //  for (int i = 0; i <= 2; i++) {
  for (int i = 0; i <= rows.size() - 1; i++) {
    if (i == 0) {
      image_browser::AddFullRow(rows[i], true);
    } else {
      image_browser::AddFullRow(rows[i], false);
    }
  }
  html_writer::CloseBody();
  html_writer::CloseDocument();
}