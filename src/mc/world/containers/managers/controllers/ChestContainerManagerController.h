#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/managers/controllers/ContainerManagerController.h"

// auto generated forward declare list
// clang-format off
class ChestContainerManagerModel;
class ItemInstance;
struct SlotData;
// clang-format on

class ChestContainerManagerController : public ::ContainerManagerController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::ChestContainerManagerModel>> mChestContainerManagerModel;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    ChestContainerManagerController();

#endif
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ChestContainerManagerController() /*override*/ = default;

    virtual void _onItemAcquired(::ItemInstance const& itemInstance, ::SlotData const& srcSlot) /*override*/;

    virtual void _onItemPlaced(::ItemInstance const& itemInstance, ::SlotData const& dstSlot) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI explicit ChestContainerManagerController(
        ::std::weak_ptr<::ChestContainerManagerModel> containerManagerModel
    );

    MCNAPI void _calculateFullCobblestoneAchievement();

    MCNAPI void _setupCallbacks();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::std::weak_ptr<::ChestContainerManagerModel> containerManagerModel);
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $_onItemAcquired(::ItemInstance const& itemInstance, ::SlotData const& srcSlot);

    MCNAPI void $_onItemPlaced(::ItemInstance const& itemInstance, ::SlotData const& dstSlot);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
