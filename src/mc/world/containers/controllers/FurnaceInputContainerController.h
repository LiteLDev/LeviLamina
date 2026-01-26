#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/containers/controllers/ContainerController.h"

// auto generated forward declare list
// clang-format off
class ContainerModel;
class ItemStackBase;
class Recipes;
// clang-format on

class FurnaceInputContainerController : public ::ContainerController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::HashedString> mRecipeTag;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FurnaceInputContainerController() /*override*/ = default;

    virtual bool isItemFiltered(::Recipes const& recipes, ::ItemStackBase const& item) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN

    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::std::shared_ptr<::ContainerModel> containerModel, ::HashedString const& recipeTag);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI bool $isItemFiltered(::Recipes const& recipes, ::ItemStackBase const& item) const;
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
