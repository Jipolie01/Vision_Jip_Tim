#include "IntensityImageStudent.h"

IntensityImageStudent::IntensityImageStudent() : IntensityImage() {
}

IntensityImageStudent::IntensityImageStudent(const IntensityImageStudent &other) : IntensityImage(other.getWidth(), other.getHeight()) {
	set(other);
}

IntensityImageStudent::IntensityImageStudent(const int width, const int height) : IntensityImage(width, height) {
	intensity_values.reserve(width * height);
}

IntensityImageStudent::~IntensityImageStudent() {
}

void IntensityImageStudent::set(const int width, const int height) {
	IntensityImage::set(width, height);
	intensity_values.reserve(width * height);
}

void IntensityImageStudent::set(const IntensityImageStudent &other) {
	IntensityImage::set(other.getWidth(), other.getHeight());
	
	int new_size = getWidth() * getHeight();
	intensity_values.reserve(new_size);
	for (int i = 0; i < new_size; i++) {
		intensity_values[i] = other.intensity_values[i];
	}
}

void IntensityImageStudent::setPixel(int x, int y, Intensity pixel) {
	intensity_values[y*getWidth() + x] = pixel;
}

void IntensityImageStudent::setPixel(int i, Intensity pixel) {
	intensity_values[i] = pixel;
}

Intensity IntensityImageStudent::getPixel(int x, int y) const {
	return intensity_values[y*getWidth() + x];
}

Intensity IntensityImageStudent::getPixel(int i) const {
	return intensity_values[i];
}