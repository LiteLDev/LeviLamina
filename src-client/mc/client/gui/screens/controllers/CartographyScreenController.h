#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/ContainerScreenController.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class CartographyContainerManagerController;
class ClientInstanceScreenModel;
class Player;
struct ActorUniqueID;
// clang-format on

class CartographyScreenController : public ::ContainerScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::CartographyContainerManagerController>>
                                                               mCartographyContainerManagerController;
    ::ll::TypedStorage<1, 1, bool>                             mTextBoxEditing;
    ::ll::TypedStorage<1, 1, bool>                             mShouldUseFilteredMessage;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mProfanityToggleSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    CartographyScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CartographyScreenController() /*override*/ = default;

    virtual bool _isStillValid() const /*override*/;

    virtual void _handleTakeHalf(::std::string const& collectionName, int index) /*override*/;

    virtual void _registerCoalesceOrder() /*override*/;

    virtual void _registerAutoPlaceOrder() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CartographyScreenController(
        ::std::shared_ptr<::ClientInstanceScreenModel> model,
        ::Player&                                      player,
        ::BlockPos const&                              pos,
        ::ActorUniqueID                                uniqueId
    );

    MCAPI void _registerBindings();

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
    MCFOLD bool $_isStillValid() const;

    MCAPI void $_handleTakeHalf(::std::string const& collectionName, int index);

    MCAPI void $_registerCoalesceOrder();

    MCAPI void $_registerAutoPlaceOrder();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForScreenController();
    // NOLINTEND
};
