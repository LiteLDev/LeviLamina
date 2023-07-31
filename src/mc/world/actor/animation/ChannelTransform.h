#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ChannelTransform {

public:
    // prevent constructor by default
    ChannelTransform& operator=(ChannelTransform const&) = delete;
    ChannelTransform(ChannelTransform const&)            = delete;
    ChannelTransform()                                   = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?getDataValues\@ChannelTransform\@\@QEBA_NAEAVVec3\@\@0\@Z
     */
    MCAPI bool getDataValues(class Vec3&, class Vec3&) const;
    // NOLINTEND
};
