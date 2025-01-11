#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc::rtcp { class CommonHeader; }
namespace webrtc::rtcp { class TmmbItem; }
// clang-format on

namespace webrtc::rtcp {

class Tmmbr {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI void AddTmmbr(::webrtc::rtcp::TmmbItem const&);

    MCAPI bool Parse(::webrtc::rtcp::CommonHeader const&);

    MCAPI Tmmbr();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc::rtcp
