#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/managers/controllers/FurnaceContainerManagerController.h"

// auto generated forward declare list
// clang-format off
class BlastFurnaceContainerManagerModel;
// clang-format on

class BlastFurnaceContainerManagerController : public ::FurnaceContainerManagerController {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlastFurnaceContainerManagerController() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN

    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::std::weak_ptr<::BlastFurnaceContainerManagerModel> containerManagerModel);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
