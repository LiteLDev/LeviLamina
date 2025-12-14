#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/input/interface/ControllerRefreshState.h"
#include "mc/deps/input/interface/GameControllerButtonState.h"
#include "mc/deps/input/interface/GameControllerErrorType.h"
#include "mc/deps/input/interface/GameControllerStickState.h"
#include "mc/deps/input/interface/IGameControllerManager.h"

// auto generated forward declare list
// clang-format off
class GameController;
class IGameController;
// clang-format on

class GameControllerManager : public ::IGameControllerManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::GameController>>> mGameControllers;
    ::ll::TypedStorage<8, 8, uint64>                                              mMaxGameControllerButtons;
    ::ll::TypedStorage<1, 1, bool>                                                mIsActive;
    ::ll::TypedStorage<8, 24, ::std::vector<void const*>>                         mConsumerRegistry;
    ::ll::TypedStorage<4, 4, ::ControllerRefreshState>                            mControllerRefreshState;
    ::ll::TypedStorage<1, 1, uchar>                                               mClientControllerCount;
    ::ll::TypedStorage<8, 64, ::std::function<::GameControllerErrorType()>>
        mPlatformSpecificControllerErrorRetrievalFunc;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GameControllerManager() /*override*/ = default;

    virtual ::std::weak_ptr<::IGameController> getGameController(int id) /*override*/;

    virtual ::std::vector<::std::weak_ptr<::IGameController>> getConnectedGameControllers() /*override*/;

    virtual ::std::vector<::std::weak_ptr<::IGameController>> getGameControllersInUse() /*override*/;

    virtual bool hasAdequateConnectedGameController() const /*override*/;

    virtual bool hasAdequateConnectedGameControllers(uint64 const playerCount) const /*override*/;

    virtual uint64 getMaxGameControllerButtons() const /*override*/;

    virtual void registerConsumer(void const* token) /*override*/;

    virtual void unregisterConsumer(void const* token) /*override*/;

    virtual void setControllerRefreshState(::ControllerRefreshState state) /*override*/;

    virtual ::ControllerRefreshState getControllerRefreshState() const /*override*/;

    virtual ::GameControllerErrorType getPlatformSpecificControllerError() const /*override*/;

    virtual void
    setPlatformSpecificControllerErrorRetrievalFunc(::std::function<::GameControllerErrorType()>&& lambda) /*override*/;

    virtual void resetClientControllerCount() /*override*/;

    virtual void addClientHasAdequateConnectedController(int, bool const, ::SubClientId) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI GameControllerManager();

    MCAPI void
    feedButton(int gameControllerId, int buttonId, ::GameControllerButtonState buttonState, bool allowRemapping);

    MCAPI void feedChangeUser(int gameControllerId, bool restrictToControllerIdChange);

    MCAPI void feedJoinGame(int gameControllerId, bool isConfirmation);

    MCAPI void feedStick(int gameControllerId, int stickId, ::GameControllerStickState state, float x, float y);

    MCAPI void feedTrigger(int gameControllerId, int triggerId, float magnitude);

    MCAPI void setGameControllerConnected(int gameControllerId, bool isConnected);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::GameControllerManager& sGamePadManager();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::weak_ptr<::IGameController> $getGameController(int id);

    MCAPI ::std::vector<::std::weak_ptr<::IGameController>> $getConnectedGameControllers();

    MCAPI ::std::vector<::std::weak_ptr<::IGameController>> $getGameControllersInUse();

    MCAPI bool $hasAdequateConnectedGameController() const;

    MCAPI bool $hasAdequateConnectedGameControllers(uint64 const playerCount) const;

    MCFOLD uint64 $getMaxGameControllerButtons() const;

    MCAPI void $registerConsumer(void const* token);

    MCAPI void $unregisterConsumer(void const* token);

    MCFOLD void $setControllerRefreshState(::ControllerRefreshState state);

    MCFOLD ::ControllerRefreshState $getControllerRefreshState() const;

    MCAPI ::GameControllerErrorType $getPlatformSpecificControllerError() const;

    MCAPI void $setPlatformSpecificControllerErrorRetrievalFunc(::std::function<::GameControllerErrorType()>&& lambda);

    MCAPI void $resetClientControllerCount();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
