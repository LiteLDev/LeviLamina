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
    MCNAPI void OnAuthChallenge(::cricket::StunMessage*, int);

    MCNAPI void OnTryAlternate(::cricket::StunMessage*, int);

    MCNAPI explicit TurnAllocateRequest(::cricket::TurnPort*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::cricket::TurnPort*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cricket
