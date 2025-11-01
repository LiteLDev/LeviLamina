#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

class LifetimeRegistryReference {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk413cd2;
    ::ll::UntypedStorage<4, 4> mUnkcee42d;
    // NOLINTEND

public:
    // prevent constructor by default
    LifetimeRegistryReference& operator=(LifetimeRegistryReference const&);
    LifetimeRegistryReference(LifetimeRegistryReference const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LifetimeRegistryReference();

    MCNAPI ~LifetimeRegistryReference();
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

}
