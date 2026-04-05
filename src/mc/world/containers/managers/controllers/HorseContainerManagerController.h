#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/managers/controllers/ContainerManagerController.h"

// auto generated forward declare list
// clang-format off
class Actor;
class HorseContainerManagerModel;
struct SelectedSlotInfo;
struct SlotData;
// clang-format on

class HorseContainerManagerController : public ::ContainerManagerController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::HorseContainerManagerModel>> mHorseContainerManagerModel;
    ::ll::TypedStorage<1, 1, bool>                                           mIsEquipTabOpen;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    HorseContainerManagerController();

#endif
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HorseContainerManagerController() /*override*/ = default;

    virtual void handlePlaceAll(::SelectedSlotInfo const& selected, ::SlotData const& dstSlot) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI explicit HorseContainerManagerController(::std::weak_ptr<::HorseContainerManagerModel> ptrModel);

    MCNAPI bool canWearCarpet() const;

    MCNAPI bool canWearSaddle() const;

    MCNAPI ::Actor* getEntity() const;

    MCNAPI void getInventoryGridSize(int& outDimX, int& outDimY) const;
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::std::weak_ptr<::HorseContainerManagerModel> ptrModel);
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $handlePlaceAll(::SelectedSlotInfo const& selected, ::SlotData const& dstSlot);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
