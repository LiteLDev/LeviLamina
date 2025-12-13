#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/controllers/ContainerController.h"
#include "mc/world/item/ItemStack.h"

// auto generated forward declare list
// clang-format off
class ContainerModel;
class ItemStackBase;
// clang-format on

class TradeIngredientContainerController : public ::ContainerController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 152, ::ItemStack> mItem;
    // NOLINTEND

public:
    // prevent constructor by default
    TradeIngredientContainerController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool isItemAllowed(::ItemStackBase const& item) const /*override*/;

    virtual ~TradeIngredientContainerController() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C explicit TradeIngredientContainerController(::std::shared_ptr<::ContainerModel> containerModel);

    MCNAPI_C void setTradeItem(::ItemStack const& item);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::std::shared_ptr<::ContainerModel> containerModel);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI bool $isItemAllowed(::ItemStackBase const& item) const;
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
