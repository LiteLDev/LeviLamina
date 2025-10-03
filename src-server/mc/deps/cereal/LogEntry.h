#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LogEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkaad9c4;
    ::ll::UntypedStorage<4, 4>  mUnk89a1b2;
    ::ll::UntypedStorage<8, 32> mUnk201431;
    // NOLINTEND

public:
    // prevent constructor by default
    LogEntry& operator=(LogEntry const&);
    LogEntry(LogEntry const&);
    LogEntry();
};
