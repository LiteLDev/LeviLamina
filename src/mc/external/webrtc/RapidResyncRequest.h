#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc::rtcp { class CommonHeader; }
// clang-format on

namespace webrtc::rtcp {

class RapidResyncRequest {
public:
    // prevent constructor by default
    RapidResyncRequest& operator=(RapidResyncRequest const&);
    RapidResyncRequest(RapidResyncRequest const&);
    RapidResyncRequest();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool Parse(::webrtc::rtcp::CommonHeader const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc::rtcp
