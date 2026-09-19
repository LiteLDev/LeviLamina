#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/containers/controllers/FurnaceContainerController.h"

// auto generated forward declare list
// clang-format off
class ContainerModel;
class ItemStackBase;
class Recipes;
// clang-format on

class FurnaceInputContainerController : public ::FurnaceContainerController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::HashedString> mRecipeTag;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    FurnaceInputContainerController();

#endif
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FurnaceInputContainerController() /*override*/ = default;

    virtual bool isItemFiltered(::Recipes const& recipes, ::ItemStackBase const& item) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI FurnaceInputContainerController(
        ::std::shared_ptr<::ContainerModel> containerModel,
        ::HashedString const&               recipeTag
    );
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::std::shared_ptr<::ContainerModel> containerModel, ::HashedString const& recipeTag);
#endif
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
