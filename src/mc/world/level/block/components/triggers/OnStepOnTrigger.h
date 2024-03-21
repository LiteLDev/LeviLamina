#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace BlockEvents { class BlockStepOnEventComponent; }
namespace BlockEvents { struct BlockStepOnEvent; }
// clang-format on

class OnStepOnTrigger {
public:
    // prevent constructor by default
    OnStepOnTrigger& operator=(OnStepOnTrigger const&);
    OnStepOnTrigger(OnStepOnTrigger const&);
    OnStepOnTrigger();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1OnStepOnTrigger@@UEAA@XZ
    virtual ~OnStepOnTrigger() = default;

    // symbol: ?finalize@OnStepOnTrigger@@QEAAXV?$not_null@PEAVBlockStepOnEventComponent@BlockEvents@@@gsl@@@Z
    MCAPI void finalize(gsl::not_null<class BlockEvents::BlockStepOnEventComponent*>);

    // symbol: ?onStepOn@OnStepOnTrigger@@QEBAXAEBUBlockStepOnEvent@BlockEvents@@@Z
    MCAPI void onStepOn(struct BlockEvents::BlockStepOnEvent const&) const;

    // NOLINTEND
};
