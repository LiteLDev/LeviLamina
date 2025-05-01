#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc::rtcp { class CommonHeader; }
// clang-format on

namespace webrtc::rtcp {

class Remb {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool Parse(::webrtc::rtcp::CommonHeader const&);

    MCNAPI Remb();

    MCNAPI bool SetSsrcs(::std::vector<uint>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc::rtcp
