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

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ItemStackResponseInfo();

    MCAPI ItemStackResponseInfo(::ItemStackResponseInfo&&);

    MCAPI ~ItemStackResponseInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::ItemStackResponseInfo&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
