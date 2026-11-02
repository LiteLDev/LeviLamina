#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/managers/controllers/ContainerManagerController.h"

// auto generated forward declare list
// clang-format off
class BrewingStandContainerManagerModel;
class ItemInstance;
struct SlotData;
// clang-format on

class BrewingStandContainerManagerController : public ::ContainerManagerController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::BrewingStandContainerManagerModel>> mBrewingContainerManagerModel;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BrewingStandContainerManagerController() /*override*/ = default;

#ifdef LL_PLAT_S
    virtual void _onItemAcquired(::ItemInstance const&, ::SlotData const&) /*override*/;
#else // LL_PLAT_C
    virtual void _onItemAcquired(::ItemInstance const& instance, ::SlotData const& srcSlot) /*override*/;
#endif

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $_onItemAcquired(::ItemInstance const& instance, ::SlotData const& srcSlot);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
