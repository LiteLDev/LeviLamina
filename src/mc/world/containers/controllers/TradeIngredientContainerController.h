#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/controllers/ContainerController.h"
#include "mc/world/item/ItemStack.h"

// auto generated forward declare list
// clang-format off
class ItemStackBase;
// clang-format on

class TradeIngredientContainerController : public ::ContainerController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 152, ::ItemStack> mItem;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool isItemAllowed(::ItemStackBase const& item) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI bool $isItemAllowed(::ItemStackBase const& item) const;
#endif


    // NOLINTEND
};
