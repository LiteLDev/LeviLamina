#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

class NetworkBinderInterface {
public:
    // prevent constructor by default
    NetworkBinderInterface& operator=(NetworkBinderInterface const&);
    NetworkBinderInterface(NetworkBinderInterface const&);
    NetworkBinderInterface();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0() = 0;

    // vIndex: 1, symbol: ??1NetworkBinderInterface@rtc@@UEAA@XZ
    virtual ~NetworkBinderInterface();

    // NOLINTEND
};

}; // namespace rtc
