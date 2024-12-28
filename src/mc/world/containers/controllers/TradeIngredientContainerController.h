#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/controllers/ContainerController.h"

// auto generated forward declare list
// clang-format off
class ItemStackBase;
// clang-format on

class TradeIngredientContainerController : public ::ContainerController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 152> mUnkc9e68c;
    // NOLINTEND

public:
    // prevent constructor by default
    TradeIngredientContainerController& operator=(TradeIngredientContainerController const&);
    TradeIngredientContainerController(TradeIngredientContainerController const&);
    TradeIngredientContainerController();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 3
    virtual bool isItemAllowed(::ItemStackBase const&) const /*override*/;

    // vIndex: 0
    virtual ~TradeIngredientContainerController() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $isItemAllowed(::ItemStackBase const&) const;
    // NOLINTEND
};
