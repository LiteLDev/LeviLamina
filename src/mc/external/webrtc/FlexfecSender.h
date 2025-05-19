#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Clock; }
namespace webrtc { struct RtpExtension; }
namespace webrtc { struct RtpExtensionSize; }
namespace webrtc { struct RtpState; }
// clang-format on

namespace webrtc {

class FlexfecSender {
public:
    // prevent constructor by default
    FlexfecSender();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FlexfecSender(
        int,
        uint,
        uint,
        ::std::string_view,
        ::std::vector<::webrtc::RtpExtension> const&,
        ::rtc::ArrayView<::webrtc::RtpExtensionSize const>,
        ::webrtc::RtpState const*,
        ::webrtc::Clock*
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        int,
        uint,
        uint,
        ::std::string_view,
        ::std::vector<::webrtc::RtpExtension> const&,
        ::rtc::ArrayView<::webrtc::RtpExtensionSize const>,
        ::webrtc::RtpState const*,
        ::webrtc::Clock*
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
