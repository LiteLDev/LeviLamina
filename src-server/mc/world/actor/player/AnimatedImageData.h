#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/image/Image.h"
#include "mc/world/actor/player/persona/AnimatedTextureType.h"
#include "mc/world/actor/player/persona/AnimationExpression.h"

class AnimatedImageData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::persona::AnimatedTextureType> mType;
    ::ll::TypedStorage<4, 4, ::persona::AnimationExpression> mAnimationExpression;
    ::ll::TypedStorage<8, 48, ::mce::Image> mImage;
    ::ll::TypedStorage<4, 4, float> mFrames;
    // NOLINTEND

public:
    // prevent constructor by default
    AnimatedImageData(AnimatedImageData const&);
    AnimatedImageData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AnimatedImageData(::persona::AnimatedTextureType type, ::persona::AnimationExpression animationExpression, ::mce::Image const& animatedImage, float frames);

    MCNAPI ::AnimatedImageData& operator=(::AnimatedImageData const& rhs);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::persona::AnimatedTextureType type, ::persona::AnimationExpression animationExpression, ::mce::Image const& animatedImage, float frames);
    // NOLINTEND

};
