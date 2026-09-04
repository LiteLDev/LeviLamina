#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct ArgumentBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnk9a9c1d;
    ::ll::UntypedStorage<8, 16>  mUnk3a8eaa;
    ::ll::UntypedStorage<8, 280> mUnkb650d4;
    // NOLINTEND

public:
    // prevent constructor by default
    ArgumentBinding& operator=(ArgumentBinding const&);
    ArgumentBinding(ArgumentBinding const&);
    ArgumentBinding();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ArgumentBinding();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
