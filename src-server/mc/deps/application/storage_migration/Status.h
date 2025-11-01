#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::StorageMigration {

enum class Status : int {
    Complete = 0,
    Partial = 1,
    NotStarted = 2,
    SourceInaccessible = 3,
    UnsupportedStatus = 4,
};

}
