#pragma once

#include "mc/_HeaderOutputPredefine.h"

class KeyFrameTransformData {

public:
    // prevent constructor by default
    KeyFrameTransformData& operator=(KeyFrameTransformData const&) = delete;
    KeyFrameTransformData()                                        = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0KeyFrameTransformData\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI KeyFrameTransformData(class KeyFrameTransformData const&);
    /**
     * @symbol ?addChannelTransform\@KeyFrameTransformData\@\@QEAAXAEBVExpressionNode\@\@H\@Z
     */
    MCAPI void addChannelTransform(class ExpressionNode const&, int);
    /**
     * @symbol ?addChannelTransform\@KeyFrameTransformData\@\@QEAAXAEBVExpressionNode\@\@AEBVVec3\@\@\@Z
     */
    MCAPI void addChannelTransform(class ExpressionNode const&, class Vec3 const&);
    /**
     * @symbol ??8KeyFrameTransformData\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class KeyFrameTransformData const&) const;
    // NOLINTEND
};
