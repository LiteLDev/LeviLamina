#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct GlobalBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk81398f;
    ::ll::UntypedStorage<8, 24> mUnk29370d;
    ::ll::UntypedStorage<8, 24> mUnk1ca62b;
    ::ll::UntypedStorage<8, 24> mUnkf26a6b;
    ::ll::UntypedStorage<8, 24> mUnk910e68;
    ::ll::UntypedStorage<8, 24> mUnkcf818f;
    // NOLINTEND

public:
    // prevent constructor by default
    GlobalBinding& operator=(GlobalBinding const&);
    GlobalBinding(GlobalBinding const&);
    GlobalBinding();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~GlobalBinding();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
