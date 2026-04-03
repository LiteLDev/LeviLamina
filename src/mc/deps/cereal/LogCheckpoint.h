#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal {

class LogCheckpoint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkf3594c;
    ::ll::UntypedStorage<4, 4> mUnka33bce;
    // NOLINTEND

public:
    // prevent constructor by default
    LogCheckpoint& operator=(LogCheckpoint const&);
    LogCheckpoint(LogCheckpoint const&);
    LogCheckpoint();
};

} // namespace cereal
