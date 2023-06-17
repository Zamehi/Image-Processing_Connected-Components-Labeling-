#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>
#include <cstring>
#include "functions.h"


using namespace cv;
using namespace std;

int main()
{
    string ground_pic[45] = { "C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Ground Truths\\IMD002_lesion.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Ground Truths\\IMD004_lesion.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Ground Truths\\IMD015_lesion.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Ground Truths\\IMD017_lesion.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Ground Truths\\IMD018_lesion.bmp" ,"C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Ground Truths\\IMD019_lesion.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Ground Truths\\IMD020_lesion.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Ground Truths\\IMD021_lesion.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Ground Truths\\IMD022_lesion.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Ground Truths\\IMD024_lesion.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Ground Truths\\IMD033_lesion.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Ground Truths\\IMD038_lesion.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Ground Truths\\IMD039_lesion.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Ground Truths\\IMD040_lesion.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Ground Truths\\IMD041_lesion.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Ground Truths\\IMD042_lesion.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Ground Truths\\IMD043_lesion.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Ground Truths\\IMD044_lesion.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Ground Truths\\IMD050_lesion.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Ground Truths\\IMD075_lesion.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Ground Truths\\IMD078_lesion.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Ground Truths\\IMD091_lesion.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Ground Truths\\IMD118_lesion.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Ground Truths\\IMD139_lesion.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Ground Truths\\IMD140_lesion.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Ground Truths\\IMD144_lesion.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Ground Truths\\IMD149_lesion.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Ground Truths\\IMD169_lesion.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Ground Truths\\IMD171_lesion.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Ground Truths\\IMD177_lesion.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Ground Truths\\IMD206_lesion.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Ground Truths\\IMD211_lesion.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Ground Truths\\IMD243_lesion.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Ground Truths\\IMD328_lesion.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Ground Truths\\IMD331_lesion.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Ground Truths\\IMD339_lesion.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Ground Truths\\IMD376_lesion.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Ground Truths\\IMD379_lesion.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Ground Truths\\IMD386_lesion.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Ground Truths\\IMD394_lesion.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Ground Truths\\IMD395_lesion.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Ground Truths\\IMD396_lesion.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Ground Truths\\IMD427_lesion.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Ground Truths\\IMD429_lesion.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Ground Truths\\IMD432_lesion.bmp" };
    string segmented_pic[45] = { "C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Segmented Outputs\\mIMD002.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Segmented Outputs\\mIMD004.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Segmented Outputs\\mIMD015.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Segmented Outputs\\mIMD017.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Segmented Outputs\\mIMD018.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Segmented Outputs\\mIMD019.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Segmented Outputs\\mIMD020.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Segmented Outputs\\mIMD021.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Segmented Outputs\\mIMD022.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Segmented Outputs\\mIMD024.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Segmented Outputs\\mIMD033.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Segmented Outputs\\mIMD038.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Segmented Outputs\\mIMD039.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Segmented Outputs\\mIMD040.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Segmented Outputs\\mIMD041.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Segmented Outputs\\mIMD042.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Segmented Outputs\\mIMD043.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Segmented Outputs\\mIMD044.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Segmented Outputs\\mIMD050.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Segmented Outputs\\mIMD075.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Segmented Outputs\\mIMD078.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Segmented Outputs\\mIMD091.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Segmented Outputs\\mIMD118.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Segmented Outputs\\mIMD139.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Segmented Outputs\\mIMD140.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Segmented Outputs\\mIMD144.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Segmented Outputs\\mIMD149.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Segmented Outputs\\mIMD169.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Segmented Outputs\\mIMD171.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Segmented Outputs\\mIMD177.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Segmented Outputs\\mIMD206.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Segmented Outputs\\mIMD211.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Segmented Outputs\\mIMD243.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Segmented Outputs\\mIMD328.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Segmented Outputs\\mIMD331.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Segmented Outputs\\mIMD339.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Segmented Outputs\\mIMD376.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Segmented Outputs\\mIMD379.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Segmented Outputs\\mIMD386.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Segmented Outputs\\mIMD394.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Segmented Outputs\\mIMD395.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Segmented Outputs\\mIMD396.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Segmented Outputs\\mIMD427.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Segmented Outputs\\mIMD429.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Segmented Outputs\\mIMD432.bmp" };
    string original_pic[45] = { "C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Original Images\\IMD002.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Original Images\\IMD004.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Original Images\\IMD015.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Original Images\\IMD017.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Original Images\\IMD018.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Original Images\\IMD019.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Original Images\\IMD020.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Original Images\\IMD021.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Original Images\\IMD022.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Original Images\\IMD024.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Original Images\\IMD033.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Original Images\\IMD038.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Original Images\\IMD039.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Original Images\\IMD040.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Original Images\\IMD041.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Original Images\\IMD042.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Original Images\\IMD043.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Original Images\\IMD044.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Original Images\\IMD050.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Original Images\\IMD075.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Original Images\\IMD078.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Original Images\\IMD091.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Original Images\\IMD118.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Original Images\\IMD139.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Original Images\\IMD140.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Original Images\\IMD144.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Original Images\\IMD149.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Original Images\\IMD169.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Original Images\\IMD171.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Original Images\\IMD177.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Original Images\\IMD206.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Original Images\\IMD211.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Original Images\\IMD243.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Original Images\\IMD328.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Original Images\\IMD331.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Original Images\\IMD339.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Original Images\\IMD376.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Original Images\\IMD379.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Original Images\\IMD386.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Original Images\\IMD394.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Original Images\\IMD395.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Original Images\\IMD396.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Original Images\\IMD427.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Original Images\\IMD429.bmp","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Assignment 1\\Original Images\\IMD432.bmp" };

    //*********************************----------------************************************
    // 
    // ********************************----------------************************************

    cout << "----------------------------DETECTING LESION REGION ON A SKIN--------------------------" << endl;
    cout << endl << "Enter the number from 1 to 45, which image do you wanna observe." << endl;
    int pic = 0;
    cin >> pic;
    while (pic < 1 || pic>45)
    {
        cout << "Please enter a valid number between 1 and 45." << endl;
        cin >> pic;
    }
    pic = pic - 1;

    // ------------------------------------   /|   -------------------------------------------
    // ------------------------------------  / |   -------------------------------------------
    // ------------------------------------    |   -------------------------------------------
    // ------------------------------------    |   -------------------------------------------
    // ------------------------------------    |   -------------------------------------------

    Mat img;
    img = imread(segmented_pic[pic]);
    Mat copy;
    img.convertTo(copy, CV_8UC1);
    int row = img.rows;
    int col = img.cols * (img.channels());

    //allocate img_arr dynamically with img.rows and img.cols
    int** array = new int* [row];
    for (int i = 0; i < img.rows; i++)
    {
        array[i] = new int[col];
    }

    // ********************************************************************************
    for (int i = 0; i < img.rows; i++)
    {
        for (int j = 0; j < img.cols; j++)
        {
            array[i][j] = img.at<Vec3b>(i, j)[0];
        }
    }
    // ********************************************************************************

    // *********************************************************************************
    //                                   LESION SEPERATION
    array = task1(array, row, col);

    // *********************************************************************************
    //                                 RESTORING ARRAY TO IMAGE

    for (int i = 0; i < img.rows; i++)
    {
        for (int j = 0; j < img.cols; j++)
        {
            img.at<Vec3b>(i, j)[0] = array[i][j];
            img.at<Vec3b>(i, j)[1] = array[i][j];
            img.at<Vec3b>(i, j)[2] = array[i][j];
        }
    }
    imshow("Result Image", img);
    imshow("Original", copy);
    waitKey();



    // ----------------------------------   /----\  -----------------------------------------
    // ----------------------------------   |    /  -----------------------------------------
    // ----------------------------------       /   -----------------------------------------
    // ----------------------------------     /     -----------------------------------------
    // ----------------------------------   /_____  -----------------------------------------


     //Reading image from ground truth
    Mat img2;
    img2 = imread(original_pic[pic]);// put path of the image in original images folder
    Mat copy2;
    img2.convertTo(copy2, CV_8UC1);

    int row2 = img2.rows;
    int col2 = img2.cols * (img2.channels());
    int** array2 = new int* [row2];
    for (int i = 0; i < img2.rows; i++)
    {
        array2[i] = new int[col2]; // * img.channels()
    }

    // ********************************************************************************
    for (int i = 0; i < img2.rows; i++)
    {
        for (int j = 0; j < img2.cols; j++)
        {
            array2[i][j] = img2.at<Vec3b>(i, j)[0];
        }
    }

    array2 = task2(array2, img2.rows, img2.cols);
    // array2 = task1(array2, img2.rows, img2.cols);
    for (int i = 0; i < img2.rows; i++)
    {
        for (int j = 0; j < img2.cols; j++)
        {
            img2.at<Vec3b>(i, j)[0] = array2[i][j];
            img2.at<Vec3b>(i, j)[1] = array2[i][j];
            img2.at<Vec3b>(i, j)[2] = array2[i][j];
        }
    }
    imshow("Result Image", img2);
    imwrite("C:\\Users\\Zunaira\\Downloads\\img.png", img2);
    imshow("Original Image", copy2);
    waitKey();



    // --------------------------------    ___    ------------------------------------------
    // --------------------------------       \   ------------------------------------------
    // --------------------------------    ___/   ------------------------------------------
    // --------------------------------       \   ------------------------------------------
    // --------------------------------    ___/   ------------------------------------------

    //  Using ground truths
    Mat img3;
    img3 = imread(ground_pic[pic]);
    /* Mat copy3;
     img3.convertTo(copy3, CV_8UC1);
 */

    int row3 = img3.rows;
    int col3 = img3.cols * (img3.channels());
    int** array3 = new int* [row3];
    for (int i = 0; i < img3.rows; i++)
    {
        array3[i] = new int[col3];
    }

    for (int i = 0; i < img3.rows; i++)
    {
        for (int j = 0; j < img3.cols; j++)
        {
            array3[i][j] = img3.at<Vec3b>(i, j)[0];
        }
    }
    double tp1 = 0, tp2 = 0, fp1 = 0, fp2 = 0, fn1 = 0, fn2 = 0;
    double dc1 = 0, dc2 = 0;

    tp1 = true_p(array3, array, row, col);
    fp1 = false_p(array3, array, row, col);
    fn1 = false_n(array3, array, row, col);

    dc1 = ((2.0 * tp1) / (fn1 + (2.0 * tp1) + fp1));

    cout << "Dice coefficient while comparing to segmented outputs from task 1 is " << dc1 << endl;

    // Comparing with output of task 2
    tp2 = true_p(array3, array2, row, col);
    fp2 = false_p(array3, array2, row, col);
    fn2 = false_n(array3, array2, row, col);

    dc2 = ((2 * tp2) / (fn2 + (2 * tp2) + fp2));

    cout << "Dice coefficient while comparing to original outputs from task 2 is " << dc2;



    // ----------------------------------    /|   ------------------------------------------
    // ----------------------------------   / |   ------------------------------------------
    // ----------------------------------  /__|_  ------------------------------------------
    // ----------------------------------     |   ------------------------------------------
    // ----------------------------------     |   ------------------------------------------


    List* l2 = new List[row];
    l2 = task4(array, row, col, l2);


    return 0;
}
