#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct Mapping {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2>  mUnk23a9b6;
    ::ll::UntypedStorage<8, 8>  mUnkcbc77e;
    ::ll::UntypedStorage<1, 1>  mUnk918aaf;
    ::ll::UntypedStorage<1, 15> mUnkd252ba;
    ::ll::UntypedStorage<1, 15> mUnk25d375;
    // NOLINTEND

public:
    // prevent constructor by default
    Mapping& operator=(Mapping const&);
    Mapping(Mapping const&);
    Mapping();
};
