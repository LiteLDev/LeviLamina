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

    virtual ::std::weak_ptr<::IGameController> getGameController(int) = 0;

    virtual ::std::vector<::std::weak_ptr<::IGameController>> getConnectedGameControllers() = 0;

    virtual ::std::vector<::std::weak_ptr<::IGameController>> getGameControllersInUse() = 0;

    virtual bool hasAdequateConnectedGameController() const = 0;

    virtual bool hasAdequateConnectedGameControllers(uint64 const) const = 0;

    virtual uint64 getMaxGameControllerButtons() const = 0;

    virtual void registerConsumer(void const*) = 0;

    virtual void unregisterConsumer(void const*) = 0;

    virtual void setControllerRefreshState(::ControllerRefreshState) = 0;

    virtual ::ControllerRefreshState getControllerRefreshState() const = 0;

    virtual ::GameControllerErrorType getPlatformSpecificControllerError() const = 0;

    virtual void setPlatformSpecificControllerErrorRetrievalFunc(::std::function<::GameControllerErrorType()>&&) = 0;

    virtual void resetClientControllerCount() = 0;

    virtual void addClientHasAdequateConnectedController(int, bool const, ::SubClientId) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
