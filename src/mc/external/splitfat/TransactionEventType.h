#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SFAT {

enum class TransactionEventType : uint {
    FatBlockChanged                 = 0,
    DirectoryClusterChanged         = 1,
    FileClusterChanged              = 2,
    BlockVirtualizationTableChanged = 3,
};

}
