#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/managers/controllers/FurnaceContainerManagerController.h"

// auto generated forward declare list
// clang-format off
class SmokerContainerManagerModel;
// clang-format on

class SmokerContainerManagerController : public ::FurnaceContainerManagerController {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SmokerContainerManagerController() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN

    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::std::weak_ptr<::SmokerContainerManagerModel> containerManagerModel);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
