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

///
///	\class IntensityImageStudent
///
/// \brief makes an intensity image
///
///	This class contains a vector with the values of the 
/// intensity of all pixels in an image
///
///	\date 23-2-2017
///
class IntensityImageStudent : public IntensityImage {
private:
	intensity_vector intensity_values;
public:
	///
 	/// \brief empty constructor
 	///
 	/// this is a default constructor that calls the class
 	/// intensity 
 	///
 	///
	IntensityImageStudent();

	///
 	/// \brief copy constructor 
 	///
 	/// This constructor is used to copy one IntensityImageStuden
 	/// object to this object
 	///
 	/// \param[in] other 	IntensityImageStudent object that has to be copied
 	///
 	///
	IntensityImageStudent(const IntensityImageStudent &other);
	
	///
 	/// \brief constructor for length of vector
 	///
 	/// This constructor initializes the vector with a width 
 	/// and height. The files are multiplied and this value is used 
 	/// as the length of the vector 
 	///
 	/// \param[in] width 	integer that represents the amount of pixels in the width of the image
 	/// \param[in] height	integer that represents the amount of pixels in the heigth of the image
 	///
 	///
	IntensityImageStudent(const int width, const int height);
	
	///
 	/// \brief deconstructor
 	///
 	/// This deconstructor has no functionality at the moment 
 	/// but can later be used to destroy the vector 
 	///
 	///
	~IntensityImageStudent();

	///
 	/// \brief function that sets the vector height 
 	///
 	/// This function saves the width and height in an IntensityImage
 	/// object and then resizes the vector to be (width*height)-size
 	///
 	/// \param[in] width 	integer that represents the amount of pixels in the width of the image
 	/// \param[in] height	integer that represents the amount of pixels in the heigth of the image
 	///
 	///
	void set(const int width, const int height);
	
	///
 	/// \brief function that copies object
 	///
 	/// This function copies the given parameter object to this object
 	///
 	/// \param[in] other	object that has to be copied
 	///
 	///
	void set(const IntensityImageStudent &other);

	///
 	/// \brief function that sets pixel
 	///
 	/// This function sets a pixel at place x * y in the vector
 	///
 	/// \param[in] x		x-coordinate in the image
 	/// \param[in] y 		y-coordinate in the image
 	/// \param[in] pixel 	Intensity pixel put on the place of the x,y-coordinate
 	///
 	///
	void setPixel(int x, int y, Intensity pixel);
	
	///
 	/// \brief function that sets pixel
 	///
 	/// This function sets a pixel a place i in the vector 
 	///
 	/// \param[in] i		value used as index for the vector 
 	/// \param[in] pixel 	Intensity pixel put on the place of the x,y-coordinate
 	///
 	///
	void setPixel(int i, Intensity pixel);

	///
 	/// \brief function that gets pixel
 	///
 	/// This function gets pixel at place x*y of the vector
 	///
 	/// \param[in] x		x-coordinate in the image
 	/// \param[in] y 		y-coordinate in the image
 	///
 	///	\return Intensity-object in place of the x*y in the vector
 	///
	Intensity getPixel(int x, int y) const;
	
	///
 	/// \brief function that gets pixel
 	///
 	/// This function gets pixel at place i of the image
 	///
 	/// \param[in] i		value used as index for the vector
 	///
 	///	\return Intensity-object in place i of the vector
 	///
	Intensity getPixel(int i) const;
};
