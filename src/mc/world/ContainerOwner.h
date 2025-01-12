#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ContainerOwner {
public:
    // ContainerOwner inner types declare
    // clang-format off
    class OwnedContainer;
    // clang-format on

    // ContainerOwner inner types define
    class OwnedContainer {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnkff2cc5;
        // NOLINTEND

    public:
        // prevent constructor by default
        OwnedContainer& operator=(OwnedContainer const&);
        OwnedContainer(OwnedContainer const&);
        OwnedContainer();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~OwnedContainer();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkec0b1f;
    // NOLINTEND

public:
    // prevent constructor by default
    ContainerOwner& operator=(ContainerOwner const&);
    ContainerOwner(ContainerOwner const&);
    ContainerOwner();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ContainerOwner();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
