#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { struct Image; }
namespace persona { enum class AnimatedTextureType; }
namespace persona { enum class AnimationExpression; }
// clang-format on

class AnimatedImageData {

public:
    // prevent constructor by default
    AnimatedImageData() = delete;

public:
    /**
     * @symbol
     * ??0AnimatedImageData\@\@QEAA\@W4AnimatedTextureType\@persona\@\@W4AnimationExpression\@2\@AEBUImage\@mce\@\@M\@Z
     */
    MCAPI AnimatedImageData(
        enum class persona::AnimatedTextureType,
        enum class persona::AnimationExpression,
        struct mce::Image const&,
        float
    ); // NOLINT
    /**
     * @symbol ??0AnimatedImageData\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI AnimatedImageData(class AnimatedImageData const&); // NOLINT
    /**
     * @symbol ??4AnimatedImageData\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class AnimatedImageData& operator=(class AnimatedImageData const&); // NOLINT
};
