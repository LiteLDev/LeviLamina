#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RemoteConnector {
public:
    // prevent constructor by default
    RemoteConnector& operator=(RemoteConnector const&) = delete;
    RemoteConnector(RemoteConnector const&)            = delete;
    RemoteConnector()                                  = delete;

public:
    // NOLINTBEGIN
    // symbol: ??1RemoteConnector@@UEAA@XZ
    MCVAPI ~RemoteConnector();

    // NOLINTEND
};
