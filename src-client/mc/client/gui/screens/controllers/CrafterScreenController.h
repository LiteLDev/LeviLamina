#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/controllers/BlockContainerScreenController.h"
#include "mc/world/item/ItemInstance.h"

// auto generated forward declare list
// clang-format off
class BlockActor;
class BlockPos;
class BlockSource;
class ClientInstanceScreenModel;
class Player;
struct ActorUniqueID;
struct ScreenEvent;
// clang-format on

class CrafterScreenController : public ::BlockContainerScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BlockSource*>   mRegion;
    ::ll::TypedStorage<8, 8, ::BlockActor*>    mBlockActor;
    ::ll::TypedStorage<4, 4, ::std::bitset<9>> mDisabledSlotsPrediction;
    ::ll::TypedStorage<8, 8, int64>            mLastDisabledSlotsInteractedTime;
    ::ll::TypedStorage<8, 128, ::ItemInstance> mCrafterOutputItem;
    // NOLINTEND

public:
    // prevent constructor by default
    CrafterScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CrafterScreenController() /*override*/ = default;

    virtual ::ui::ViewRequest handleEvent(::ScreenEvent& screenEvent) /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CrafterScreenController(
        ::std::shared_ptr<::ClientInstanceScreenModel> model,
        ::Player&                                      player,
        ::BlockPos const&                              pos,
        ::ActorUniqueID                                uniqueId
    );

    MCAPI void _registerBindings();

    MCAPI void _registerEventHandlers();

    MCAPI void _setToggledStateForSlot(int slot, bool shouldEnable);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::ClientInstanceScreenModel> model,
        ::Player&                                      player,
        ::BlockPos const&                              pos,
        ::ActorUniqueID                                uniqueId
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ui::ViewRequest $handleEvent(::ScreenEvent& screenEvent);

    MCAPI ::ui::DirtyFlag $tick();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForScreenController();
    // NOLINTEND
};
