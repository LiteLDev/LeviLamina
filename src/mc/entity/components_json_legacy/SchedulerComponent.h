#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SchedulerComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk541a31;
    // NOLINTEND

public:
    // prevent constructor by default
    SchedulerComponent& operator=(SchedulerComponent const&);
    SchedulerComponent(SchedulerComponent const&);
    SchedulerComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI int getCurrentEventIndex() const;

    MCAPI void setCurrentEventIndex(int index);
    // NOLINTEND
};
