#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/WeakPtr.h"

// auto generated forward declare list
// clang-format off
class Item;
// clang-format on

struct ItemQueryOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::WeakPtr<::Item const>>> mItemTypes;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemQueryOptions& operator=(ItemQueryOptions const&);
    ItemQueryOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ItemQueryOptions(::ItemQueryOptions const&);

    MCAPI ~ItemQueryOptions();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ItemQueryOptions const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
