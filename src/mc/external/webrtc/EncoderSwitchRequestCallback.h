#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { struct SdpVideoFormat; }
// clang-format on

namespace webrtc {

class EncoderSwitchRequestCallback {
public:
    // prevent constructor by default
    EncoderSwitchRequestCallback& operator=(EncoderSwitchRequestCallback const&);
    EncoderSwitchRequestCallback(EncoderSwitchRequestCallback const&);
    EncoderSwitchRequestCallback();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EncoderSwitchRequestCallback();

    // vIndex: 1
    virtual void RequestEncoderFallback() = 0;

    // vIndex: 2
    virtual void RequestEncoderSwitch(::webrtc::SdpVideoFormat const&, bool) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
