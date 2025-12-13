#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { struct FecProtectionParams; }
// clang-format on

namespace webrtc {

class VCMProtectionCallback {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual int ProtectionRequest(
        ::webrtc::FecProtectionParams const*,
        ::webrtc::FecProtectionParams const*,
        uint*,
        uint*,
        uint*
    ) = 0;

    // vIndex: 1
    virtual void SetRetransmissionMode(int) = 0;

    // vIndex: 2
    virtual ~VCMProtectionCallback();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
