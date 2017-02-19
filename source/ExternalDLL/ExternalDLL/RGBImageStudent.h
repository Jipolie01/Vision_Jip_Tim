/*
* Copyright (c) 2015 DottedEye Designs, Alexander Hustinx, NeoTech Software, Rolf Smit - All Rights Reserved
* Unauthorized copying of this file, via any medium is strictly prohibited
* Proprietary and confidential
*/

/*
Information:
	http://stackoverflow.com/questions/936687/how-do-i-declare-a-2d-array-in-c-using-new
	http://lemire.me/blog/2012/06/20/do-not-waste-time-with-stl-vectors/
*/

#pragma once
#include "RGBImage.h"

#include <vector>
typedef std::vector<RGB> rgb_vector;

class RGBImageStudent : public RGBImage {
private:
	rgb_vector image_colors;
public:

	RGBImageStudent();
	RGBImageStudent(const RGBImageStudent &other);
	RGBImageStudent(const int width, const int height);
	~RGBImageStudent();

	void set(const int width, const int height);
	void set(const RGBImageStudent & other);

	void setPixel(int x, int y, RGB pixel);
	void setPixel(int i, RGB pixel);

	RGB getPixel(int x, int y) const;
	RGB getPixel(int i) const;
};
