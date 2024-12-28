#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

class RemoteCandidate {
public:
    // prevent constructor by default
    RemoteCandidate& operator=(RemoteCandidate const&);
    RemoteCandidate(RemoteCandidate const&);
    RemoteCandidate();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~RemoteCandidate();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace cricket
