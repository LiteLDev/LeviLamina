#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ToastIconData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk8efd79;
    ::ll::UntypedStorage<8, 48> mUnkc175c8;
    // NOLINTEND

public:
    // prevent constructor by default
    ToastIconData& operator=(ToastIconData const&);
    ToastIconData(ToastIconData const&);
    ToastIconData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ::ToastIconData& operator=(::ToastIconData&&);

    MCNAPI_C ~ToastIconData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};
