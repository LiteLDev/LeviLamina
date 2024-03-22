#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace BlockEvents { class BlockPlayerDestroyEventComponent; }
namespace BlockEvents { struct BlockPlayerDestroyEvent; }
// clang-format on

class OnPlayerDestroyedTrigger {
public:
    // prevent constructor by default
    OnPlayerDestroyedTrigger& operator=(OnPlayerDestroyedTrigger const&);
    OnPlayerDestroyedTrigger(OnPlayerDestroyedTrigger const&);
    OnPlayerDestroyedTrigger();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1OnPlayerDestroyedTrigger@@UEAA@XZ
    virtual ~OnPlayerDestroyedTrigger() = default;

    // symbol:
    // ?finalize@OnPlayerDestroyedTrigger@@QEAAXV?$not_null@PEAVBlockPlayerDestroyEventComponent@BlockEvents@@@gsl@@@Z
    MCAPI void finalize(gsl::not_null<class BlockEvents::BlockPlayerDestroyEventComponent*>);

    // symbol: ?onPlayerDestroy@OnPlayerDestroyedTrigger@@QEBAXAEBUBlockPlayerDestroyEvent@BlockEvents@@@Z
    MCAPI void onPlayerDestroy(struct BlockEvents::BlockPlayerDestroyEvent const&) const;

    // NOLINTEND
};
