#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

struct TransportInfo {
public:
    // prevent constructor by default
    TransportInfo& operator=(TransportInfo const&);
    TransportInfo(TransportInfo const&);
    TransportInfo();

public:
    // NOLINTBEGIN
    // symbol: ??1TransportInfo@cricket@@QEAA@XZ
    MCAPI ~TransportInfo();

    // NOLINTEND
};

}; // namespace cricket
