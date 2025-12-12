#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RtpTransportControllerSendInterface; }
namespace webrtc { struct RtpTransportConfig; }
// clang-format on

namespace webrtc {

class RtpTransportControllerSendFactoryInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RtpTransportControllerSendFactoryInterface() = default;

    virtual ::std::unique_ptr<::webrtc::RtpTransportControllerSendInterface>
    Create(::webrtc::RtpTransportConfig const&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
