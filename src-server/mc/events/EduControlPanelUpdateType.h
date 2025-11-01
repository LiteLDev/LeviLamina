#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class EduControlPanelUpdateType : short {
    Unknown              = 0,
    ManualActivation     = 1,
    RoleActivation       = 2,
    SavedStateActivation = 3,
    FailedActivation     = 4,
    Deactivation         = 5,
};
