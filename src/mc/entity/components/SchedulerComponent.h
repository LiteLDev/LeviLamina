#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SchedulerComponent {
public:
    // prevent constructor by default
    SchedulerComponent& operator=(SchedulerComponent const&);
    SchedulerComponent(SchedulerComponent const&);
    SchedulerComponent();

public:
    // NOLINTBEGIN
    // symbol: ?getCurrentEventIndex@SchedulerComponent@@QEBAHXZ
    MCAPI int getCurrentEventIndex() const;

    // symbol: ?setCurrentEventIndex@SchedulerComponent@@QEAAXH@Z
    MCAPI void setCurrentEventIndex(int index);

    // NOLINTEND
};
