#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IPacketHandlerDispatcher {
public:
    // prevent constructor by default
    IPacketHandlerDispatcher& operator=(IPacketHandlerDispatcher const&);
    IPacketHandlerDispatcher(IPacketHandlerDispatcher const&);
    IPacketHandlerDispatcher();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~IPacketHandlerDispatcher();

    // NOLINTEND
};
