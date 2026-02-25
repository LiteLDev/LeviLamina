#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class BindingCondition : int {
    None              = 0,
    Once              = 1,
    Always            = 2,
    AlwaysWhenVisible = 3,
    Visible           = 4,
    VisibilityChanged = 5,
};
