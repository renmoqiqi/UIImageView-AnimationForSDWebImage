# UIImageView-AnimationForSDWebImage
一个SDWebImage 类别 加载图片有一个过度动画效果
# 用法
```
[self.imageView sd_setImageWithURL:[NSURL URLWithString:@"http://wenwen.soso.com/p/20090901/20090901120123-329341688.jpg"] placeholderImage:[UIImage imageNamed:@"bg_merchant_photo_placeholder_big"] options:0 completed:^(UIImage *image, NSError *error, SDImageCacheType cacheType, NSURL *imageURL) {
        self.imageView.contentMode = UIViewContentModeScaleAspectFill;


    } fadeAnimation:YES]
```
 # gif 效果图
 
 
 
![](https://github.com/renmoqiqi/UIImageView-AnimationForSDWebImage/blob/master/demo.gif)  
