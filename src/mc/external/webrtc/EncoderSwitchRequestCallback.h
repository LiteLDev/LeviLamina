#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { struct SdpVideoFormat; }
// clang-format on

namespace webrtc {

class EncoderSwitchRequestCallback {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EncoderSwitchRequestCallback() = default;

    virtual void RequestEncoderFallback() = 0;

    virtual void RequestEncoderSwitch(::webrtc::SdpVideoFormat const&, bool) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
