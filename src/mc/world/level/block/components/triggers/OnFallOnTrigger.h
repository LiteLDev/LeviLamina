#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace BlockEvents { class BlockFallOnEventComponent; }
namespace BlockEvents { struct BlockFallOnEvent; }
// clang-format on

class OnFallOnTrigger {
public:
    // prevent constructor by default
    OnFallOnTrigger& operator=(OnFallOnTrigger const&);
    OnFallOnTrigger(OnFallOnTrigger const&);
    OnFallOnTrigger();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1OnFallOnTrigger@@UEAA@XZ
    virtual ~OnFallOnTrigger() = default;

    // symbol: ?finalize@OnFallOnTrigger@@QEAAXV?$not_null@PEAVBlockFallOnEventComponent@BlockEvents@@@gsl@@@Z
    MCAPI void finalize(gsl::not_null<class BlockEvents::BlockFallOnEventComponent*>);

    // symbol: ?onFallOn@OnFallOnTrigger@@QEBAXAEAUBlockFallOnEvent@BlockEvents@@@Z
    MCAPI void onFallOn(struct BlockEvents::BlockFallOnEvent&) const;

    // NOLINTEND
};
