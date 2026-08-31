#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TimelinePhase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkeac116;
    ::ll::UntypedStorage<4, 4>  mUnk520b16;
    ::ll::UntypedStorage<4, 4>  mUnkb5e68c;
    ::ll::UntypedStorage<4, 4>  mUnka7c0e2;
    ::ll::UntypedStorage<8, 32> mUnk6b5019;
    // NOLINTEND

public:
    // prevent constructor by default
    TimelinePhase& operator=(TimelinePhase const&);
    TimelinePhase(TimelinePhase const&);
    TimelinePhase();
};
