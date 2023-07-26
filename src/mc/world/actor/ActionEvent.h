#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActionEvent {
public:
    // ActionEvent inner types declare
    // clang-format off

    // clang-format on

    // ActionEvent inner types define
    enum class ActionState {};

public:
    // prevent constructor by default
    ActionEvent& operator=(ActionEvent const&) = delete;
    ActionEvent(ActionEvent const&)            = delete;
    ActionEvent()                              = delete;

public:
    /**
     * @symbol ??0ActionEvent\@\@QEAA\@HW4ActionState\@0\@_NW4FocusImpact\@\@\@Z
     */
    MCAPI ActionEvent(int, enum class ActionEvent::ActionState, bool, enum class FocusImpact); // NOLINT
};
