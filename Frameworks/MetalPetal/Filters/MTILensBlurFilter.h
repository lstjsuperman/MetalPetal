//
//  MTILensBlurFilter.h
//  MetalPetal
//
//  Created by Yu Ao on 13/10/2017.
//

#import "MTIFilter.h"

NS_ASSUME_NONNULL_BEGIN

/// An implementation of lens blur (bokeh) based on `Siggraph 2011 - Advances in Real-Time Rendering`
/// https://colinbarrebrisebois.com/2017/04/18/hexagonal-bokeh-blur-revisited/

@interface MTILensBlurFilter : NSObject <MTIFilter>

@property (nonatomic, strong, nullable) MTIImage *inputImage;
@property (nonatomic, strong, nullable) MTIImage *inputMaskImage;

@property (nonatomic) float radius;
@property (nonatomic) float brightness;
@property (nonatomic) float angle;

@end

NS_ASSUME_NONNULL_END
