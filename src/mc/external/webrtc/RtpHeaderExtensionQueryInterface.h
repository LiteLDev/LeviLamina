#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { struct RtpHeaderExtensionCapability; }
// clang-format on

namespace webrtc {

class RtpHeaderExtensionQueryInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RtpHeaderExtensionQueryInterface();

    virtual ::std::vector<::webrtc::RtpHeaderExtensionCapability> GetRtpHeaderExtensions() const = 0;
    // NOLINTEND
};

} // namespace webrtc
