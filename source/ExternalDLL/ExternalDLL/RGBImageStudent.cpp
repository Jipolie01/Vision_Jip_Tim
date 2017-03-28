#include "RGBImageStudent.h"

RGBImageStudent::RGBImageStudent() : RGBImage() {
}

RGBImageStudent::RGBImageStudent(const RGBImageStudent & other) : RGBImage(other.getWidth(), other.getHeight()) {
	set(other);
}


RGBImageStudent::RGBImageStudent(const int width, const int height) : RGBImage(width, height) {
	image_colors.reserve(width * height);
}

RGBImageStudent::~RGBImageStudent() {
}

void RGBImageStudent::set(const int width, const int height) {
	RGBImage::set(width, height);
	image_colors.reserve(width * height);
}

void RGBImageStudent::set(const RGBImageStudent &other) {
	RGBImage::set(other.getWidth(), other.getHeight());
	
	int new_size = getWidth() * getHeight();
	image_colors.reserve(new_size);
	for (int i = 0; i < new_size; i++) {
		image_colors[i] = other.image_colors[i];
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