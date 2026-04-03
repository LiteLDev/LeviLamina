#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct RenderControllerResources {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkf342e5;
    ::ll::UntypedStorage<8, 24> mUnk6686e7;
    ::ll::UntypedStorage<8, 24> mUnk20dc79;
    ::ll::UntypedStorage<8, 24> mUnkbb682b;
    ::ll::UntypedStorage<8, 24> mUnkbf508d;
    ::ll::UntypedStorage<8, 24> mUnkbde109;
    ::ll::UntypedStorage<8, 24> mUnkac58ea;
    ::ll::UntypedStorage<8, 24> mUnkb56c92;
    ::ll::UntypedStorage<8, 24> mUnkd1b748;
    ::ll::UntypedStorage<8, 24> mUnke6219a;
    ::ll::UntypedStorage<8, 24> mUnk74b60b;
    ::ll::UntypedStorage<8, 24> mUnkeed25f;
    ::ll::UntypedStorage<8, 24> mUnkc5a813;
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
