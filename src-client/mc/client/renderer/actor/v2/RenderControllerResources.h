#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct RenderControllerResources {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk5fc31b;
    ::ll::UntypedStorage<8, 24> mUnk486984;
    ::ll::UntypedStorage<8, 24> mUnkb400d4;
    ::ll::UntypedStorage<8, 24> mUnkab7ea3;
    ::ll::UntypedStorage<8, 24> mUnkd89f49;
    ::ll::UntypedStorage<8, 24> mUnka6a667;
    ::ll::UntypedStorage<8, 24> mUnk1ef3e2;
    ::ll::UntypedStorage<8, 24> mUnk6ef917;
    ::ll::UntypedStorage<8, 24> mUnka1d605;
    ::ll::UntypedStorage<8, 24> mUnkd1a01b;
    ::ll::UntypedStorage<8, 24> mUnk39b6bc;
    ::ll::UntypedStorage<8, 24> mUnk830e03;
    ::ll::UntypedStorage<8, 24> mUnkaa1897;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderControllerResources& operator=(RenderControllerResources const&);
    RenderControllerResources(RenderControllerResources const&);
    RenderControllerResources();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~RenderControllerResources();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
