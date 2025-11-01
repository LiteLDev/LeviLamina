#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

struct CreateRelayPortArgs {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk45a342;
    ::ll::UntypedStorage<8, 8> mUnkdfab71;
    ::ll::UntypedStorage<8, 8> mUnk1b2944;
    ::ll::UntypedStorage<8, 8> mUnk1a40f9;
    ::ll::UntypedStorage<8, 8> mUnk26b68f;
    ::ll::UntypedStorage<8, 32> mUnkcff901;
    ::ll::UntypedStorage<8, 32> mUnkcc3210;
    ::ll::UntypedStorage<8, 8> mUnk78c41b;
    ::ll::UntypedStorage<8, 8> mUnk852a30;
    ::ll::UntypedStorage<4, 4> mUnkad95e5;
    // NOLINTEND

public:
    // prevent constructor by default
    CreateRelayPortArgs& operator=(CreateRelayPortArgs const&);
    CreateRelayPortArgs(CreateRelayPortArgs const&);
    CreateRelayPortArgs();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~CreateRelayPortArgs();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
