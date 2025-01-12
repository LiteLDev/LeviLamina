#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ActionEvent;
// clang-format on

class ActionQueue {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnkc868c7;
    // NOLINTEND

public:
    // prevent constructor by default
    ActionQueue& operator=(ActionQueue const&);
    ActionQueue(ActionQueue const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ActionQueue();

    MCAPI void pushBackActionEvent(::ActionEvent actionEvent);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor();
    // NOLINTEND
};
