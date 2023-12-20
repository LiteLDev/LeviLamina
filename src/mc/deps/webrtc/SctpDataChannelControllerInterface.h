#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class SctpDataChannelControllerInterface {
public:
    // prevent constructor by default
    SctpDataChannelControllerInterface& operator=(SctpDataChannelControllerInterface const&);
    SctpDataChannelControllerInterface(SctpDataChannelControllerInterface const&);
    SctpDataChannelControllerInterface();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0() = 0;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1() = 0;

    // vIndex: 2, symbol: __unk_vfn_2
    virtual void __unk_vfn_2() = 0;

    // vIndex: 3, symbol: __unk_vfn_3
    virtual void __unk_vfn_3() = 0;

    // vIndex: 4, symbol: __unk_vfn_4
    virtual void __unk_vfn_4() = 0;

    // vIndex: 5, symbol: __unk_vfn_5
    virtual void __unk_vfn_5() = 0;

    // vIndex: 6, symbol: ??1SctpDataChannelControllerInterface@webrtc@@MEAA@XZ
    virtual ~SctpDataChannelControllerInterface();

    // NOLINTEND
};

}; // namespace webrtc
