#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ComponentItemDataAll_Latest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 3816> mUnkdab0d7;
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
    MCAPI ComponentItemDataAll_Latest(::ComponentItemDataAll_Latest&&);

    MCAPI ::ComponentItemDataAll_Latest& operator=(::ComponentItemDataAll_Latest const&);

    MCAPI ~ComponentItemDataAll_Latest();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ComponentItemDataAll_Latest&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
