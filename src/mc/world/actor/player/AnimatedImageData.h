#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/mce/Image.h"
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
    /**
     * @symbol ??0AnimatedImageData\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI AnimatedImageData(class AnimatedImageData const&);
    /**
     * @symbol
     * ??0AnimatedImageData\@\@QEAA\@W4AnimatedTextureType\@persona\@\@W4AnimationExpression\@2\@AEBUImage\@mce\@\@M\@Z
     */
    MCAPI AnimatedImageData(
        enum class persona::AnimatedTextureType,
        enum class persona::AnimationExpression,
        struct mce::Image const&,
        float
    );
    /**
     * @symbol ??4AnimatedImageData\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class AnimatedImageData& operator=(class AnimatedImageData const&);
    // NOLINTEND
};
