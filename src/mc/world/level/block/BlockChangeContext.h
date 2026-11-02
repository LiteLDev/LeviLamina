#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/NeighborChangeHistory.h"
#include "mc/world/level/block/ActorChangeContext.h"
#include "mc/world/level/block/EnvironmentChangeContext.h"
#include "mc/world/level/block/StatelessBlockChangeContext.h"

class BlockChangeContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        24,
        ::std::
            variant<::std::monostate, ::EnvironmentChangeContext, ::ActorChangeContext, ::StatelessBlockChangeContext>>
                                                                        mContextSource;
    ::ll::TypedStorage<4, 4, int>                                       mCommandVersion;
    ::ll::TypedStorage<1, 1, bool>                                      mTickSchedulingEnabled;
    ::ll::TypedStorage<8, 24, ::std::optional<::NeighborChangeHistory>> mNeighborChangeHistory;
    // NOLINTEND
};
