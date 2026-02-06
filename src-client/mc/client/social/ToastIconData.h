#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

struct ToastIconData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>             iconId;
    ::ll::TypedStorage<8, 48, ::HashedString> iconTag;
    // NOLINTEND

public:
    // prevent constructor by default
    ToastIconData& operator=(ToastIconData const&);
    ToastIconData(ToastIconData const&);
    ToastIconData();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::ToastIconData& operator=(::ToastIconData&&);

    MCAPI ~ToastIconData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
