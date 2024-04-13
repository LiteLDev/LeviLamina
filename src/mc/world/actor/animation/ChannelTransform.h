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
    // symbol: ?getDataValues@ChannelTransform@@QEBA_NAEAVVec3@@0@Z
    MCAPI bool getDataValues(class Vec3& minValue, class Vec3& maxValue) const;

    // NOLINTEND
};
