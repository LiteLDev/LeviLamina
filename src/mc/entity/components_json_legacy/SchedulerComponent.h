#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SchedulerComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mCurrentEventIndex;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD int getCurrentEventIndex() const;

    MCFOLD void setCurrentEventIndex(int index);
    // NOLINTEND
};
