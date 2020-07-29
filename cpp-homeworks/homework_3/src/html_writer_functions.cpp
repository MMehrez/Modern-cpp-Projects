// @file      html_writer_functions.cpp
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
using std::string;
using std::stringstream;

void html_writer::OpenDocument() {
  cout << "<!DOCTYPE html>" << endl;
  cout << "<html>" << endl;
}

void html_writer::CloseDocument() { cout << "</html>" << endl; }

void html_writer::AddTitle(const std::string &title) {
  cout << "<title>" << title << "</title>" << endl;
}

void html_writer::AddCSSStyle(const std::string &stylesheet) {
  cout << "<head>" << endl;
  cout << "<link rel=\"stylesheet\" type=\"text/css\" href=\"" << stylesheet
       << "\" />" << endl;
  cout << "</head>" << endl;
}

void html_writer::OpenBody() { cout << "<body>" << endl; }
void html_writer::CloseBody() { cout << "</body>" << endl; }

void html_writer::OpenRow() { cout << "<div class=\"row\">" << endl; }
void html_writer::CloseRow() { cout << "</div>" << endl; }

void html_writer::AddImage(const std::string &img_path, float score,
                           bool highlight) {
  static string path;
  static string image_folder;
  static string file_number;
  static string file_extension;
  path = img_path;
  // cout << path << endl;
  size_t found = path.find_first_of("/");
  image_folder = path.substr(0, found);
  size_t found1 = path.find_first_of(".");
  file_number = path.substr(found + 1, found1 - found - 1);
  file_extension = path.substr(found1 + 1, path.length());

  // cout << file_number + "." + file_extension << endl;
  // path >> image_folder >> file_number >> file_extension;
  // cout << image_folder << endl;
  // cout << file_number << endl;
  // cout << file_extension << endl;
  if (file_extension != "jpg" && file_extension != "png") {
    cerr << "Error: Invalid File Extension" << endl;
  }
  if (highlight == true) {
    cout << "<div class = \"column\" style = \"border: 5px solid green;\">"
         << endl;
  } else {
    cout << "<div class = \"column\">" << endl;
  }
  cout << "<h2>" << file_number + "." + file_extension << "</h2>" << endl;
  cout << "<img src=" << path << " />" << endl;
  cout << "<p>score = " << score << "</p>" << endl;
  cout << "</div>" << endl;
}