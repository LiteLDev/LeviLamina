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

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    BrewingStandContainerManagerController();

#endif
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
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI explicit BrewingStandContainerManagerController(
        ::std::weak_ptr<::BrewingStandContainerManagerModel> containerManagerModel
    );

    MCNAPI void _calculateValidPotionBrewed(::ItemInstance const& itemInstance);

    MCNAPI int getBrewProgress(int max);

    MCNAPI int getBubbleProgress(int max);

    MCNAPI int getFuelProgress(int max);

    MCNAPI bool isFinished(int& outputId, int& outputAuxValue, int outputSlot);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::std::weak_ptr<::BrewingStandContainerManagerModel> containerManagerModel);
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
