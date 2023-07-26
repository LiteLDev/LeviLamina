#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AgentComponents::Actions {

struct TransferItemTo {

public:
    // prevent constructor by default
    TransferItemTo& operator=(TransferItemTo const&) = delete;
    TransferItemTo(TransferItemTo const&)            = delete;
    TransferItemTo()                                 = delete;
};

}; // namespace AgentComponents::Actions
