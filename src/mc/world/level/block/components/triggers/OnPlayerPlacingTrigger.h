#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace BlockEvents { class BlockPlayerPlacingEventComponent; }
namespace BlockEvents { struct BlockPlayerPlacingEvent; }
// clang-format on

class OnPlayerPlacingTrigger {
public:
    // prevent constructor by default
    OnPlayerPlacingTrigger& operator=(OnPlayerPlacingTrigger const&);
    OnPlayerPlacingTrigger(OnPlayerPlacingTrigger const&);
    OnPlayerPlacingTrigger();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1OnPlayerPlacingTrigger@@UEAA@XZ
    virtual ~OnPlayerPlacingTrigger() = default;

    // symbol:
    // ?finalize@OnPlayerPlacingTrigger@@QEAAXV?$not_null@PEAVBlockPlayerPlacingEventComponent@BlockEvents@@@gsl@@@Z
    MCAPI void finalize(gsl::not_null<class BlockEvents::BlockPlayerPlacingEventComponent*>);

    // symbol: ?onPlayerPlacing@OnPlayerPlacingTrigger@@QEBAXAEAUBlockPlayerPlacingEvent@BlockEvents@@@Z
    MCAPI void onPlayerPlacing(struct BlockEvents::BlockPlayerPlacingEvent&) const;

    // NOLINTEND
};
