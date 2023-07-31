#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SnapshotFilenameAndLength {

public:
    // prevent constructor by default
    SnapshotFilenameAndLength& operator=(SnapshotFilenameAndLength const&) = delete;
    SnapshotFilenameAndLength(SnapshotFilenameAndLength const&)            = delete;
    SnapshotFilenameAndLength()                                            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?toString\@SnapshotFilenameAndLength\@\@QEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string toString();
    // NOLINTEND
};
