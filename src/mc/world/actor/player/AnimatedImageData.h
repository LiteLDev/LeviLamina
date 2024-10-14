#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/image/Image.h"

// auto generated inclusion list
#include "mc/world/actor/player/persona/AnimatedTextureType.h"
#include "mc/world/actor/player/persona/AnimationExpression.h"

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

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
