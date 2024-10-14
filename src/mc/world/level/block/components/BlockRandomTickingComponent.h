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
    // vIndex: 0
    virtual ~BlockRandomTickingComponent() = default;

    MCAPI void finalize(gsl::not_null<class BlockEvents::BlockRandomTickEventComponent*> comp);

    MCAPI void onTick(struct BlockEvents::BlockRandomTickEvent const& eventData) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    // NOLINTEND
};
