#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"

// auto generated forward declare list
// clang-format off
struct GameControllerEvent;
// clang-format on

class IGameController {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IGameController() = default;

    virtual bool hasEvents(void const*) const = 0;

    virtual ::GameControllerEvent getNextEvent(void const*) = 0;

    virtual int getId() const = 0;

    virtual bool isConnected() const = 0;

    virtual bool isAdequateController() const = 0;

    virtual void pairControllerToClient(::SubClientId) = 0;

    virtual void unpairControllerFromClient() = 0;

    virtual bool isControllerPairedToClient() const = 0;

    virtual ::std::optional<::SubClientId> getPairedClientId() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
