//
//  ViewController.m
//  LoadingImages
//
//  Created by penghe on 15/9/3.
//  Copyright (c) 2015年 penghe. All rights reserved.
//

#import "ViewController.h"
#import "UIImageView+AnimationForSDWebImage.h"

@interface ViewController ()

@property (weak, nonatomic) IBOutlet UIImageView *imageView;
@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(1.0 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        [self setupImageUrl];

    });
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (void)setupImageUrl
{

    [self.imageView sd_setImageWithURL:[NSURL URLWithString:@"http://wenwen.soso.com/p/20090901/20090901120123-329341688.jpg"] placeholderImage:[UIImage imageNamed:@"bg_merchant_photo_placeholder_big"] options:0 completed:^(UIImage *image, NSError *error, SDImageCacheType cacheType, NSURL *imageURL) {
        self.imageView.contentMode = UIViewContentModeScaleAspectFill;


    } fadeAnimation:YES];
}
@end
