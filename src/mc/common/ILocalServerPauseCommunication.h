#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ILocalServerPauseCommunication {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ILocalServerPauseCommunication() = default;

    virtual bool requestInGamePause(bool) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
