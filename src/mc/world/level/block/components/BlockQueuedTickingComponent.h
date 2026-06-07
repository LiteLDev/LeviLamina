#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/DefinitionTrigger.h"
#include "mc/world/level/block/components/IBlockComponent.h"

// auto generated forward declare list
// clang-format off
class Random;
namespace BlockEvents { class BlockQueuedTickEvent; }
// clang-format on

struct BlockQueuedTickingComponent : public ::IBlockComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                 mLooping;
    ::ll::TypedStorage<4, 4, uint>                 mDelayIntervalMinTicks;
    ::ll::TypedStorage<4, 4, uint>                 mDelayIntervalMaxTicks;
    ::ll::TypedStorage<8, 56, ::DefinitionTrigger> mOnTimeDown;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlockQueuedTickingComponent() = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI int getRandomTickDelay(::Random& random) const;

    MCAPI void onEvent(::BlockEvents::BlockQueuedTickEvent const& eventData) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
