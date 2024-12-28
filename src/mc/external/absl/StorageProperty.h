#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace absl::internal_any_invocable {

enum class StorageProperty : uint64 {
    KAlignment   = 0,
    KStorageSize = 0,
};

}
