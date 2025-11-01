#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct ArgumentBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk85c51a;
    ::ll::UntypedStorage<8, 160> mUnk3a8eaa;
    ::ll::UntypedStorage<8, 840> mUnkb650d4;
    // NOLINTEND

public:
    // prevent constructor by default
    ArgumentBinding& operator=(ArgumentBinding const&);
    ArgumentBinding(ArgumentBinding const&);
    ArgumentBinding();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ArgumentBinding(::Scripting::ArgumentBinding&&);

    MCNAPI ~ArgumentBinding();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Scripting::ArgumentBinding&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
