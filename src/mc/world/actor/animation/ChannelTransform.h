#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ChannelTransform {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHANNELTRANSFORM
public:
    ChannelTransform& operator=(ChannelTransform const&) = delete;
    ChannelTransform(ChannelTransform const&)            = delete;
    ChannelTransform()                                   = delete;
#endif

public:
    /**
     * @symbol ?getDataValues\@ChannelTransform\@\@QEBA_NAEAVVec3\@\@0\@Z
     */
    MCAPI bool getDataValues(class Vec3&, class Vec3&) const;
};
