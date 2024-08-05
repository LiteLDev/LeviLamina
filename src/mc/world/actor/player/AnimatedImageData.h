#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/client/services/persona/AnimatedTextureType.h"
#include "mc/client/services/persona/AnimationExpression.h"
#include "mc/deps/core/mce/Image.h"

// auto generated inclusion list
#include "mc/client/services/persona/AnimatedTextureType.h"
#include "mc/client/services/persona/AnimationExpression.h"

// auto generated forward declare list
// clang-format off
namespace mce { struct Image; }
// clang-format on

class AnimatedImageData {
public:
    persona::AnimatedTextureType mType;
    persona::AnimationExpression mAnimationExpression;
    mce::Image                   mImage;
    float                        mFrames;

    AnimatedImageData() = delete;

public:
    // NOLINTBEGIN
    MCAPI AnimatedImageData(class AnimatedImageData const& rhs);

    MCAPI AnimatedImageData(
        ::persona::AnimatedTextureType type,
        ::persona::AnimationExpression animationExpression,
        struct mce::Image const&       animatedImage,
        float                          frames
    );

    MCAPI class AnimatedImageData& operator=(class AnimatedImageData const& rhs);

    // NOLINTEND
};
