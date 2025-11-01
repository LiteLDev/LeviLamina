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
        IdInvalid = -1,
        IdConfirm = 0,
        IdCancel = 1,
        IdSpeed = 2,
        IdHaste = 3,
        IdResist = 4,
        IdJump = 5,
        IdStrength = 6,
        IdRegen = 7,
        IdExtra = 8,
        NumButtonId = 9,
    };
    
    enum class ButtonStatus : int {
        Active = 0,
        Inactive = 1,
        Hidden = 2,
        Selected = 3,
    };
    
    enum class ClickStatus : int {
        Ok = 0,
        Exit = 1,
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::BeaconContainerManagerModel>> mBeaconContainerManagerModel;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BeaconContainerManagerController() /*override*/ = default;

    // vIndex: 11
    virtual void handlePlaceAll(::SelectedSlotInfo const&, ::SlotData const&) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};
