#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class IIslandCore {
public:
    // prevent constructor by default
    IIslandCore& operator=(IIslandCore const&);
    IIslandCore(IIslandCore const&);
    IIslandCore();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1IIslandCore@Bedrock@@UEAA@XZ
    virtual ~IIslandCore();

    // vIndex: 1, symbol: ?getId@AppIsland@Bedrock@@UEAAGXZ
    virtual ushort getId() = 0;

    // NOLINTEND
};

}; // namespace Bedrock
