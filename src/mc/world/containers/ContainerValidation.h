#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerEnumName.h"

// auto generated forward declare list
// clang-format off
class ContainerScreenContext;
class ItemStackBase;
class SparseContainer;
// clang-format on

struct ContainerValidation {
public:
    // ContainerValidation inner types define
    using AllowedItemInContainerDelegate = ::std::function<bool(::ItemStackBase const&)>;

    using AllowedItemInSlotDelegate = ::std::function<bool(int, ::ItemStackBase const&, int)>;

    using AllowedItemToAddDelegate = ::std::function<bool(::ItemStackBase const&)>;

    using AllowedItemToRemoveDelegate = ::std::function<bool(::ItemStackBase const&)>;

    using AvailableSetCountDelegate = ::std::function<int(int, ::ItemStackBase const&)>;

    using ValidSlotForContainerDelegate = ::std::function<bool(int)>;

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI_C static void assignValidForSlotContainerDelegate(
        ::SparseContainer&              sparseContainer,
        ::ContainerEnumName             containerEnumName,
        ::ContainerScreenContext const& screenContext
    );

    MCNAPI_C static void assignValidationDelegates(
        ::SparseContainer&              sparseContainer,
        ::ContainerEnumName             containerEnumName,
        ::ContainerScreenContext const& screenContext
    );
    // NOLINTEND
};
