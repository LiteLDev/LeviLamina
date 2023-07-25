#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AgentComponents::Actions {

struct QueueItem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AGENTCOMPONENTS_ACTIONS_QUEUEITEM
public:
    QueueItem(QueueItem const&) = delete;
    QueueItem()                 = delete;
#endif

public:
    /**
     * @symbol ??0QueueItem\@Actions\@AgentComponents\@\@QEAA\@$$QEAU012\@\@Z
     */
    MCAPI QueueItem(struct AgentComponents::Actions::QueueItem&&);
    /**
     * @symbol ??4QueueItem\@Actions\@AgentComponents\@\@QEAAAEAU012\@AEBU012\@\@Z
     */
    MCAPI struct AgentComponents::Actions::QueueItem& operator=(struct AgentComponents::Actions::QueueItem const&);
    /**
     * @symbol ??1QueueItem\@Actions\@AgentComponents\@\@QEAA\@XZ
     */
    MCAPI ~QueueItem();
};

}; // namespace AgentComponents::Actions
