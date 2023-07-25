#pragma once

#include "mc/_HeaderOutputPredefine.h"

class KeyFrameTransformData {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_KEYFRAMETRANSFORMDATA
public:
    KeyFrameTransformData& operator=(KeyFrameTransformData const&) = delete;
    KeyFrameTransformData()                                        = delete;
#endif

public:
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
};
