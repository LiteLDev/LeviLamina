#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class TurnPort; }
// clang-format on

namespace cricket {

class TurnRefreshRequest {
public:
    // prevent constructor by default
    TurnRefreshRequest& operator=(TurnRefreshRequest const&);
    TurnRefreshRequest(TurnRefreshRequest const&);
    TurnRefreshRequest();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TurnRefreshRequest(::cricket::TurnPort*, int);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::cricket::TurnPort*, int);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cricket
