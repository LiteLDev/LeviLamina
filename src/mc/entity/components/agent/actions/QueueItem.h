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
    // symbol: ??0QueueItem@Actions@AgentComponents@@QEAA@$$QEAU012@@Z
    MCAPI QueueItem(struct AgentComponents::Actions::QueueItem&&);

    // symbol: ??4QueueItem@Actions@AgentComponents@@QEAAAEAU012@AEBU012@@Z
    MCAPI struct AgentComponents::Actions::QueueItem& operator=(struct AgentComponents::Actions::QueueItem const&);

    // symbol: ??1QueueItem@Actions@AgentComponents@@QEAA@XZ
    MCAPI ~QueueItem();

    // NOLINTEND
};

}; // namespace AgentComponents::Actions
