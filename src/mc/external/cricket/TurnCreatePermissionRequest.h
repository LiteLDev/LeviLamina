#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class TurnEntry; }
namespace cricket { class TurnPort; }
namespace rtc { class SocketAddress; }
// clang-format on

namespace cricket {

class TurnCreatePermissionRequest {
public:
    // prevent constructor by default
    TurnCreatePermissionRequest& operator=(TurnCreatePermissionRequest const&);
    TurnCreatePermissionRequest(TurnCreatePermissionRequest const&);
    TurnCreatePermissionRequest();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TurnCreatePermissionRequest(::cricket::TurnPort*, ::cricket::TurnEntry*, ::rtc::SocketAddress const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::cricket::TurnPort*, ::cricket::TurnEntry*, ::rtc::SocketAddress const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cricket
