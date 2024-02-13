#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class ActivationArguments; }
// clang-format on

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

    // vIndex: 2, symbol: ?start@AppIsland@Bedrock@@UEAA_NXZ
    virtual bool start() = 0;

    // vIndex: 3, symbol: ?suspend@AppIsland@Bedrock@@UEAA_NXZ
    virtual bool suspend() = 0;

    // vIndex: 4, symbol: ?resume@AppIsland@Bedrock@@UEAA_NXZ
    virtual bool resume() = 0;

    // vIndex: 5, symbol: ?stop@AppIsland@Bedrock@@UEAA_NXZ
    virtual bool stop() = 0;

    // vIndex: 6, symbol: ?mainUpdate@AppIsland@Bedrock@@UEAAXXZ
    virtual void mainUpdate() = 0;

    // vIndex: 7, symbol: ?processActivationArguments@AppIsland@Bedrock@@UEAAXAEBVActivationArguments@2@@Z
    virtual void processActivationArguments(class Bedrock::ActivationArguments const& args) = 0;

    // NOLINTEND
};

}; // namespace Bedrock
