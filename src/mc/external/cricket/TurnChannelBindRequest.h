#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class TurnEntry; }
namespace cricket { class TurnPort; }
namespace rtc { class SocketAddress; }
// clang-format on

namespace cricket {

class TurnChannelBindRequest {
public:
    // prevent constructor by default
    TurnChannelBindRequest();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TurnChannelBindRequest(::cricket::TurnPort*, ::cricket::TurnEntry*, int, ::rtc::SocketAddress const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::cricket::TurnPort*, ::cricket::TurnEntry*, int, ::rtc::SocketAddress const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cricket
