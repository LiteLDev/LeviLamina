#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/managers/controllers/FurnaceContainerManagerController.h"

// auto generated forward declare list
// clang-format off
class BlastFurnaceContainerManagerModel;
// clang-format on

class BlastFurnaceContainerManagerController : public ::FurnaceContainerManagerController {
#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    BlastFurnaceContainerManagerController();

#endif
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlastFurnaceContainerManagerController() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI explicit BlastFurnaceContainerManagerController(
        ::std::weak_ptr<::BlastFurnaceContainerManagerModel> containerManagerModel
    );
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::std::weak_ptr<::BlastFurnaceContainerManagerModel> containerManagerModel);
#endif
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
