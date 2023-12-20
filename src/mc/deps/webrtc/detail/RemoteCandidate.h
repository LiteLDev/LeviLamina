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
    // NOLINTBEGIN
    // symbol: ??1RemoteCandidate@cricket@@QEAA@XZ
    MCAPI ~RemoteCandidate();

    // NOLINTEND
};

}; // namespace cricket
