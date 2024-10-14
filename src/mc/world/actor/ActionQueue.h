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

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
