#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ExternalDataSnapshotComponent {
public:
    // prevent constructor by default
    ExternalDataSnapshotComponent& operator=(ExternalDataSnapshotComponent const&);
    ExternalDataSnapshotComponent(ExternalDataSnapshotComponent const&);
    ExternalDataSnapshotComponent();
};
