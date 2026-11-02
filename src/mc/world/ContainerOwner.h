#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ContainerModel;
// clang-format on

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
        ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ContainerModel>> mContainerModel;
        // NOLINTEND

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
