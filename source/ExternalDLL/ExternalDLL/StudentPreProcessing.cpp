#include "StudentPreProcessing.h"


IntensityImage * StudentPreProcessing::stepToIntensityImage(const RGBImage &image) const {
	//getting width and height for 
	int h = image.getHeight();
	int w = image.getWidth();

	//Making shell for gray-image
	ImageFactory::ImplementationStudent obj;
	IntensityImage * gray_conversion_image = obj.newIntensityImage(w, h);
	//Gray = (Red * 0.3 + Green * 0.59 + Blue * 0.11) 
	for (int x = 0; x <= w; x++) {
		for (int y = 0; y <= h; y++) {
			Intensity pixel_value = (image.getPixel(x, y).b * 0.11) + (image.getPixel(x, y).g * 0.59) + (image.getPixel(x, y).r *0.3);
			gray_conversion_image->setPixel(x, y, pixel_value);
		}
	}
	return gray_conversion_image;
}

IntensityImage * StudentPreProcessing::stepScaleImage(const IntensityImage &image) const {
	return nullptr;
}

IntensityImage * StudentPreProcessing::stepEdgeDetection(const IntensityImage &image) const {
	return nullptr;
}

IntensityImage * StudentPreProcessing::stepThresholding(const IntensityImage &image) const {
	return nullptr;
}