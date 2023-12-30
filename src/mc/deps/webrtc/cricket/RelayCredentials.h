#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

struct RelayCredentials {
public:
    // prevent constructor by default
    RelayCredentials& operator=(RelayCredentials const&);
    RelayCredentials(RelayCredentials const&);
    RelayCredentials();

public:
    // NOLINTBEGIN
    // symbol: ??1RelayCredentials@cricket@@QEAA@XZ
    MCAPI ~RelayCredentials();

    // NOLINTEND
};

}; // namespace cricket
