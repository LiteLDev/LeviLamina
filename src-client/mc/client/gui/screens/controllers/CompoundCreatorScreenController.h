#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/ContainerScreenController.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class ClientInstanceScreenModel;
class CompoundCreatorContainerManagerController;
class Player;
struct ActorUniqueID;
// clang-format on

class CompoundCreatorScreenController : public ::ContainerScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::CompoundCreatorContainerManagerController>> mManagerController;
    // NOLINTEND

public:
    // prevent constructor by default
    CompoundCreatorScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CompoundCreatorScreenController() /*override*/ = default;

    virtual bool _isStillValid() const /*override*/;

    virtual ::std::string _getButtonXDescription() /*override*/;

    virtual void _registerCoalesceOrder() /*override*/;

    virtual void _registerAutoPlaceOrder() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CompoundCreatorScreenController(
        ::std::shared_ptr<::ClientInstanceScreenModel> model,
        ::Player&                                      player,
        ::BlockPos const&                              pos,
        ::ActorUniqueID                                uniqueId
    );

    MCAPI void _registerBindings();

    MCAPI void _registerInputStateMachine();

    MCAPI void _registerOutputStateMachine();
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

    MCAPI ::std::string $_getButtonXDescription();

    MCAPI void $_registerCoalesceOrder();

    MCAPI void $_registerAutoPlaceOrder();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForScreenController();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};
