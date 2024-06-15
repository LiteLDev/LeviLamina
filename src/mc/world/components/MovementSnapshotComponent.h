#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MovementDataExtractionUtility {

struct MovementSnapshotComponent {
public:
    // prevent constructor by default
    MovementSnapshotComponent& operator=(MovementSnapshotComponent const&);

public:
    // NOLINTBEGIN
    // symbol: ??0MovementSnapshotComponent@MovementDataExtractionUtility@@QEAA@XZ
    MCAPI MovementSnapshotComponent();

    // symbol: ??0MovementSnapshotComponent@MovementDataExtractionUtility@@QEAA@$$QEAU01@@Z
    MCAPI MovementSnapshotComponent(struct MovementDataExtractionUtility::MovementSnapshotComponent&&);

    // symbol: ??0MovementSnapshotComponent@MovementDataExtractionUtility@@QEAA@AEBU01@@Z
    MCAPI MovementSnapshotComponent(struct MovementDataExtractionUtility::MovementSnapshotComponent const&);

    // symbol: ??4MovementSnapshotComponent@MovementDataExtractionUtility@@QEAAAEAU01@$$QEAU01@@Z
    MCAPI struct MovementDataExtractionUtility::MovementSnapshotComponent&
    operator=(struct MovementDataExtractionUtility::MovementSnapshotComponent&&);

    // symbol: ??1MovementSnapshotComponent@MovementDataExtractionUtility@@QEAA@XZ
    MCAPI ~MovementSnapshotComponent();

    // NOLINTEND
};

}; // namespace MovementDataExtractionUtility
