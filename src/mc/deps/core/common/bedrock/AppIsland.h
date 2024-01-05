#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/IIslandCore.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class ActivationArguments; }
namespace Bedrock { class IIslandCore; }
// clang-format on

namespace Bedrock {

class AppIsland : public ::Bedrock::IIslandCore {
public:
    // prevent constructor by default
    AppIsland& operator=(AppIsland const&);
    AppIsland(AppIsland const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1AppIsland@Bedrock@@UEAA@XZ
    virtual ~AppIsland();

    // vIndex: 1, symbol: ?getId@AppIsland@Bedrock@@UEAAGXZ
    virtual ushort getId();

    // symbol: ?mainUpdate@AppIsland@Bedrock@@UEAAXXZ
    MCVAPI void mainUpdate();

    // symbol: ?processActivationArguments@AppIsland@Bedrock@@UEAAXAEBVActivationArguments@2@@Z
    MCVAPI void processActivationArguments(class Bedrock::ActivationArguments const& args);

    // symbol: ?resume@AppIsland@Bedrock@@UEAA_NXZ
    MCVAPI bool resume();

    // symbol: ?start@AppIsland@Bedrock@@UEAA_NXZ
    MCVAPI bool start();

    // symbol: ?stop@AppIsland@Bedrock@@UEAA_NXZ
    MCVAPI bool stop();

    // symbol: ?suspend@AppIsland@Bedrock@@UEAA_NXZ
    MCVAPI bool suspend();

    // symbol: ??0AppIsland@Bedrock@@QEAA@XZ
    MCAPI AppIsland();

    // NOLINTEND
};

}; // namespace Bedrock
