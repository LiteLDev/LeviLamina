#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/controllers/ContainerController.h"

// auto generated forward declare list
// clang-format off
class ItemStackBase;
class Recipes;
// clang-format on

class BeaconPaymentContainerController : public ::ContainerController {
public:
    // prevent constructor by default
    BeaconPaymentContainerController& operator=(BeaconPaymentContainerController const&);
    BeaconPaymentContainerController(BeaconPaymentContainerController const&);
    BeaconPaymentContainerController();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BeaconPaymentContainerController() /*override*/;

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
