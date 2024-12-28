#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc::rtcp { class CommonHeader; }
// clang-format on

namespace webrtc::rtcp {

class Remb {
public:
    // prevent constructor by default
    Remb& operator=(Remb const&);
    Remb(Remb const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool Parse(::webrtc::rtcp::CommonHeader const&);

    MCAPI Remb();

    MCAPI bool SetSsrcs(::std::vector<uint>);
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
