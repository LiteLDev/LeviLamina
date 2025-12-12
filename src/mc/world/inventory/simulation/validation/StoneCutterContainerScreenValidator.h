#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/TypedServerNetId.h"
#include "mc/world/inventory/simulation/validation/ContainerScreenValidatorBase.h"

// auto generated forward declare list
// clang-format off
class ContainerScreenContext;
class ContainerScreenValidation;
class ItemInstance;
class ItemStack;
struct ContainerValidationCraftInputs;
struct ContainerValidationCraftResult;
struct RecipeNetIdTag;
// clang-format on

class StoneCutterContainerScreenValidator : public ::ContainerScreenValidatorBase {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool isCraftingImplemented() /*override*/;

    virtual ::ContainerValidationCraftResult getCraftResult(
        ::ContainerScreenContext const&                     screenContext,
        ::ContainerScreenValidation&                        screenValidation,
        ::std::unique_ptr<::ContainerValidationCraftInputs> craftInputs,
        uchar const                                         numCrafts
    ) /*override*/;

    virtual ~StoneCutterContainerScreenValidator() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ItemInstance
    _getResultFromId(::ContainerScreenContext const& screenContext, ::RecipeNetId const& recipeNetId);

    MCNAPI bool _recipeMatches(
        ::ContainerScreenContext const& screenContext,
        ::RecipeNetId const&            recipeNetId,
        ::ItemStack const&              inputStack
    ) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isCraftingImplemented();

    MCNAPI ::ContainerValidationCraftResult $getCraftResult(
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
