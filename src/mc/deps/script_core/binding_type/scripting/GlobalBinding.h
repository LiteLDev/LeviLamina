#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct GlobalBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk6790fa;
    ::ll::UntypedStorage<8, 24> mUnkc171fb;
    ::ll::UntypedStorage<8, 24> mUnk6497e0;
    ::ll::UntypedStorage<8, 24> mUnkf3c3d0;
    ::ll::UntypedStorage<8, 24> mUnk3bb4a0;
    ::ll::UntypedStorage<8, 24> mUnkf8d465;
    // NOLINTEND

public:
    // prevent constructor by default
    GlobalBinding& operator=(GlobalBinding const&);
    GlobalBinding(GlobalBinding const&);
    GlobalBinding();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~GlobalBinding();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
