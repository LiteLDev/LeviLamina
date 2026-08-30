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
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~BeaconPaymentContainerController() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~BeaconPaymentContainerController() /*override*/;
#endif

    virtual bool isItemFiltered(::Recipes const&, ::ItemStackBase const& item) const /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI bool $isItemFiltered(::Recipes const&, ::ItemStackBase const& item) const;
#endif


    // NOLINTEND
};
