#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/TypedServerNetId.h"
#include "mc/world/inventory/simulation/validation/ContainerScreenValidatorBase.h"

// auto generated forward declare list
// clang-format off
class ContainerScreenContext;
class ContainerScreenValidation;
class ItemStack;
struct ContainerValidationCraftInputs;
struct ContainerValidationCraftResult;
struct RecipeNetIdTag;
// clang-format on

class StoneCutterContainerScreenValidator : public ::ContainerScreenValidatorBase {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual bool isCraftingImplemented() /*override*/;

    // vIndex: 3
    virtual ::ContainerValidationCraftResult getCraftResult(
        ::ContainerScreenContext const&                     screenContext,
        ::ContainerScreenValidation&                        screenValidation,
        ::std::unique_ptr<::ContainerValidationCraftInputs> craftInputs,
        uchar const                                         numCrafts
    ) /*override*/;

    // vIndex: 0
    virtual ~StoneCutterContainerScreenValidator() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool _recipeMatches(
        ::ContainerScreenContext const& screenContext,
        ::RecipeNetId const&            recipeNetId,
        ::ItemStack const&              inputStack
    ) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
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
    MCAPI static void** $vftable();
    // NOLINTEND
};
