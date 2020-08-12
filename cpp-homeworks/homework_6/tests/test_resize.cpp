// Copyright Igor Bogoslavskyi, year 2018.
// In case of any problems with the code please contact me.
// Email: igor.bogoslavskyi@uni-bonn.de.

#include <gtest/gtest.h>

#include "homework_6.h"

using igg::Image;

TEST(TestDownScale, DownScaleTrivial) {
  Image image;
  ASSERT_EQ(0, image.rows());
  ASSERT_EQ(0, image.cols());
  ASSERT_TRUE(image.FillFromPgm("data/dummy_file.pgm"));
  image.DownScale(1);
  ASSERT_EQ(10, image.rows());
  ASSERT_EQ(10, image.cols());
  for (int r = 0; r < image.rows(); ++r) {
    for (int c = 0; c < image.cols(); ++c) {
      if (r == c) {
        ASSERT_EQ(0, image.at(r, c)) << r << " " << c;
      } else {
        ASSERT_EQ(255, image.at(r, c)) << r << " " << c;
      }
    }
  }
}

TEST(TestDownScale, DownScale) {
  Image image;
  ASSERT_EQ(0, image.rows());
  ASSERT_EQ(0, image.cols());
  ASSERT_TRUE(image.FillFromPgm("data/dummy_file.pgm"));
  int new_rows = image.rows() / 2;
  int new_cols = image.cols() / 2;
  image.DownScale(2);
  ASSERT_EQ(new_rows, image.rows());
  ASSERT_EQ(new_cols, image.cols());
  for (int r = 0; r < image.rows(); ++r) {
    for (int c = 0; c < image.cols(); ++c) {
      if (r == c) {
        ASSERT_EQ(0, image.at(r, c)) << r << " " << c;
      } else {
        ASSERT_EQ(255, image.at(r, c)) << r << " " << c;
      }
    }
  }
  image.WriteToPgm("data/dummy_file_d2.pgm");
}

TEST(TestUpScale, UpScaleTrivial) {
  Image image;
  ASSERT_EQ(0, image.rows());
  ASSERT_EQ(0, image.cols());
  ASSERT_TRUE(image.FillFromPgm("data/dummy_file.pgm"));
  image.UpScale(1);
  ASSERT_EQ(10, image.rows());
  ASSERT_EQ(10, image.cols());
  for (int r = 0; r < image.rows(); ++r) {
    for (int c = 0; c < image.cols(); ++c) {
      if (r == c) {
        ASSERT_EQ(0, image.at(r, c)) << r << " " << c;
      } else {
        ASSERT_EQ(255, image.at(r, c)) << r << " " << c;
      }
    }
  }
}

TEST(TestUpScale, UpScale) {
  Image image;
  ASSERT_EQ(0, image.rows());
  ASSERT_EQ(0, image.cols());
  ASSERT_TRUE(image.FillFromPgm("data/dummy_file.pgm"));
  int scale = 2;
  int new_rows = image.rows() * scale;
  int new_cols = image.cols() * scale;
  image.UpScale(scale);
  ASSERT_EQ(new_rows, image.rows());
  ASSERT_EQ(new_cols, image.cols());
  for (int r = 0; r < image.rows(); ++r) {
    for (int c = 0; c < image.cols(); ++c) {
      if (r == c) {
        ASSERT_EQ(0, image.at(r, c)) << r << " " << c;
      } else if (abs(r - c) > scale) {
        ASSERT_EQ(255, image.at(r, c)) << r << " " << c;
      }
    }
  }
  image.WriteToPgm("data/dummy_file_up2.pgm");
}
