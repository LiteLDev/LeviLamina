#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ILocalServerPauseCommunication {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ILocalServerPauseCommunication() = default;

    // vIndex: 1
    virtual bool requestInGamePause(bool) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};
