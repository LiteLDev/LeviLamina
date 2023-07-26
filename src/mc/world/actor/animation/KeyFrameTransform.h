#pragma once

#include "mc/_HeaderOutputPredefine.h"

class KeyFrameTransform {

public:
    // prevent constructor by default
    KeyFrameTransform& operator=(KeyFrameTransform const&) = delete;
    KeyFrameTransform(KeyFrameTransform const&)            = delete;
    KeyFrameTransform()                                    = delete;

public:
    /**
     * @symbol ??0KeyFrameTransform\@\@QEAA\@M\@Z
     */
    MCAPI KeyFrameTransform(float); // NOLINT
    /**
     * @symbol ??4KeyFrameTransform\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class KeyFrameTransform& operator=(class KeyFrameTransform&&); // NOLINT
    /**
     * @symbol ?optimizeAndGetDataValues\@KeyFrameTransform\@\@QEAA_NAEAVVec3\@\@0\@Z
     */
    MCAPI bool optimizeAndGetDataValues(class Vec3&, class Vec3&); // NOLINT
    /**
     * @symbol ?set\@KeyFrameTransform\@\@QEAAXAEBVExpressionNode\@\@H\@Z
     */
    MCAPI void set(class ExpressionNode const&, int); // NOLINT
    /**
     * @symbol ?set\@KeyFrameTransform\@\@QEAAXAEBVExpressionNode\@\@\@Z
     */
    MCAPI void set(class ExpressionNode const&); // NOLINT
    /**
     * @symbol ??1KeyFrameTransform\@\@QEAA\@XZ
     */
    MCAPI ~KeyFrameTransform(); // NOLINT
    /**
     * @symbol ?computeCubicPolynomial\@KeyFrameTransform\@\@SAXPEAV1\@AEAV1\@10\@Z
     */
    MCAPI static void
    computeCubicPolynomial(class KeyFrameTransform*, class KeyFrameTransform&, class KeyFrameTransform&, class KeyFrameTransform*); // NOLINT
};
