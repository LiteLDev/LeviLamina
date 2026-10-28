#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/containers/controllers/FurnaceContainerController.h"

// auto generated forward declare list
// clang-format off
class ItemStackBase;
class Recipes;
// clang-format on

class FurnaceInputContainerController : public ::FurnaceContainerController {
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
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI bool $isItemFiltered(::Recipes const& recipes, ::ItemStackBase const& item) const;
#endif


    // NOLINTEND
};
