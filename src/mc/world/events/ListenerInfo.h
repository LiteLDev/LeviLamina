#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/math/Vec3.h"

class ListenerInfo {

public:
    // prevent constructor by default
    ListenerInfo& operator=(ListenerInfo const&) = delete;
    ListenerInfo(ListenerInfo const&)            = delete;
    ListenerInfo()                               = delete;


    std::function<void(class BlockPos const&, unsigned int, class Block const&, class Actor*)> mCallback;  // this+0x0
    class Vec3                                                                                 mPosition;  // this+0x40
    float                                                                                      mRadiusSqr; // this+0x4C

private:
    /**
     * @symbol ?SQRT_FLT_MAX\@ListenerInfo\@\@0MB
     */
    MCAPI static float const SQRT_FLT_MAX; // NOLINT
};
