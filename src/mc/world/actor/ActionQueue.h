#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActionQueue {
public:
    // prevent constructor by default
    ActionQueue& operator=(ActionQueue const&);
    ActionQueue(ActionQueue const&);

public:
    // NOLINTBEGIN
    // symbol: ??0ActionQueue@@QEAA@XZ
    MCAPI ActionQueue();

    // symbol: ?pushBackActionEvent@ActionQueue@@QEAAXVActionEvent@@@Z
    MCAPI void pushBackActionEvent(class ActionEvent actionEvent);

    // NOLINTEND
};
