#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/ContainerScreenController.h"
#include "mc/client/gui/screens/controllers/RepeatCraftButtonData.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class ClientInstanceScreenModel;
class Player;
class StonecutterContainerManagerController;
struct ActorUniqueID;
namespace Json { class Value; }
// clang-format on

class StonecutterScreenController : public ::ContainerScreenController {
public:
    // StonecutterScreenController inner types define
    enum class LeftTabIndex : int {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::StonecutterScreenController::LeftTabIndex> mSelectedTabIndex;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::StonecutterContainerManagerController>>
                                                        mStonecutterContainerManagerController;
    ::ll::TypedStorage<8, 136, ::RepeatCraftButtonData> mRepeatCraftButton;
    // NOLINTEND

public:
    // prevent constructor by default
    StonecutterScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StonecutterScreenController() /*override*/ = default;

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;

    virtual bool _isStillValid() const /*override*/;

    virtual void _registerCoalesceOrder() /*override*/;

    virtual void _registerAutoPlaceOrder() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI StonecutterScreenController(
        ::std::shared_ptr<::ClientInstanceScreenModel> model,
        ::Player&                                      player,
        ::BlockPos const&                              pos,
        ::ActorUniqueID                                uniqueId
    );

    MCAPI void _changeLeftTab(int dir);

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
    MCAPI void $addStaticScreenVars(::Json::Value& globalVars);

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
