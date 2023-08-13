#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SnapshotFilenameAndLength {

public:
    // prevent constructor by default
    SnapshotFilenameAndLength& operator=(SnapshotFilenameAndLength const&) = delete;
    SnapshotFilenameAndLength(SnapshotFilenameAndLength const&)            = delete;
    SnapshotFilenameAndLength()                                            = delete;
};
