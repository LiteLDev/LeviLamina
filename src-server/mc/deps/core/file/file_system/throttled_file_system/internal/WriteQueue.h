#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core::Internal {

class WriteQueue {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk317768;
    // NOLINTEND

public:
    // prevent constructor by default
    WriteQueue& operator=(WriteQueue const&);
    WriteQueue(WriteQueue const&);
    WriteQueue();

};

}
