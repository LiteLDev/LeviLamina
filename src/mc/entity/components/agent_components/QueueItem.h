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
};

}; // namespace AgentComponents::Actions
