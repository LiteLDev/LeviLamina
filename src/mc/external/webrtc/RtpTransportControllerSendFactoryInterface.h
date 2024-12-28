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
    // prevent constructor by default
    RtpTransportControllerSendFactoryInterface& operator=(RtpTransportControllerSendFactoryInterface const&);
    RtpTransportControllerSendFactoryInterface(RtpTransportControllerSendFactoryInterface const&);
    RtpTransportControllerSendFactoryInterface();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RtpTransportControllerSendFactoryInterface();

    // vIndex: 1
    virtual ::std::unique_ptr<::webrtc::RtpTransportControllerSendInterface>
    Create(::webrtc::RtpTransportConfig const&) = 0;
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
