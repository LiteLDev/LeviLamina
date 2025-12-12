#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { struct RtpHeaderExtensionCapability; }
// clang-format on

namespace cricket {

class RtpHeaderExtensionQueryInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RtpHeaderExtensionQueryInterface() = default;

    virtual ::std::vector<::webrtc::RtpHeaderExtensionCapability> GetRtpHeaderExtensions() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace cricket
