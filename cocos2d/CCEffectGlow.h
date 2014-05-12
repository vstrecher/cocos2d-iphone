//
//  CCEffectGlow.h
//  cocos2d-ios
//
//  Created by Oleg Osin on 4/14/14.
//
//

#import "CCEffect.h"
#import "CCColor.h"

#if CC_ENABLE_EXPERIMENTAL_EFFECTS
@interface CCEffectGlow : CCEffect

@property (nonatomic) float blurRadius;

-(id)initWithBlurRadius:(float)blurRadius;
+(id)effectWithRadius:(float)blurRadius;

@end
#endif
