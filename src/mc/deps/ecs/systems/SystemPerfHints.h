#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SystemPerfHints {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk35888f;
    ::ll::UntypedStorage<1, 1> mUnk3c582d;
    // NOLINTEND

public:
    // prevent constructor by default
    SystemPerfHints& operator=(SystemPerfHints const&);
    SystemPerfHints(SystemPerfHints const&);
    SystemPerfHints();
};
