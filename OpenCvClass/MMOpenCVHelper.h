//
//  MMOpenCVHelper.h
//  MMCamScanner
//
//  Created by mukesh mandora on 09/06/15.
//  Copyright (c) 2015 madapps. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
#import "ImageProcessor.h"


@interface MMOpenCVHelper : NSObject
+ (UIImage *)UIImageFromCVMat:(cv::Mat)cvMat;

+ (cv::Mat)cvMatFromAdjustedUIImage:(UIImage *)image;
+ (cv::Mat)cvMatFromUIImage:(UIImage *)image;
+ (cv::Mat)cvMatGrayFromUIImage:(UIImage *)image;
+ (cv::Mat)cvMatGrayFromAdjustedUIImage:(UIImage *)image;
+(UIImage *)grayImage:(UIImage *)processedImage;
+(UIImage *)magicColor:(UIImage *)processedImage;
+(UIImage *)blackandWhite:(UIImage *)processedImage;
+ (UIImage*) processHistogram:(UIImage*)src;
+ (UIImage*) processFilter:(UIImage*)src;
+ (UIImage*) processBinarize:(UIImage*)src;

@end