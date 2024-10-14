#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AgentComponents::Actions {

struct QueueItem {
public:
    // prevent constructor by default
    QueueItem(QueueItem const&);
    QueueItem();

public:
    // NOLINTBEGIN
    MCAPI QueueItem(struct AgentComponents::Actions::QueueItem&&);

    MCAPI struct AgentComponents::Actions::QueueItem& operator=(struct AgentComponents::Actions::QueueItem const&);

    MCAPI ~QueueItem();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace AgentComponents::Actions
