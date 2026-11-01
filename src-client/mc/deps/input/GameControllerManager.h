#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/input/interface/ControllerRefreshState.h"
#include "mc/deps/input/interface/GameControllerErrorType.h"
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

    virtual void
    addClientHasAdequateConnectedController(int id, bool const isAdequate, ::SubClientId clientId) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void setGameControllerConnected(int gameControllerId, bool isConnected);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::GameControllerManager& sGamePadManager();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::weak_ptr<::IGameController> $getGameController(int id);

    MCNAPI ::std::vector<::std::weak_ptr<::IGameController>> $getConnectedGameControllers();

    MCNAPI ::std::vector<::std::weak_ptr<::IGameController>> $getGameControllersInUse();

    MCNAPI bool $hasAdequateConnectedGameController() const;

    MCNAPI bool $hasAdequateConnectedGameControllers(uint64 const playerCount) const;

    MCNAPI uint64 $getMaxGameControllerButtons() const;

    MCNAPI void $registerConsumer(void const* token);

    MCNAPI void $unregisterConsumer(void const* token);

    MCNAPI void $setControllerRefreshState(::ControllerRefreshState state);

    MCNAPI ::ControllerRefreshState $getControllerRefreshState() const;

    MCNAPI ::GameControllerErrorType $getPlatformSpecificControllerError() const;

    MCNAPI void $setPlatformSpecificControllerErrorRetrievalFunc(::std::function<::GameControllerErrorType()>&& lambda);

    MCNAPI void $resetClientControllerCount();

    MCNAPI void $addClientHasAdequateConnectedController(int id, bool const isAdequate, ::SubClientId clientId);
    // NOLINTEND
};
