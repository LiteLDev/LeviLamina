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
    TurnRefreshRequest();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TurnRefreshRequest(::cricket::TurnPort*, int);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::cricket::TurnPort*, int);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cricket
