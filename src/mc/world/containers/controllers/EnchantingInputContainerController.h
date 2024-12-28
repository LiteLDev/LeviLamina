#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/controllers/ContainerController.h"

// auto generated forward declare list
// clang-format off
class ItemStackBase;
class Recipes;
// clang-format on

class EnchantingInputContainerController : public ::ContainerController {
public:
    // prevent constructor by default
    EnchantingInputContainerController& operator=(EnchantingInputContainerController const&);
    EnchantingInputContainerController(EnchantingInputContainerController const&);
    EnchantingInputContainerController();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EnchantingInputContainerController() /*override*/;

    // vIndex: 4
    virtual bool isItemFiltered(::Recipes const&, ::ItemStackBase const&) const /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $isItemFiltered(::Recipes const&, ::ItemStackBase const&) const;
    // NOLINTEND
};
