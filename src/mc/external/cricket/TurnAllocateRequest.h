#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class StunMessage; }
namespace cricket { class TurnPort; }
// clang-format on

namespace cricket {

class TurnAllocateRequest {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI void OnAuthChallenge(::cricket::StunMessage*, int);

    MCAPI void OnTryAlternate(::cricket::StunMessage*, int);

    MCAPI explicit TurnAllocateRequest(::cricket::TurnPort*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::cricket::TurnPort*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cricket
