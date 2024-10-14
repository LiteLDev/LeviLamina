#pragma once

#include "mc/_HeaderOutputPredefine.h"

class KeyFrameTransform {
public:
    // prevent constructor by default
    KeyFrameTransform& operator=(KeyFrameTransform const&);
    KeyFrameTransform();

public:
    // NOLINTBEGIN
    MCAPI KeyFrameTransform(class KeyFrameTransform const&);

    MCAPI explicit KeyFrameTransform(float keyFrameTimeStamp);

    MCAPI class KeyFrameLerpMode& getLerpMode();

    MCAPI class KeyFrameTransform& operator=(class KeyFrameTransform&&);

    MCAPI bool optimizeAndGetDataValues(class Vec3& minValue, class Vec3& maxValue);

    MCAPI void set(class ExpressionNode const& expression);

    MCAPI void set(class ExpressionNode const& expression, class Vec3 const& axis);

    MCAPI void set(class ExpressionNode const& expression, int axisIndex);

    MCAPI void setPost(class ExpressionNode const& expression, int axisIndex);

    MCAPI void setPre(class ExpressionNode const& expression, int axisIndex);

    MCAPI ~KeyFrameTransform();

    MCAPI static void computeCubicPolynomial(
        class KeyFrameTransform* p0,
        class KeyFrameTransform& p1,
        class KeyFrameTransform& p2,
        class KeyFrameTransform* p3
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
