#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/player/persona/AnimatedTextureType.h"
#include "mc/world/actor/player/persona/AnimationExpression.h"

// auto generated forward declare list
// clang-format off
namespace mce { struct Image; }
// clang-format on

class AnimatedImageData {
public:
    // prevent constructor by default
    AnimatedImageData();

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
    MCAPI void* ctor$(
        ::persona::AnimatedTextureType type,
        ::persona::AnimationExpression animationExpression,
        struct mce::Image const&       animatedImage,
        float                          frames
    );

    MCAPI void* ctor$(class AnimatedImageData const& rhs);

    // NOLINTEND
};
