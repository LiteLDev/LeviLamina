#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/managers/controllers/ContainerManagerController.h"
#include "mc/world/item/CompoundContainerType.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class CraftableCompounds;
class LabTableContainerManagerModel;
// clang-format on

class LabTableContainerManagerController : public ::ContainerManagerController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::LabTableContainerManagerModel>> mModel;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CraftableCompounds>>           mCraftableCompounds;
    ::ll::TypedStorage<1, 1, ::CompoundContainerType>                           mResultContainer;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    LabTableContainerManagerController();

#endif
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LabTableContainerManagerController() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI explicit LabTableContainerManagerController(
        ::std::weak_ptr<::LabTableContainerManagerModel> containerManagerModel
    );

    MCNAPI void _setupCallbacks();

    MCNAPI void _updateResult();

    MCNAPI void combineInputs(::BlockPos const& blockPos);

    MCNAPI bool hasInput();

    MCNAPI bool isStillValid(float pickRange);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::std::weak_ptr<::LabTableContainerManagerModel> containerManagerModel);
#endif
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
