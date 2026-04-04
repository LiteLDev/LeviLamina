#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerEnumName.h"

// auto generated forward declare list
// clang-format off
class ContainerScreenContext;
class ContainerScreenValidation;
class ContainerValidationCommitObject;
class ItemStack;
struct ContainerValidationCraftInputs;
struct ContainerValidationCraftResult;
// clang-format on

class ContainerScreenValidatorBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::ContainerEnumName>> mValidContainerEnumNames;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ContainerScreenValidatorBase();

    virtual ::std::shared_ptr<::ContainerValidationCommitObject>
    postCommitItemRemoved(::ContainerEnumName const containerEnumName, int const slot, ::ItemStack const& item);

    virtual bool isCraftingImplemented();

    virtual ::ContainerValidationCraftResult getCraftResult(
        ::ContainerScreenContext const&                     screenContext,
        ::ContainerScreenValidation&                        screenValidation,
        ::std::unique_ptr<::ContainerValidationCraftInputs> craftInputs,
        uchar const                                         numCrafts
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::std::shared_ptr<::ContainerValidationCommitObject>
    $postCommitItemRemoved(::ContainerEnumName const containerEnumName, int const slot, ::ItemStack const& item);

    MCFOLD bool $isCraftingImplemented();

    MCAPI ::ContainerValidationCraftResult $getCraftResult(
        ::ContainerScreenContext const&                     screenContext,
        ::ContainerScreenValidation&                        screenValidation,
        ::std::unique_ptr<::ContainerValidationCraftInputs> craftInputs,
        uchar const                                         numCrafts
    );


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
