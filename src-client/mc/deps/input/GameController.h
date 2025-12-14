#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/input/interface/IGameController.h"

// auto generated forward declare list
// clang-format off
struct GameControllerEvent;
// clang-format on

class GameController : public ::IGameController {
public:
    // GameController inner types declare
    // clang-format off
    struct EventQueue;
    // clang-format on

    // GameController inner types define
    struct EventQueue {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::GameController::EventQueue>> mEventQueues;
    ::ll::TypedStorage<1, 1, bool>                                         mIsConnected;
    ::ll::TypedStorage<4, 4, int>                                          mControllerId;
    ::ll::TypedStorage<1, 1, bool>                                         mIsAdequateController;
    ::ll::TypedStorage<1, 2, ::std::optional<::SubClientId>>               mPairedClientId;
    ::ll::TypedStorage<1, 1, bool>                                         mFoundXboxController;
    ::ll::TypedStorage<1, 1, bool>                                         mFoundPlaystationController;
    ::ll::TypedStorage<1, 1, bool>                                         mFoundDualsenseController;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool hasEvents(void const* token) const /*override*/;

    virtual ::GameControllerEvent getNextEvent(void const* token) /*override*/;

    virtual int getId() const /*override*/;

    virtual bool isConnected() const /*override*/;

    virtual bool isAdequateController() const /*override*/;

    virtual void pairControllerToClient(::SubClientId clientId) /*override*/;

    virtual void unpairControllerFromClient() /*override*/;

    virtual bool isControllerPairedToClient() const /*override*/;

    virtual ::std::optional<::SubClientId> getPairedClientId() const /*override*/;

    virtual ~GameController() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _feedConnectionStateChange(bool newConnectionState);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $hasEvents(void const* token) const;

    MCAPI ::GameControllerEvent $getNextEvent(void const* token);

    MCFOLD int $getId() const;

    MCFOLD bool $isConnected() const;

    MCFOLD bool $isAdequateController() const;

    MCAPI void $pairControllerToClient(::SubClientId clientId);

    MCFOLD void $unpairControllerFromClient();

    MCAPI bool $isControllerPairedToClient() const;

    MCAPI ::std::optional<::SubClientId> $getPairedClientId() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
