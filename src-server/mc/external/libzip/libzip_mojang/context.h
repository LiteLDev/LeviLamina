#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct context {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>   mUnkdd00e6;
    ::ll::UntypedStorage<1, 1>    mUnk9af183;
    ::ll::UntypedStorage<1, 1>    mUnk6b9087;
    ::ll::UntypedStorage<1, 1>    mUnk143b6a;
    ::ll::UntypedStorage<1, 1>    mUnk3a79d8;
    ::ll::UntypedStorage<1, 1>    mUnk7db916;
    ::ll::UntypedStorage<4, 4>    mUnke74666;
    ::ll::UntypedStorage<8, 8>    mUnk2c763d;
    ::ll::UntypedStorage<8, 8>    mUnka492af;
    ::ll::UntypedStorage<1, 8192> mUnk102860;
    ::ll::UntypedStorage<8, 8>    mUnka4478e;
    ::ll::UntypedStorage<8, 8>    mUnk50c138;
    // NOLINTEND

public:
    // prevent constructor by default
    context& operator=(context const&);
    context(context const&);
    context();
};
