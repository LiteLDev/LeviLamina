#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace br::worldgen {

struct Rigid {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 24> mUnk275025;
    ::ll::UntypedStorage<1, 1>  mUnk9c91b6;
    ::ll::UntypedStorage<4, 4>  mUnke03859;
    // NOLINTEND

public:
    // prevent constructor by default
    Rigid& operator=(Rigid const&);
    Rigid(Rigid const&);
    Rigid();
};

} // namespace br::worldgen
