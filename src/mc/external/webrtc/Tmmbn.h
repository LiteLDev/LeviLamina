#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc::rtcp { class CommonHeader; }
namespace webrtc::rtcp { class TmmbItem; }
// clang-format on

namespace webrtc::rtcp {

class Tmmbn {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void AddTmmbr(::webrtc::rtcp::TmmbItem const&);

    MCNAPI bool Parse(::webrtc::rtcp::CommonHeader const&);

    MCNAPI Tmmbn();
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
