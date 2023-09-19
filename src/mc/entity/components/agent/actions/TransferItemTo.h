#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AgentComponents::Actions {

struct TransferItemTo {
public:
    // prevent constructor by default
    TransferItemTo& operator=(TransferItemTo const&);
    TransferItemTo(TransferItemTo const&);
    TransferItemTo();
};

}; // namespace AgentComponents::Actions
