#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/managers/controllers/FurnaceContainerManagerController.h"

class SmokerContainerManagerController : public ::FurnaceContainerManagerController {
public:
    // prevent constructor by default
    SmokerContainerManagerController& operator=(SmokerContainerManagerController const&);
    SmokerContainerManagerController(SmokerContainerManagerController const&);
    SmokerContainerManagerController();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SmokerContainerManagerController() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
