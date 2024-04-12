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

    // symbol: ??4KeyFrameTransform@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class KeyFrameTransform& operator=(class KeyFrameTransform&&);

    // symbol: ?optimizeAndGetDataValues@KeyFrameTransform@@QEAA_NAEAVVec3@@0@Z
    MCAPI bool optimizeAndGetDataValues(class Vec3& minValue, class Vec3& maxValue);

    // symbol: ?set@KeyFrameTransform@@QEAAXAEBVExpressionNode@@@Z
    MCAPI void set(class ExpressionNode const& expression);

    // symbol: ?set@KeyFrameTransform@@QEAAXAEBVExpressionNode@@H@Z
    MCAPI void set(class ExpressionNode const& expression, int axisIndex);

    // symbol: ??1KeyFrameTransform@@QEAA@XZ
    MCAPI ~KeyFrameTransform();

    // symbol: ?computeCubicPolynomial@KeyFrameTransform@@SAXPEAV1@AEAV1@10@Z
    MCAPI static void computeCubicPolynomial(
        class KeyFrameTransform* p0,
        class KeyFrameTransform& p1,
        class KeyFrameTransform& p2,
        class KeyFrameTransform* p3
    );

    // NOLINTEND
};
