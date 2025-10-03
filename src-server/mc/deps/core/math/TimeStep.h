#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

struct TimeStep {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk29f454;
    ::ll::UntypedStorage<4, 4> mUnkbadd12;
    ::ll::UntypedStorage<4, 4> mUnk56140e;
    ::ll::UntypedStorage<4, 4> mUnk404987;
    ::ll::UntypedStorage<1, 1> mUnkde5271;
    ::ll::UntypedStorage<8, 8> mUnk7c8928;
    // NOLINTEND

public:
    // prevent constructor by default
    TimeStep& operator=(TimeStep const&);
    TimeStep(TimeStep const&);
    TimeStep();
};

} // namespace mce
