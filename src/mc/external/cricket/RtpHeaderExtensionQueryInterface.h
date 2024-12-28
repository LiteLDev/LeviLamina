#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { struct RtpHeaderExtensionCapability; }
// clang-format on

namespace cricket {

class RtpHeaderExtensionQueryInterface {
public:
    // prevent constructor by default
    RtpHeaderExtensionQueryInterface& operator=(RtpHeaderExtensionQueryInterface const&);
    RtpHeaderExtensionQueryInterface(RtpHeaderExtensionQueryInterface const&);
    RtpHeaderExtensionQueryInterface();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RtpHeaderExtensionQueryInterface();

    // vIndex: 1
    virtual ::std::vector<::webrtc::RtpHeaderExtensionCapability> GetRtpHeaderExtensions() const = 0;
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

} // namespace cricket
