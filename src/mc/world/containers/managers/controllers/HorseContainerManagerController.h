#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/managers/controllers/ContainerManagerController.h"

// auto generated forward declare list
// clang-format off
struct SelectedSlotInfo;
struct SlotData;
// clang-format on

class HorseContainerManagerController : public ::ContainerManagerController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkbc77f0;
    ::ll::UntypedStorage<1, 1>  mUnk6aee66;
    // NOLINTEND

public:
    // prevent constructor by default
    HorseContainerManagerController& operator=(HorseContainerManagerController const&);
    HorseContainerManagerController(HorseContainerManagerController const&);
    HorseContainerManagerController();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~HorseContainerManagerController() /*override*/;

    // vIndex: 11
    virtual void handlePlaceAll(::SelectedSlotInfo const&, ::SlotData const&) /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $handlePlaceAll(::SelectedSlotInfo const&, ::SlotData const&);
    // NOLINTEND
};
