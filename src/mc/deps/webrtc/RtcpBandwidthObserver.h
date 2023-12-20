#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RtcpBandwidthObserver {
public:
    // prevent constructor by default
    RtcpBandwidthObserver& operator=(RtcpBandwidthObserver const&);
    RtcpBandwidthObserver(RtcpBandwidthObserver const&);
    RtcpBandwidthObserver();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0() = 0;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1() = 0;

    // vIndex: 2, symbol: ??1RtcpBandwidthObserver@webrtc@@UEAA@XZ
    virtual ~RtcpBandwidthObserver();

    // NOLINTEND
};

}; // namespace webrtc
