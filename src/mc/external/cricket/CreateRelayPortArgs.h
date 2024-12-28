#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

struct CreateRelayPortArgs {
public:
    // prevent constructor by default
    CreateRelayPortArgs& operator=(CreateRelayPortArgs const&);
    CreateRelayPortArgs(CreateRelayPortArgs const&);
    CreateRelayPortArgs();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~CreateRelayPortArgs();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace cricket
