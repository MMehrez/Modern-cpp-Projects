// @file      create_html.cpp
// @author    Mohamed W. Mehrez  [m.mehrez.said@gmail.com]
// This is just a test main program
// Copyright (c) 2020 Mohamed W. Mehrez, all rights reserved

#include "homework_3.h"
#include <iostream>
#include <string>

using std::cerr;
using std::cout;
using std::endl;
using std::get;
using std::string;
using std::stringstream;

int main() {
  const std::string stylesheet{"style.css"};
  const std::string title{"Image Browser"};
  // const std::string img_path{"data/000000.png"};
  // float score = 0.98;
  // bool highlight = false;
  // html_writer::OpenDocument();
  // html_writer::AddTitle(title);
  // html_writer::AddCSSStyle(stylesheet);
  // html_writer::OpenBody();
  // html_writer::OpenRow();
  // html_writer::AddImage(img_path, score, highlight);
  // html_writer::CloseRow();
  // html_writer::CloseBody();
  // html_writer::CloseDocument();
  std::string path_test{" "};
  image_browser::ScoredImage first_image("data/000000.png", 0.0);
  image_browser::ScoredImage second_image("data/000100.png", 0.1);
  image_browser::ScoredImage third_image("data/000200.png", 0.2);

  image_browser::ScoredImage first_image_1("data/000300.png", 0.3);
  image_browser::ScoredImage second_image_1("data/000400.png", 0.4);
  image_browser::ScoredImage third_image_1("data/000500.png", 0.5);

  image_browser::ScoredImage first_image_2("data/000600.png", 0.6);
  image_browser::ScoredImage second_image_2("data/000700.png", 0.7);
  image_browser::ScoredImage third_image_2("data/000800.png", 0.8);

  image_browser::ImageRow image_array = {first_image, second_image,
                                         third_image};
  image_browser::ImageRow image_array_1 = {first_image_1, second_image_1,
                                           third_image_1};
  image_browser::ImageRow image_array_2 = {first_image_2, second_image_2,
                                           third_image_2};

  std::vector<image_browser::ImageRow> images_rows = {
      image_array, image_array_1, image_array_2};

  image_browser::CreateImageBrowser(title, stylesheet, images_rows);
  // cout << "the rows size is: " << images_rows.size() << endl;
  // path_test = get<string>(image_array[1]);
  // cout << get<0>(first_image) << endl;
  // cout << path_test << endl;
  // image_browser::AddFullRow(image_array, true);

  return 0;
}