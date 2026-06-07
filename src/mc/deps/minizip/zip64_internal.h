#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct zip64_internal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 88>    mUnk95cf42;
    ::ll::UntypedStorage<8, 8>     mUnk278aa9;
    ::ll::UntypedStorage<1, 16>    mUnkad303f;
    ::ll::UntypedStorage<4, 4>     mUnkb37523;
    ::ll::UntypedStorage<1, 65712> mUnkee3540;
    ::ll::UntypedStorage<8, 8>     mUnka4a581;
    ::ll::UntypedStorage<8, 8>     mUnk8d20fd;
    ::ll::UntypedStorage<8, 8>     mUnk3aed56;
    ::ll::UntypedStorage<8, 8>     mUnkd7752c;
    // NOLINTEND

public:
    // prevent constructor by default
    zip64_internal& operator=(zip64_internal const&);
    zip64_internal(zip64_internal const&);
    zip64_internal();
};
