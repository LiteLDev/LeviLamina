#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/ExecutionResult.h"

// auto generated forward declare list
// clang-format off
class SimulatedPlayer;
namespace sim { struct ContinuousLookAtEntityIntent; }
namespace sim { struct ContinuousLookAtPositionIntent; }
namespace sim { struct LookAtEntityIntent; }
namespace sim { struct LookAtPositionIntent; }
namespace sim { struct VoidLookAtIntent; }
// clang-format on

namespace sim {

struct LookAtIntent {
public:
    // prevent constructor by default
    LookAtIntent& operator=(LookAtIntent const&);
    LookAtIntent(LookAtIntent const&);

public:
    // NOLINTBEGIN
    // symbol: ??0LookAtIntent@sim@@QEAA@XZ
    MCAPI LookAtIntent();

    // symbol:
    // ??0LookAtIntent@sim@@QEAA@V?$variant@UVoidLookAtIntent@sim@@ULookAtPositionIntent@2@UContinuousLookAtPositionIntent@2@ULookAtEntityIntent@2@UContinuousLookAtEntityIntent@2@@std@@@Z
    MCAPI explicit LookAtIntent(std::variant<
                                struct sim::VoidLookAtIntent,
                                struct sim::LookAtPositionIntent,
                                struct sim::ContinuousLookAtPositionIntent,
                                struct sim::LookAtEntityIntent,
                                struct sim::ContinuousLookAtEntityIntent>);

    // symbol: ?execute@LookAtIntent@sim@@QEAA?AW4ExecutionResult@2@AEAVSimulatedPlayer@@@Z
    MCAPI ::sim::ExecutionResult execute(class SimulatedPlayer&);

    // symbol: ?finalize@LookAtIntent@sim@@QEAAXAEAVSimulatedPlayer@@@Z
    MCAPI void finalize(class SimulatedPlayer&);

    // symbol: ?reset@LookAtIntent@sim@@QEAAXXZ
    MCAPI void reset();

    // symbol: ??1LookAtIntent@sim@@QEAA@XZ
    MCAPI ~LookAtIntent();

    // NOLINTEND
};

}; // namespace sim
