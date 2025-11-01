#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Util {

class XXHash {
public:
    // XXHash inner types declare
    // clang-format off
    struct State;
    // clang-format on
    
    // XXHash inner types define
    struct State {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 88> mUnk1110b4;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        State& operator=(State const&);
        State(State const&);
        State();
    
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkd34856;
    // NOLINTEND

public:
    // prevent constructor by default
    XXHash& operator=(XXHash const&);
    XXHash(XXHash const&);
    XXHash();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~XXHash();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
