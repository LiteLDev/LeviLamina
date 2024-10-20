#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/math/Vec3.h"

class ListenerInfo {
public:
    // prevent constructor by default
    ListenerInfo& operator=(ListenerInfo const&);
    ListenerInfo(ListenerInfo const&);
    ListenerInfo();


    std::function<void(class BlockPos const&, uint, class Block const&, class Actor*)> mCallback;  // this+0x0
    class Vec3                                                                         mPosition;  // this+0x40
    float                                                                              mRadiusSqr; // this+0x4C

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static float const& SQRT_FLT_MAX();

    // NOLINTEND
};
