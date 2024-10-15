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

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(struct MovementDataExtractionUtility::MovementSnapshotComponent const&);

    MCAPI void* ctor$();

    MCAPI void* ctor$(struct MovementDataExtractionUtility::MovementSnapshotComponent&&);

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace MovementDataExtractionUtility
