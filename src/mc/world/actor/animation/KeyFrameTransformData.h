#pragma once

#include "mc/_HeaderOutputPredefine.h"

class KeyFrameTransformData {
public:
    // prevent constructor by default
    KeyFrameTransformData& operator=(KeyFrameTransformData const&);
    KeyFrameTransformData();

public:
    // NOLINTBEGIN
    // symbol: ??0KeyFrameTransformData@@QEAA@AEBV0@@Z
    MCAPI KeyFrameTransformData(class KeyFrameTransformData const&);

    // symbol: ?addChannelTransform@KeyFrameTransformData@@QEAAXAEBVExpressionNode@@AEBVVec3@@@Z
    MCAPI void addChannelTransform(class ExpressionNode const& expression, class Vec3 const& axis);

    // symbol: ?addChannelTransform@KeyFrameTransformData@@QEAAXAEBVExpressionNode@@H@Z
    MCAPI void addChannelTransform(class ExpressionNode const& expression, int axisIndex);

    // symbol: ??8KeyFrameTransformData@@QEBA_NAEBV0@@Z
    MCAPI bool operator==(class KeyFrameTransformData const& rhs) const;

    // NOLINTEND
};
