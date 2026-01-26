#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemResultPreview {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 128> mUnk301aba;
    ::ll::UntypedStorage<4, 4>   mUnk78cbb5;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemResultPreview& operator=(ItemResultPreview const&);
    ItemResultPreview(ItemResultPreview const&);
    ItemResultPreview();

public:
    // member functions
    // NOLINTBEGIN

    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};
