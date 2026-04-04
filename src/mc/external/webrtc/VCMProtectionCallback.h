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
    virtual int ProtectionRequest(
        ::webrtc::FecProtectionParams const* delta_params,
        ::webrtc::FecProtectionParams const* key_params,
        uint*                                sent_video_rate_bps,
        uint*                                sent_nack_rate_bps,
        uint*                                sent_fec_rate_bps
    ) = 0;

    virtual void SetRetransmissionMode(int retransmission_mode) = 0;

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
