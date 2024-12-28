#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemParseContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkdedfcd;
    ::ll::UntypedStorage<8, 64> mUnk102ed8;
    ::ll::UntypedStorage<8, 64> mUnk40e213;
    ::ll::UntypedStorage<8, 64> mUnk8b6109;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemParseContext& operator=(ItemParseContext const&);
    ItemParseContext(ItemParseContext const&);
    ItemParseContext();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ItemParseContext();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
