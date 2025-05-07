#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

struct ItemTag : public ::HashedString {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ItemTag(::std::string const& str);

    MCAPI ~ItemTag();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::std::string const& str);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
