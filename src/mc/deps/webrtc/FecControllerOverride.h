#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class FecControllerOverride {
public:
    // prevent constructor by default
    FecControllerOverride& operator=(FecControllerOverride const&);
    FecControllerOverride(FecControllerOverride const&);
    FecControllerOverride();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0() = 0;

    // vIndex: 1, symbol: __gen_??1FecControllerOverride@webrtc@@UEAA@XZ
    virtual ~FecControllerOverride() = default;

    // NOLINTEND
};

}; // namespace webrtc
