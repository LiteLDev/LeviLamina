#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct InvalidPack {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 56> mUnkdb2dfc;
    ::ll::UntypedStorage<1, 1>  mUnkd3a810;
    ::ll::UntypedStorage<1, 1>  mUnkf792ad;
    // NOLINTEND

public:
    // prevent constructor by default
    InvalidPack& operator=(InvalidPack const&);
    InvalidPack(InvalidPack const&);
    InvalidPack();
};
