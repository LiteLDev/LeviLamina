#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/managers/controllers/ContainerManagerController.h"

// auto generated forward declare list
// clang-format off
class ItemInstance;
struct SlotData;
// clang-format on

class BrewingStandContainerManagerController : public ::ContainerManagerController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkda4365;
    // NOLINTEND

public:
    // prevent constructor by default
    BrewingStandContainerManagerController& operator=(BrewingStandContainerManagerController const&);
    BrewingStandContainerManagerController(BrewingStandContainerManagerController const&);
    BrewingStandContainerManagerController();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BrewingStandContainerManagerController() /*override*/ = default;

    // vIndex: 32
    virtual void _onItemAcquired(::ItemInstance const&, ::SlotData const&) /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
