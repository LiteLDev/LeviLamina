#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct DependencyWrapper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 80> mUnkc05c1d;
    ::ll::UntypedStorage<1, 1> mUnk8a6a49;
    // NOLINTEND

public:
    // prevent constructor by default
    DependencyWrapper& operator=(DependencyWrapper const&);
    DependencyWrapper(DependencyWrapper const&);
    DependencyWrapper();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~DependencyWrapper();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
