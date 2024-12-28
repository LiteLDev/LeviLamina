#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct JSDebuggerLocation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk740850;
    ::ll::UntypedStorage<4, 4> mUnkd61073;
    ::ll::UntypedStorage<4, 4> mUnk937d71;
    // NOLINTEND

public:
    // prevent constructor by default
    JSDebuggerLocation& operator=(JSDebuggerLocation const&);
    JSDebuggerLocation(JSDebuggerLocation const&);
    JSDebuggerLocation();
};
