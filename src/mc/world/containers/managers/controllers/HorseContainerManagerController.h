#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/managers/controllers/ContainerManagerController.h"

// auto generated forward declare list
// clang-format off
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

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~HorseContainerManagerController() /*override*/ = default;

    // vIndex: 11
    virtual void handlePlaceAll(::SelectedSlotInfo const&, ::SlotData const&) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
