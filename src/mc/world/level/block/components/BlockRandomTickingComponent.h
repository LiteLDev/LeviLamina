#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/components/BlockComponentBase.h"

// auto generated forward declare list
// clang-format off
namespace BlockEvents { class BlockRandomTickEventComponent; }
namespace BlockEvents { struct BlockRandomTickEvent; }
// clang-format on

struct BlockRandomTickingComponent : public ::BlockComponentBase {
public:
    // prevent constructor by default
    BlockRandomTickingComponent& operator=(BlockRandomTickingComponent const&);
    BlockRandomTickingComponent(BlockRandomTickingComponent const&);
    BlockRandomTickingComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BlockRandomTickingComponent@@UEAA@XZ
    virtual ~BlockRandomTickingComponent() = default;

    // symbol:
    // ?finalize@BlockRandomTickingComponent@@QEAAXV?$not_null@PEAVBlockRandomTickEventComponent@BlockEvents@@@gsl@@@Z
    MCAPI void finalize(gsl::not_null<class BlockEvents::BlockRandomTickEventComponent*>);

    // symbol: ?onTick@BlockRandomTickingComponent@@QEBAXAEBUBlockRandomTickEvent@BlockEvents@@@Z
    MCAPI void onTick(struct BlockEvents::BlockRandomTickEvent const&) const;

    // NOLINTEND
};
