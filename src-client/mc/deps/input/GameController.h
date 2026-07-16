#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/input/interface/IGameController.h"
#include "mc/platform/brstd/simple_circular_queue.h"

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
    struct EventQueue {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, void const*>                                                    mToken;
        ::ll::TypedStorage<8, 31216, ::brstd::simple_circular_queue<::GameControllerEvent, 600>> mEvents;
        // NOLINTEND
    };

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
    virtual bool hasEvents(void const*) const /*override*/;

    virtual ::GameControllerEvent getNextEvent(void const*) /*override*/;

    virtual int getId() const /*override*/;

    virtual bool isConnected() const /*override*/;

    virtual bool isAdequateController() const /*override*/;

    virtual void pairControllerToClient(::SubClientId) /*override*/;

    virtual void unpairControllerFromClient() /*override*/;

    virtual bool isControllerPairedToClient() const /*override*/;

    virtual ::std::optional<::SubClientId> getPairedClientId() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
