#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/components/BlockComponentBase.h"

// auto generated forward declare list
// clang-format off
namespace BlockEvents { class BlockQueuedTickEventComponent; }
namespace BlockEvents { struct BlockQueuedTickEvent; }
// clang-format on

struct BlockQueuedTickingComponent : public ::BlockComponentBase {
public:
    // prevent constructor by default
    BlockQueuedTickingComponent& operator=(BlockQueuedTickingComponent const&);
    BlockQueuedTickingComponent(BlockQueuedTickingComponent const&);
    BlockQueuedTickingComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BlockQueuedTickingComponent@@UEAA@XZ
    virtual ~BlockQueuedTickingComponent() = default;

    // symbol:
    // ?finalize@BlockQueuedTickingComponent@@QEAAXV?$not_null@PEAVBlockQueuedTickEventComponent@BlockEvents@@@gsl@@@Z
    MCAPI void finalize(gsl::not_null<class BlockEvents::BlockQueuedTickEventComponent*>);

    // symbol: ?getRandomTickDelay@BlockQueuedTickingComponent@@QEBAHAEAVRandom@@@Z
    MCAPI int getRandomTickDelay(class Random&) const;

    // symbol: ?onTick@BlockQueuedTickingComponent@@QEBAXAEBUBlockQueuedTickEvent@BlockEvents@@@Z
    MCAPI void onTick(struct BlockEvents::BlockQueuedTickEvent const&) const;

    // NOLINTEND
};
