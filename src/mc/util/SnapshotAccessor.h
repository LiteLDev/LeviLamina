#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

namespace MovementDataExtractionUtility {

class SnapshotAccessor {
public:
    // prevent constructor by default
    SnapshotAccessor& operator=(SnapshotAccessor const&);
    SnapshotAccessor(SnapshotAccessor const&);
    SnapshotAccessor();

public:
    // NOLINTBEGIN
    MCAPI explicit SnapshotAccessor(class EntityContext const&);

    // NOLINTEND
};

}; // namespace MovementDataExtractionUtility
