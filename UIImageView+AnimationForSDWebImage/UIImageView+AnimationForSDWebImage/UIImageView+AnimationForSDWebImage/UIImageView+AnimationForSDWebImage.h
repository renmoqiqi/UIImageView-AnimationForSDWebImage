//
//  UIImageView+AnimationForSDWebImage.h
//  WonderSchoolStudents
//
//  Created by penghe on 15/9/4.
//  Copyright (c) 2015年 Wonders. All rights reserved.
//

/*
 
  类别思路来自于 UIActivityIndicatorForSDWebImage
  动画灵感来自于网易新闻
  TODO 以后会加入各种动画效果

 */

#import <UIKit/UIKit.h>
#import "SDWebImageCompat.h"
#import "SDWebImageManager.h"

@interface UIImageView (AnimationForSDWebImage)

- (NSURL *)sd_imageURL;


- (void)sd_setImageWithURL:(NSURL *)url fadeAnimation:(BOOL)fadeAnimation;


- (void)sd_setImageWithURL:(NSURL *)url placeholderImage:(UIImage *)placeholder fadeAnimation:(BOOL)fadeAnimation;


- (void)sd_setImageWithURL:(NSURL *)url placeholderImage:(UIImage *)placeholder options:(SDWebImageOptions)options fadeAnimation:(BOOL)fadeAnimation;


- (void)sd_setImageWithURL:(NSURL *)url completed:(SDWebImageCompletionBlock)completedBlock fadeAnimation:(BOOL)fadeAnimation;


- (void)sd_setImageWithURL:(NSURL *)url placeholderImage:(UIImage *)placeholder completed:(SDWebImageCompletionBlock)completedBlock fadeAnimation:(BOOL)fadeAnimation;


- (void)sd_setImageWithURL:(NSURL *)url placeholderImage:(UIImage *)placeholder options:(SDWebImageOptions)options completed:(SDWebImageCompletionBlock)completedBlock fadeAnimation:(BOOL)fadeAnimation;


- (void)sd_setImageWithURL:(NSURL *)url placeholderImage:(UIImage *)placeholder options:(SDWebImageOptions)options progress:(SDWebImageDownloaderProgressBlock)progressBlock completed:(SDWebImageCompletionBlock)completedBlock fadeAnimation:(BOOL)fadeAnimation;


- (void)sd_setImageWithPreviousCachedImageWithURL:(NSURL *)url andPlaceholderImage:(UIImage *)placeholder options:(SDWebImageOptions)options progress:(SDWebImageDownloaderProgressBlock)progressBlock completed:(SDWebImageCompletionBlock)completedBlock fadeAnimation:(BOOL)fadeAnimation;


- (void)sd_setAnimationImagesWithURLs:(NSArray *)arrayOfURLs;

- (void)sd_cancelCurrentImageLoad;

- (void)sd_cancelCurrentAnimationImagesLoad;

@end
