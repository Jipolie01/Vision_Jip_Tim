#include "StudentPreProcessing.h"


IntensityImage * StudentPreProcessing::stepToIntensityImage(const RGBImage &image) const {
	//getting width and height for 
	int h = image.getHeight();
	int w = image.getWidth();

	//Making shell for gray-image
	ImageFactory::ImplementationStudent obj;
	IntensityImage * gray_conversion_image = obj.newIntensityImage(w, h);

	Intensity pixel_value;
	RGB retreived_pixel;

	//Gray = (Red * 0.3 + Green * 0.59 + Blue * 0.11) 
	for (int i = 0; i < (w*h); i++) {
		retreived_pixel = image.getPixel(i);
		//pixel_value = (retreived_pixel.b * 0.11) + (retreived_pixel.g * 0.59) + (retreived_pixel.r *0.3);
		//pixel_value = (retreived_pixel.r + retreived_pixel.g + retreived_pixel.b) / 3;
		//gray_conversion_image->setPixel(i, image.getPixel(i).b);
		if (retreived_pixel.r < retreived_pixel.g && retreived_pixel.r < retreived_pixel.b) {
			pixel_value = retreived_pixel.r;
		}
		else if (retreived_pixel.g < retreived_pixel.r && retreived_pixel.g < retreived_pixel.b) {
			pixel_value = retreived_pixel.g;
		}
		else {
			pixel_value = retreived_pixel.b;
		}

		gray_conversion_image->setPixel(i, pixel_value);
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