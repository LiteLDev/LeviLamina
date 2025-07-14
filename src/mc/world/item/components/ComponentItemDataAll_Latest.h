#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ComponentItemDataAll_Latest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 2032> mUnk9c48ea;
    ::ll::UntypedStorage<1, 2>    mUnk508f97;
    ::ll::UntypedStorage<8, 192>  mUnk213e50;
    ::ll::UntypedStorage<8, 32>   mUnk55128e;
    // NOLINTEND

public:
    // prevent constructor by default
    ComponentItemDataAll_Latest(ComponentItemDataAll_Latest const&);
    ComponentItemDataAll_Latest();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ComponentItemDataAll_Latest(::ComponentItemDataAll_Latest&&);

    MCNAPI ::ComponentItemDataAll_Latest& operator=(::ComponentItemDataAll_Latest const&);

    MCNAPI ~ComponentItemDataAll_Latest();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ComponentItemDataAll_Latest&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
