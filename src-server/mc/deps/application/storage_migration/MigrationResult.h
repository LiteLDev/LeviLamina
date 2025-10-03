#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::StorageMigration {

enum class MigrationResult : int {
    Success = 0,
    Partial = 1,
    NoSpace = 2,
    Aborted = 3,
};

}
