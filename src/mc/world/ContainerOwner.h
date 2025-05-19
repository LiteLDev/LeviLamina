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
        MCNAPI ~OwnedContainer();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ContainerOwner::OwnedContainer>> mOwnedContainers;
    // NOLINTEND
};
