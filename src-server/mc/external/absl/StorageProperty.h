#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace absl::internal_any_invocable {

enum class StorageProperty : uint64 {
    // bitfield representation
    KAlignment = 1ull << 3,
    KStorageSize = 1ull << 4,
};

}
