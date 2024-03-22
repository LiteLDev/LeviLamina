#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace BlockEvents { class BlockPlaceEventComponent; }
namespace BlockEvents { struct BlockPlaceEvent; }
// clang-format on

class OnPlacedTrigger {
public:
    // prevent constructor by default
    OnPlacedTrigger& operator=(OnPlacedTrigger const&);
    OnPlacedTrigger(OnPlacedTrigger const&);
    OnPlacedTrigger();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1OnPlacedTrigger@@UEAA@XZ
    virtual ~OnPlacedTrigger() = default;

    // symbol: ?finalize@OnPlacedTrigger@@QEAAXV?$not_null@PEAVBlockPlaceEventComponent@BlockEvents@@@gsl@@@Z
    MCAPI void finalize(gsl::not_null<class BlockEvents::BlockPlaceEventComponent*>);

    // symbol: ?onPlace@OnPlacedTrigger@@QEBAXAEBUBlockPlaceEvent@BlockEvents@@@Z
    MCAPI void onPlace(struct BlockEvents::BlockPlaceEvent const&) const;

    // NOLINTEND
};
