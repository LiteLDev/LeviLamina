#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class VCMProtectionCallback {
public:
    // prevent constructor by default
    VCMProtectionCallback& operator=(VCMProtectionCallback const&);
    VCMProtectionCallback(VCMProtectionCallback const&);
    VCMProtectionCallback();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0() = 0;

    // vIndex: 1, symbol: ??1VCMProtectionCallback@webrtc@@MEAA@XZ
    virtual ~VCMProtectionCallback();

    // NOLINTEND
};

}; // namespace webrtc
