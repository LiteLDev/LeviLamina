#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace BlockEvents { class BlockStepOffEventComponent; }
namespace BlockEvents { struct BlockStepOffEvent; }
// clang-format on

class OnStepOffTrigger {
public:
    // prevent constructor by default
    OnStepOffTrigger& operator=(OnStepOffTrigger const&);
    OnStepOffTrigger(OnStepOffTrigger const&);
    OnStepOffTrigger();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1OnStepOffTrigger@@UEAA@XZ
    virtual ~OnStepOffTrigger() = default;

    // symbol: ?finalize@OnStepOffTrigger@@QEAAXV?$not_null@PEAVBlockStepOffEventComponent@BlockEvents@@@gsl@@@Z
    MCAPI void finalize(gsl::not_null<class BlockEvents::BlockStepOffEventComponent*>);

    // symbol: ?onStepOff@OnStepOffTrigger@@QEBAXAEBUBlockStepOffEvent@BlockEvents@@@Z
    MCAPI void onStepOff(struct BlockEvents::BlockStepOffEvent const&) const;

    // NOLINTEND
};
