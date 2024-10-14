#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/chunk/QueueRequestResult.h"

class DelayActionList {
public:
    // prevent constructor by default
    DelayActionList& operator=(DelayActionList const&);
    DelayActionList(DelayActionList const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DelayActionList() = default;

    MCAPI DelayActionList();

    MCAPI ::QueueRequestResult queueRequestOrExecuteAction(
        class DelayRequest request,
        class ServerLevel& level,
        class Dimension&   dimension,
        uint64             currentTick,
        bool               allowDuplicates
    );

    MCAPI void tick(class ServerLevel& level, class Dimension& dimension, uint64 currentTick);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
