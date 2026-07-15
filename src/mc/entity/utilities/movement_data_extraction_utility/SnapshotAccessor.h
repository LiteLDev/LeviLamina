#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MovementDataExtractionUtility {

class SnapshotAccessor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk6087d4;
    // NOLINTEND

public:
    // prevent constructor by default
    SnapshotAccessor& operator=(SnapshotAccessor const&);
    SnapshotAccessor(SnapshotAccessor const&);
    SnapshotAccessor();
};

} // namespace MovementDataExtractionUtility
