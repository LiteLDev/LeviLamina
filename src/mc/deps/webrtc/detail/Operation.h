#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc::rtc_operations_chain_internal {

class Operation {
public:
    // prevent constructor by default
    Operation& operator=(Operation const&);
    Operation(Operation const&);
    Operation();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1Operation@rtc_operations_chain_internal@rtc@@UEAA@XZ
    virtual ~Operation();

    // NOLINTEND
};

}; // namespace rtc::rtc_operations_chain_internal
