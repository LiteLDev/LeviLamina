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
    AnimatedImageData(AnimatedImageData const&);
    AnimatedImageData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AnimatedImageData(
        ::persona::AnimatedTextureType type,
        ::persona::AnimationExpression animationExpression,
        ::mce::Image const&            animatedImage,
        float                          frames
    );

    MCAPI ::AnimatedImageData& operator=(::AnimatedImageData const& rhs);

    MCAPI bool operator==(::AnimatedImageData const&) const;

    MCAPI void setSkinImage(::SkinImage const& image);

#ifdef LL_PLAT_C
    MCAPI ~AnimatedImageData();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::persona::AnimatedTextureType type,
        ::persona::AnimationExpression animationExpression,
        ::mce::Image const&            animatedImage,
        float                          frames
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void $dtor();
#endif
    // NOLINTEND
};
