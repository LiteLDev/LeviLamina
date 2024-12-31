#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PlayFab {

class CallRequestContainerBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk29aa93;
    ::ll::UntypedStorage<8, 64> mUnkcafb30;
    ::ll::UntypedStorage<8, 32> mUnk5a9c4a;
    ::ll::UntypedStorage<8, 16> mUnk7c70a3;
    ::ll::UntypedStorage<8, 64> mUnka5e4f7;
    ::ll::UntypedStorage<1, 1>  mUnk119476;
    ::ll::UntypedStorage<8, 8>  mUnk170dab;
    // NOLINTEND

public:
    // prevent constructor by default
    CallRequestContainerBase& operator=(CallRequestContainerBase const&);
    CallRequestContainerBase(CallRequestContainerBase const&);
    CallRequestContainerBase();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CallRequestContainerBase() = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace PlayFab
