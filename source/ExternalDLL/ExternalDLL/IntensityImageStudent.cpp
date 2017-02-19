#include "IntensityImageStudent.h"

IntensityImageStudent::IntensityImageStudent() : IntensityImage() {
}

IntensityImageStudent::IntensityImageStudent(const IntensityImageStudent &other) : IntensityImage(other.getWidth(), other.getHeight()) {
	intensity_values.clear();
	for (const auto & intensity : other.intensity_values) {
		intensity_values.push_back(intensity);
	}
}

IntensityImageStudent::IntensityImageStudent(const int width, const int height) : IntensityImage(width, height) {
	intensity_values.resize(width * height);
}

IntensityImageStudent::~IntensityImageStudent() {
	//vector deleten?
}

void IntensityImageStudent::set(const int width, const int height) {
	IntensityImage::set(width, height);

	intensity_values.resize(width * height);
}

void IntensityImageStudent::set(const IntensityImageStudent &other) {
	IntensityImage::set(other.getWidth(), other.getHeight());

	intensity_values.clear();
	for (const auto & intensity : other.intensity_values) {
		intensity_values.push_back(intensity);
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