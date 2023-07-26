#pragma once

#include "mc/_HeaderOutputPredefine.h"

class KeyFrameTransformData {

public:
    // prevent constructor by default
    KeyFrameTransformData& operator=(KeyFrameTransformData const&) = delete;
    KeyFrameTransformData()                                        = delete;

public:
    /**
     * @symbol ??0KeyFrameTransformData\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI KeyFrameTransformData(class KeyFrameTransformData const&); // NOLINT
    /**
     * @symbol ?addChannelTransform\@KeyFrameTransformData\@\@QEAAXAEBVExpressionNode\@\@H\@Z
     */
    MCAPI void addChannelTransform(class ExpressionNode const&, int); // NOLINT
    /**
     * @symbol ?addChannelTransform\@KeyFrameTransformData\@\@QEAAXAEBVExpressionNode\@\@AEBVVec3\@\@\@Z
     */
    MCAPI void addChannelTransform(class ExpressionNode const&, class Vec3 const&); // NOLINT
    /**
     * @symbol ??8KeyFrameTransformData\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class KeyFrameTransformData const&) const; // NOLINT
};
