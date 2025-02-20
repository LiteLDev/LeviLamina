#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ContainerWeakRef {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkabc989;
    ::ll::UntypedStorage<4, 4>  mUnk8eeae7;
    ::ll::UntypedStorage<4, 12> mUnk89aa5f;
    ::ll::UntypedStorage<4, 4>  mUnk65441a;
    ::ll::UntypedStorage<8, 16> mUnkbf5130;
    // NOLINTEND

public:
    // prevent constructor by default
    ContainerWeakRef& operator=(ContainerWeakRef const&);
    ContainerWeakRef(ContainerWeakRef const&);
    ContainerWeakRef();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit operator bool() const;

    MCAPI ~ContainerWeakRef();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
