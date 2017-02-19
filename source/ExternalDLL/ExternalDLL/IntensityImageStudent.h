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
#include "IntensityImage.h"

#include <vector>
typedef std::vector<Intensity> intensity_vector;

class IntensityImageStudent : public IntensityImage {
private:
	intensity_vector intensity_values;
public:
	IntensityImageStudent();
	IntensityImageStudent(const IntensityImageStudent &other);
	IntensityImageStudent(const int width, const int height);
	~IntensityImageStudent();

	void set(const int width, const int height);
	void set(const IntensityImageStudent &other);

	void setPixel(int x, int y, Intensity pixel);
	void setPixel(int i, Intensity pixel);

	Intensity getPixel(int x, int y) const;
	Intensity getPixel(int i) const;
};
