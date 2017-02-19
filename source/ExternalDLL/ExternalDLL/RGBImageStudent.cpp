#include "RGBImageStudent.h"

RGBImageStudent::RGBImageStudent() : RGBImage() {
}

RGBImageStudent::RGBImageStudent(const RGBImageStudent & other) : RGBImage(other.getWidth(), other.getHeight()) {
	image_colors.clear();
	for (const auto & color: other.image_colors) {
		image_colors.push_back(color);
	}
}


RGBImageStudent::RGBImageStudent(const int width, const int height) : RGBImage(width, height) {
	image_colors.resize(width * height);
}

RGBImageStudent::~RGBImageStudent() {
	//vector deleten??
}

void RGBImageStudent::set(const int width, const int height) {
	RGBImage::set(width, height);
	
	image_colors.resize(width * height);
}

void RGBImageStudent::set(const RGBImageStudent &other) {
	RGBImage::set(other.getWidth(), other.getHeight());
	
	image_colors.clear();
	for (const auto & color : other.image_colors) {
		image_colors.push_back(color);
	}
}

void RGBImageStudent::setPixel(int x, int y, RGB pixel) {
	image_colors[y*getWidth() + x] = pixel;
}

void RGBImageStudent::setPixel(int i, RGB pixel) {
	image_colors[i] = pixel;
}

RGB RGBImageStudent::getPixel(int x, int y) const {
	return image_colors[y*getWidth() + x];
}

RGB RGBImageStudent::getPixel(int i) const {
	return image_colors[i];
}