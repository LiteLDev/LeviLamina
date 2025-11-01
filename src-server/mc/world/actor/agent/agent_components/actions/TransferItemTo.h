#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AgentComponents::Actions {

struct TransferItemTo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk30b91d;
    ::ll::UntypedStorage<4, 4> mUnk79b2e0;
    ::ll::UntypedStorage<4, 4> mUnk2528ed;
    // NOLINTEND

public:
    // prevent constructor by default
    TransferItemTo& operator=(TransferItemTo const&);
    TransferItemTo(TransferItemTo const&);
    TransferItemTo();
};

} // namespace AgentComponents::Actions
