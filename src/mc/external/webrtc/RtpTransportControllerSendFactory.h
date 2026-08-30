#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RtpTransportControllerSendFactoryInterface.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RtpTransportControllerSendInterface; }
namespace webrtc { struct RtpTransportConfig; }
// clang-format on

namespace webrtc {

class RtpTransportControllerSendFactory : public ::webrtc::RtpTransportControllerSendFactoryInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::unique_ptr<::webrtc::RtpTransportControllerSendInterface>
    Create(::webrtc::RtpTransportConfig const& config) /*override*/;

    virtual ~RtpTransportControllerSendFactory() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::unique_ptr<::webrtc::RtpTransportControllerSendInterface>
    $Create(::webrtc::RtpTransportConfig const& config);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
