#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class Random {
public:
    // prevent constructor by default
    Random& operator=(Random const&);
    Random(Random const&);
    Random();

public:
    // NOLINTBEGIN
    // symbol: ?Rand@Random@webrtc@@QEAAHHH@Z
    MCAPI int Rand(int, int);

    // symbol: ?Rand@Random@webrtc@@QEAAII@Z
    MCAPI uint Rand(uint);

    // symbol: ?Rand@Random@webrtc@@QEAAIII@Z
    MCAPI uint Rand(uint, uint);

    // symbol: ??0Random@webrtc@@QEAA@_K@Z
    MCAPI explicit Random(uint64);

    // NOLINTEND
};

}; // namespace webrtc
