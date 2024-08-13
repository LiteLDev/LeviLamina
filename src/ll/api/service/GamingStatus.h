#pragma once

#include "ll/api/base/Macro.h"

namespace ll {

enum class GamingStatus : int {
    Default = 0,
    Starting,
    Running,
    Stopping,
};

LLNDAPI GamingStatus getGamingStatus();

void setGamingStatus(GamingStatus);

} // namespace ll
