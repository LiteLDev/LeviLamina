#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActionQueue {
public:
    // prevent constructor by default
    ActionQueue& operator=(ActionQueue const&);
    ActionQueue(ActionQueue const&);

public:
    // NOLINTBEGIN
    MCAPI ActionQueue();

    MCAPI void pushBackActionEvent(class ActionEvent actionEvent);

    // NOLINTEND
};
