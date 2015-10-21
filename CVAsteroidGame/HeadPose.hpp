#include <iostream>
#include <vector>
#include <opencv2/opencv.hpp>


//---------------------------------------------------------------------------

class HeadPose
{

private:
	cv::CascadeClassifier face_cascade, nose_cascade, eye_cascade, left_eye_cascade, right_eye_cascade, mouth_cascade;
	std::vector<CvPoint3D32f> modelPoints;
	std::vector<CvPoint3D32f> axesPoints;
	std::vector<CvPoint2D32f> srcImagePoints;
	CvPOSITObject* positObject;
	float* rotation_matrix;
	float* translation_vector;
	CvTermCriteria criteria;
	std::vector<CvPoint2D32f> projectedPoints;
	std::vector<CvPoint2D32f> projectedOriginalPoints;
	CvPoint2D32f m_lastHeadPosition;
	int m_FrameHeight;
	int m_FrameWidth;
public:

	HeadPose(void);
	virtual ~HeadPose(void);
	void init(void);
	float* getHeadRotationMatrix(void);
	float* getHeadPosition();

public:
	void process(cv::Mat &input, cv::Mat &output);

};