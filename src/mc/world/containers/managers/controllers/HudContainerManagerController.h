#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/managers/controllers/ContainerManagerController.h"

class HudContainerManagerController : public ::ContainerManagerController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk482ac7;
    ::ll::UntypedStorage<8, 16> mUnk2f0be3;
    // NOLINTEND

public:
    // prevent constructor by default
    HudContainerManagerController& operator=(HudContainerManagerController const&);
    HudContainerManagerController(HudContainerManagerController const&);
    HudContainerManagerController();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~HudContainerManagerController() /*override*/ = default;

    // vIndex: 2
    virtual void registerContainerCallbacks() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
