#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SettingsCommand {

enum class FailureReason : uchar {
    SettingNotFound = 0,
    WrongType       = 1,
    UpdateFailed    = 2,
    SettingDisabled = 3,
};

}
