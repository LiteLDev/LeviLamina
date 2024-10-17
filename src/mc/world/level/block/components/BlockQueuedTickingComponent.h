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
    // vIndex: 0
    virtual ~BlockQueuedTickingComponent() = default;

    MCAPI void finalize(gsl::not_null<class BlockEvents::BlockQueuedTickEventComponent*> comp);

    MCAPI int getRandomTickDelay(class Random& random) const;

    MCAPI void onTick(struct BlockEvents::BlockQueuedTickEvent const& eventData) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    // NOLINTEND
};
