#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

struct ItemTag : public ::HashedString {
public:
    // prevent constructor by default
    ItemTag& operator=(ItemTag const&);
    ItemTag(ItemTag const&);
    ItemTag();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ItemTag();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
