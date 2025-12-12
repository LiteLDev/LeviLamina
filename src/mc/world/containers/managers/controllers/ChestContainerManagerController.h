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

public:
    // prevent constructor by default
    ChestContainerManagerController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ChestContainerManagerController() /*override*/ = default;

    virtual void _onItemAcquired(::ItemInstance const& stack, ::SlotData const& srcSlot) /*override*/;

    virtual void _onItemPlaced(::ItemInstance const& stack, ::SlotData const& dstSlot) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C explicit ChestContainerManagerController(
        ::std::weak_ptr<::ChestContainerManagerModel> containerManagerModel
    );

    MCNAPI_C void _calculateFullCobblestoneAchievement();

    MCNAPI_C void _setupCallbacks();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::std::weak_ptr<::ChestContainerManagerModel> containerManagerModel);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $_onItemAcquired(::ItemInstance const& stack, ::SlotData const& srcSlot);

    MCNAPI void $_onItemPlaced(::ItemInstance const& stack, ::SlotData const& dstSlot);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
