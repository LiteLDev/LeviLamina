#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/managers/controllers/ContainerManagerController.h"

// auto generated forward declare list
// clang-format off
class BeaconContainerManagerModel;
struct SelectedSlotInfo;
struct SlotData;
// clang-format on

class BeaconContainerManagerController : public ::ContainerManagerController {
public:
    // BeaconContainerManagerController inner types define
    enum class ButtonId : int {
        IdInvalid   = -1,
        IdConfirm   = 0,
        IdCancel    = 1,
        IdSpeed     = 2,
        IdHaste     = 3,
        IdResist    = 4,
        IdJump      = 5,
        IdStrength  = 6,
        IdRegen     = 7,
        IdExtra     = 8,
        NumButtonId = 9,
    };

    enum class ButtonStatus : int {
        Active   = 0,
        Inactive = 1,
        Hidden   = 2,
        Selected = 3,
    };

    enum class ClickStatus : int {
        Ok   = 0,
        Exit = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::BeaconContainerManagerModel>> mBeaconContainerManagerModel;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    BeaconContainerManagerController();

#endif
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BeaconContainerManagerController() /*override*/ = default;

    virtual bool handlePlaceAll(::SelectedSlotInfo const& selected, ::SlotData const& dstSlot) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI explicit BeaconContainerManagerController(::std::weak_ptr<::BeaconContainerManagerModel> ptrModel);

    MCAPI void _confirmTransaction();

    MCAPI void _setupCallbacks();

    MCAPI ::BeaconContainerManagerController::ClickStatus
    buttonClicked(::BeaconContainerManagerController::ButtonId id);

    MCAPI ::std::string getButtonHoverText(::std::string const& buttonName) const;

    MCAPI ::BeaconContainerManagerController::ButtonStatus getButtonStatus(::std::string const& buttonName) const;

    MCAPI bool isSecondaryEffect(::std::string const& buttonName) const;
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI static ::BeaconContainerManagerController::ButtonId buttonNameToButtonId(::std::string const& buttonName);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::std::weak_ptr<::BeaconContainerManagerModel> ptrModel);
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI bool $handlePlaceAll(::SelectedSlotInfo const& selected, ::SlotData const& dstSlot);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
