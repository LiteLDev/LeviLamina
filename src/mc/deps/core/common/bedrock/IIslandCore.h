#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class IIslandCore {
public:
    // prevent constructor by default
    IIslandCore& operator=(IIslandCore const&) = delete;
    IIslandCore(IIslandCore const&)            = delete;
    IIslandCore()                              = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@AppIsland@Bedrock@@UEAAGXZ
    virtual ushort getId() = 0;

    // symbol: ??1IIslandCore@Bedrock@@UEAA@XZ
    MCVAPI ~IIslandCore();

    // NOLINTEND
};

}; // namespace Bedrock
