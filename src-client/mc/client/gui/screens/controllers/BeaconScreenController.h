#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/ContainerScreenController.h"

// auto generated forward declare list
// clang-format off
class BeaconContainerManagerController;
class BlockPos;
class ClientInstanceScreenModel;
class Player;
struct ActorUniqueID;
// clang-format on

class BeaconScreenController : public ::ContainerScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::BeaconContainerManagerController>> mBeaconContainerManagerController;
    // NOLINTEND

public:
    // prevent constructor by default
    BeaconScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BeaconScreenController() /*override*/ = default;

    virtual bool _isStillValid() const /*override*/;

    virtual void _registerCoalesceOrder() /*override*/;

    virtual void _registerAutoPlaceOrder() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BeaconScreenController(
        ::std::shared_ptr<::ClientInstanceScreenModel> ptrModel,
        ::Player&                                      player,
        ::BlockPos const&                              pos,
        ::ActorUniqueID                                uniqueId
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::ClientInstanceScreenModel> ptrModel,
        ::Player&                                      player,
        ::BlockPos const&                              pos,
        ::ActorUniqueID                                uniqueId
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
