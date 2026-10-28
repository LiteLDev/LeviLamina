#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/player/SkinImage.h"
#include "mc/world/actor/player/persona/AnimatedTextureType.h"
#include "mc/world/actor/player/persona/AnimationExpression.h"

// auto generated forward declare list
// clang-format off
namespace mce { struct Image; }
// clang-format on

class AnimatedImageData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::persona::AnimatedTextureType> mType;
    ::ll::TypedStorage<4, 4, ::persona::AnimationExpression> mAnimationExpression;
    ::ll::TypedStorage<8, 48, ::SkinImage>                   mImage;
    ::ll::TypedStorage<4, 4, float>                          mFrames;
    // NOLINTEND

public:
    // prevent constructor by default
    AnimatedImageData();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCAPI AnimatedImageData(::AnimatedImageData const& rhs);
#endif

    MCAPI AnimatedImageData(
        ::persona::AnimatedTextureType type,
        ::persona::AnimationExpression animationExpression,
        ::mce::Image const&            animatedImage,
        float                          frames
    );

#ifdef LL_PLAT_S
    MCAPI ::AnimatedImageData& operator=(::AnimatedImageData const& rhs);
#endif

    MCAPI void setSkinImage(::SkinImage const& image);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCAPI void* $ctor(::AnimatedImageData const& rhs);
#endif

    MCAPI void* $ctor(
        ::persona::AnimatedTextureType type,
        ::persona::AnimationExpression animationExpression,
        ::mce::Image const&            animatedImage,
        float                          frames
    );
    // NOLINTEND
};
