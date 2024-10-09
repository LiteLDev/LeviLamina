#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MovementDataExtractionUtility {

struct MovementSnapshotComponent {
public:
    // prevent constructor by default
    MovementSnapshotComponent& operator=(MovementSnapshotComponent const&);

public:
    // NOLINTBEGIN
    MCAPI MovementSnapshotComponent();

    MCAPI MovementSnapshotComponent(struct MovementDataExtractionUtility::MovementSnapshotComponent&&);

    MCAPI MovementSnapshotComponent(struct MovementDataExtractionUtility::MovementSnapshotComponent const&);

    MCAPI struct MovementDataExtractionUtility::MovementSnapshotComponent&
    operator=(struct MovementDataExtractionUtility::MovementSnapshotComponent&&);

    MCAPI ~MovementSnapshotComponent();

    // NOLINTEND
};

}; // namespace MovementDataExtractionUtility
