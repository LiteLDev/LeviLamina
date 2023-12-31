#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/FocusImpact.h"

class ActionEvent {
public:
    // ActionEvent inner types define
    enum class ActionState {};

public:
    // prevent constructor by default
    ActionEvent& operator=(ActionEvent const&);
    ActionEvent(ActionEvent const&);
    ActionEvent();

public:
    // NOLINTBEGIN
    // symbol: ??0ActionEvent@@QEAA@HW4ActionState@0@_NW4FocusImpact@@@Z
    MCAPI
    ActionEvent(int actionId, ::ActionEvent::ActionState actionState, bool isExclusive, ::FocusImpact focusImpact);

    // NOLINTEND
};
