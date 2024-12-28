#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::StorageMigration {

enum class StorageMigrationType : int {
    Unknown                   = 4294967295,
    AndroidApi30ScopedStorage = 0,
};

}
