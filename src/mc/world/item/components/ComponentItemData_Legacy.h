#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ComponentItemData_Legacy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkff2ccd;
    ::ll::UntypedStorage<8, 24> mUnk32ef34;
    ::ll::UntypedStorage<8, 40> mUnk477935;
    ::ll::UntypedStorage<8, 40> mUnka90ecd;
    ::ll::UntypedStorage<4, 8>  mUnk84ee2c;
    ::ll::UntypedStorage<4, 8>  mUnkfc6298;
    ::ll::UntypedStorage<4, 8>  mUnkb0eb5d;
    ::ll::UntypedStorage<4, 8>  mUnk8ee6f4;
    ::ll::UntypedStorage<4, 8>  mUnk429bf0;
    ::ll::UntypedStorage<4, 8>  mUnkfed70d;
    ::ll::UntypedStorage<1, 2>  mUnk98de32;
    ::ll::UntypedStorage<4, 8>  mUnk97e102;
    ::ll::UntypedStorage<1, 2>  mUnka9b5f0;
    ::ll::UntypedStorage<1, 2>  mUnk42a627;
    ::ll::UntypedStorage<1, 2>  mUnk111268;
    ::ll::UntypedStorage<1, 2>  mUnkbf1c15;
    ::ll::UntypedStorage<1, 2>  mUnk754359;
    ::ll::UntypedStorage<1, 2>  mUnkd10418;
    ::ll::UntypedStorage<1, 2>  mUnkac9fba;
    ::ll::UntypedStorage<1, 2>  mUnk7ed0db;
    ::ll::UntypedStorage<1, 2>  mUnk85e4f4;
    ::ll::UntypedStorage<1, 2>  mUnkecfff4;
    // NOLINTEND

public:
    // prevent constructor by default
    ComponentItemData_Legacy();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ComponentItemData_Legacy(::ComponentItemData_Legacy&&);

    MCNAPI ComponentItemData_Legacy(::ComponentItemData_Legacy const&);

    MCNAPI ::ComponentItemData_Legacy& operator=(::ComponentItemData_Legacy&&);

    MCNAPI ::ComponentItemData_Legacy& operator=(::ComponentItemData_Legacy const&);

    MCNAPI ~ComponentItemData_Legacy();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ComponentItemData_Legacy&&);

    MCNAPI void* $ctor(::ComponentItemData_Legacy const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
