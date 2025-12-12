#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemStackResponseInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnkf9e13b;
    ::ll::UntypedStorage<4, 16> mUnk48f8f3;
    ::ll::UntypedStorage<8, 24> mUnkb244b8;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemStackResponseInfo& operator=(ItemStackResponseInfo const&);
    ItemStackResponseInfo(ItemStackResponseInfo const&);
    ItemStackResponseInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ItemStackResponseInfo(::ItemStackResponseInfo&&);

    MCNAPI ~ItemStackResponseInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ItemStackResponseInfo&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
