#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/CallRequestContainerBase.h"

namespace PlayFab {

class CallRequestContainer : public ::PlayFab::CallRequestContainerBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>   mUnk710bce;
    ::ll::UntypedStorage<8, 32>  mUnke413db;
    ::ll::UntypedStorage<8, 16>  mUnk357c0d;
    ::ll::UntypedStorage<8, 200> mUnkbcb90e;
    ::ll::UntypedStorage<8, 16>  mUnk149cc1;
    ::ll::UntypedStorage<8, 64>  mUnk67a0a4;
    // NOLINTEND

public:
    // prevent constructor by default
    CallRequestContainer& operator=(CallRequestContainer const&);
    CallRequestContainer(CallRequestContainer const&);
    CallRequestContainer();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CallRequestContainer() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace PlayFab
