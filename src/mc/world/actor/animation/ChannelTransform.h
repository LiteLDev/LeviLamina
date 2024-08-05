#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ChannelTransform {
public:
    // prevent constructor by default
    ChannelTransform& operator=(ChannelTransform const&);
    ChannelTransform(ChannelTransform const&);
    ChannelTransform();

public:
    // NOLINTBEGIN
    MCAPI bool getDataValues(class Vec3& minValue, class Vec3& maxValue) const;

    // NOLINTEND
};
