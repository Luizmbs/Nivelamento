#include <iostream>
#include <vector>

#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>

using namespace cv;
using namespace std;

int  main()
{
    Mat image;
    image = imread("../lena.jpg");
    imshow("Imagem",image);
    for(int i = 0; i < image.rows; i++)
    {
        for (int j = 0; j < image.cols; j++)
        {
            image.at<Vec3b>(i,j) = Vec3b(255, 0, 0);
        }
    }
    //resize(image, image, Size(700,700));
    Mat f = image.clone();
    imshow("Image",f);
    waitKey(0);

}