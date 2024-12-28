#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc::rtcp { class CommonHeader; }
// clang-format on

namespace webrtc::rtcp {

class Pli {
public:
    // prevent constructor by default
    Pli& operator=(Pli const&);
    Pli(Pli const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool Parse(::webrtc::rtcp::CommonHeader const&);

    MCAPI Pli();
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
