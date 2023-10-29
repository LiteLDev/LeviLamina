#pragma once

#include "mc/_HeaderOutputPredefine.h"

class KeyFrameTransform {
public:
    // prevent constructor by default
    KeyFrameTransform& operator=(KeyFrameTransform const&);
    KeyFrameTransform(KeyFrameTransform const&);
    KeyFrameTransform();

public:
    // NOLINTBEGIN
    // symbol: ??0KeyFrameTransform@@QEAA@M@Z
    MCAPI explicit KeyFrameTransform(float);

    // symbol: ?getLerpMode@KeyFrameTransform@@QEAAAEAVKeyFrameLerpMode@@XZ
    MCAPI class KeyFrameLerpMode& getLerpMode();

    // symbol: ??4KeyFrameTransform@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class KeyFrameTransform& operator=(class KeyFrameTransform&&);

    // symbol: ?optimizeAndGetDataValues@KeyFrameTransform@@QEAA_NAEAVVec3@@0@Z
    MCAPI bool optimizeAndGetDataValues(class Vec3&, class Vec3&);

    // symbol: ?set@KeyFrameTransform@@QEAAXAEBVExpressionNode@@@Z
    MCAPI void set(class ExpressionNode const&);

    // symbol: ?set@KeyFrameTransform@@QEAAXAEBVExpressionNode@@AEBVVec3@@@Z
    MCAPI void set(class ExpressionNode const&, class Vec3 const&);

    // symbol: ?set@KeyFrameTransform@@QEAAXAEBVExpressionNode@@H@Z
    MCAPI void set(class ExpressionNode const&, int);

    // symbol: ?setPost@KeyFrameTransform@@QEAAXAEBVExpressionNode@@H@Z
    MCAPI void setPost(class ExpressionNode const&, int);

    // symbol: ?setPre@KeyFrameTransform@@QEAAXAEBVExpressionNode@@H@Z
    MCAPI void setPre(class ExpressionNode const&, int);

    // symbol: ??1KeyFrameTransform@@QEAA@XZ
    MCAPI ~KeyFrameTransform();

    // symbol: ?computeCubicPolynomial@KeyFrameTransform@@SAXPEAV1@AEAV1@10@Z
    MCAPI static void
    computeCubicPolynomial(class KeyFrameTransform*, class KeyFrameTransform&, class KeyFrameTransform&, class KeyFrameTransform*);

    // NOLINTEND
};
