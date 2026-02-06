#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/controllers/ContainerScreenController.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class AnvilContainerManagerController;
class BlockPos;
class ClientInstanceScreenModel;
class Player;
struct ActorUniqueID;
// clang-format on

class AnvilScreenController : public ::ContainerScreenController {
public:
    // AnvilScreenController inner types define
    enum class SlotIndex : int {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                  mRenameTextSelected;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::AnvilContainerManagerController>> mAnvilContainerManagerController;
    ::ll::TypedStorage<4, 4, ::AnvilScreenController::SlotIndex>                    mHoveredSlot;
    ::ll::TypedStorage<1, 1, bool>                                                  mTextBoxEditing;
    ::ll::TypedStorage<1, 1, bool>                                                  mShouldUseFilteredMessage;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                      mProfanityToggleSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    AnvilScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AnvilScreenController() /*override*/ = default;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual void onLeave() /*override*/;

    virtual bool _isStillValid() const /*override*/;

    virtual void _registerCoalesceOrder() /*override*/;

    virtual void _registerAutoPlaceOrder() /*override*/;

    virtual ::std::string _getButtonXDescription() /*override*/;

    virtual ::ui::ViewRequest _onContainerSlotHovered(::std::string const& collectionName, int index) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AnvilScreenController(
        ::std::shared_ptr<::ClientInstanceScreenModel> model,
        ::Player&                                      player,
        ::BlockPos const&                              pos,
        ::ActorUniqueID                                uniqueId
    );

    MCAPI void _initScreenControllerProxy();

    MCAPI void _registerEventHandlers();

    MCAPI void _registerStateMachine();
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
    MCAPI ::ui::DirtyFlag $tick();

    MCFOLD void $onLeave();

    MCFOLD bool $_isStillValid() const;

    MCAPI void $_registerCoalesceOrder();

    MCAPI void $_registerAutoPlaceOrder();

    MCAPI ::std::string $_getButtonXDescription();

    MCAPI ::ui::ViewRequest $_onContainerSlotHovered(::std::string const& collectionName, int index);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForScreenController();
    // NOLINTEND
};
