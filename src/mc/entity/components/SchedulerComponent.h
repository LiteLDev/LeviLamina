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
    MCAPI int getCurrentEventIndex() const;

    MCAPI void setCurrentEventIndex(int index);

    // NOLINTEND
};
