#pragma once

#include "ll/api/base/Macro.h"

namespace ll {

enum class ProcessStatus : int {
    Default = 0,
    Starting,
    Running,
    Stopping,
};

LLNDAPI ProcessStatus getProcessStatus();

void setProcessStatus(ProcessStatus);

} // namespace ll
