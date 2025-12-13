#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor {

enum class ProjectExportStatus : int {
    Idle       = 0,
    Processing = 1,
    Completed  = 2,
};

}
