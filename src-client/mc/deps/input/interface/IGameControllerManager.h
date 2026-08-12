#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/input/interface/ControllerRefreshState.h"
#include "mc/deps/input/interface/GameControllerErrorType.h"

// auto generated forward declare list
// clang-format off
class IGameController;
// clang-format on

class IGameControllerManager {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IGameControllerManager() = default;

    virtual ::std::weak_ptr<::IGameController> getGameController(int id) = 0;

    virtual ::std::vector<::std::weak_ptr<::IGameController>> getConnectedGameControllers() = 0;

    virtual ::std::vector<::std::weak_ptr<::IGameController>> getGameControllersInUse() = 0;

    virtual bool hasAdequateConnectedGameController() const = 0;

    virtual bool hasAdequateConnectedGameControllers(uint64 const playerCount) const = 0;

    virtual uint64 getMaxGameControllerButtons() const = 0;

    virtual void registerConsumer(void const* token) = 0;

    virtual void unregisterConsumer(void const* token) = 0;

    virtual void setControllerRefreshState(::ControllerRefreshState state) = 0;

    virtual ::ControllerRefreshState getControllerRefreshState() const = 0;

    virtual ::GameControllerErrorType getPlatformSpecificControllerError() const = 0;

    virtual void
    setPlatformSpecificControllerErrorRetrievalFunc(::std::function<::GameControllerErrorType()>&& lambda) = 0;

    virtual void resetClientControllerCount() = 0;

    virtual void addClientHasAdequateConnectedController(int id, bool const isAdequate, ::SubClientId clientId) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
