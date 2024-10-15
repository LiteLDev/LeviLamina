#pragma once

#include "mc/_HeaderOutputPredefine.h"

class KeyFrameTransformData {
public:
    // prevent constructor by default
    KeyFrameTransformData& operator=(KeyFrameTransformData const&);
    KeyFrameTransformData();

public:
    // NOLINTBEGIN
    MCAPI KeyFrameTransformData(class KeyFrameTransformData const&);

    MCAPI void addChannelTransform(class ExpressionNode const& expression, int axisIndex);

    MCAPI bool operator==(class KeyFrameTransformData const& rhs) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(class KeyFrameTransformData const&);

    // NOLINTEND
};
