#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::StorageMigration {

struct ManifestFlushThresholds {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk2bc902;
    ::ll::UntypedStorage<4, 4> mUnkf8cf07;
    // NOLINTEND

public:
    // prevent constructor by default
    ManifestFlushThresholds& operator=(ManifestFlushThresholds const&);
    ManifestFlushThresholds(ManifestFlushThresholds const&);
    ManifestFlushThresholds();
};

} // namespace Bedrock::StorageMigration
