#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct ArgumentBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnk85c51a;
    ::ll::UntypedStorage<8, 16>  mUnk3a8eaa;
    ::ll::UntypedStorage<8, 264> mUnkb650d4;
    // NOLINTEND

public:
    // prevent constructor by default
    ArgumentBinding& operator=(ArgumentBinding const&);
    ArgumentBinding(ArgumentBinding const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ArgumentBinding();

    MCNAPI ~ArgumentBinding();
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

} // namespace Scripting
