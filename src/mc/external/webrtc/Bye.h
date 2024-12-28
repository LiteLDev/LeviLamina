#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc::rtcp { class CommonHeader; }
// clang-format on

namespace webrtc::rtcp {

class Bye {
public:
    // prevent constructor by default
    Bye& operator=(Bye const&);
    Bye(Bye const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Bye();

    MCAPI bool Parse(::webrtc::rtcp::CommonHeader const&);

    MCAPI bool SetCsrcs(::std::vector<uint>);
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
