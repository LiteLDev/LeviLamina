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
    // prevent constructor by default
    BlastFurnaceContainerManagerController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlastFurnaceContainerManagerController() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C explicit BlastFurnaceContainerManagerController(
        ::std::weak_ptr<::BlastFurnaceContainerManagerModel> containerManagerModel
    );
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
