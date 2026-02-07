#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/ContainerScreenController.h"
#include "mc/client/gui/screens/controllers/InteractionModel.h"

// auto generated forward declare list
// clang-format off
class ClientInstanceScreenModel;
class TradeContainerManagerController;
struct ActorUniqueID;
namespace Json { class Value; }
// clang-format on

class TradeScreenController : public ::ContainerScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                                   mCurrentIndex;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::TradeContainerManagerController>> mTradeContainerManagerController;
    // NOLINTEND

public:
    // prevent constructor by default
    TradeScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TradeScreenController() /*override*/ = default;

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;

    virtual void onLeave() /*override*/;

    virtual bool _isStillValid() const /*override*/;

    virtual void _registerCoalesceOrder() /*override*/;

    virtual void _registerAutoPlaceOrder() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TradeScreenController(
        ::std::shared_ptr<::ClientInstanceScreenModel> pModel,
        ::ActorUniqueID                                uniqueID,
        ::InteractionModel                             interactionModel
    );

    MCAPI void _registerBindings();

    MCAPI void _registerStateMachine();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::ClientInstanceScreenModel> pModel,
        ::ActorUniqueID                                uniqueID,
        ::InteractionModel                             interactionModel
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $addStaticScreenVars(::Json::Value& globalVars);

    MCAPI void $onLeave();

    MCFOLD bool $_isStillValid() const;

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
