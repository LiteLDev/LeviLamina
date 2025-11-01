#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ContextMessage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk596c0e;
    ::ll::UntypedStorage<4, 4>  mUnkeb6b29;
    ::ll::UntypedStorage<8, 32> mUnk6f6aef;
    // NOLINTEND

public:
    // prevent constructor by default
    ContextMessage& operator=(ContextMessage const&);
    ContextMessage(ContextMessage const&);
    ContextMessage();
};
