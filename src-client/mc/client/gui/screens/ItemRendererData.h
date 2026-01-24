#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemRendererData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk810717;
    ::ll::UntypedStorage<1, 1>  mUnke79178;
    ::ll::UntypedStorage<4, 4>  mUnk7b49c7;
    ::ll::UntypedStorage<4, 4>  mUnk166186;
    ::ll::UntypedStorage<4, 4>  mUnk82a44f;
    ::ll::UntypedStorage<1, 1>  mUnk9f5b8d;
    ::ll::UntypedStorage<8, 32> mUnk344884;
    ::ll::UntypedStorage<8, 32> mUnk7e0e45;
    ::ll::UntypedStorage<8, 32> mUnk7c0407;
    ::ll::UntypedStorage<4, 4>  mUnkebca2a;
    ::ll::UntypedStorage<8, 32> mUnkeceb3b;
    ::ll::UntypedStorage<4, 4>  mUnk106e6e;
    ::ll::UntypedStorage<1, 1>  mUnk63ae04;
    ::ll::UntypedStorage<4, 4>  mUnk4a9914;
    ::ll::UntypedStorage<4, 4>  mUnk41da3a;
    ::ll::UntypedStorage<4, 4>  mUnkcd63d4;
    ::ll::UntypedStorage<1, 1>  mUnk23cc36;
    ::ll::UntypedStorage<1, 1>  mUnkb840c1;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemRendererData& operator=(ItemRendererData const&);
    ItemRendererData(ItemRendererData const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ItemRendererData();

    MCNAPI ~ItemRendererData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
