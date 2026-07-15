#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/DefinitionTrigger.h"
#include "mc/world/level/block/components/IBlockComponent.h"

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
};
