#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SnapshotFilenameAndLength {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SNAPSHOTFILENAMEANDLENGTH
public:
    SnapshotFilenameAndLength& operator=(SnapshotFilenameAndLength const&) = delete;
    SnapshotFilenameAndLength(SnapshotFilenameAndLength const&)            = delete;
    SnapshotFilenameAndLength()                                            = delete;
#endif

public:
    /**
     * @symbol
     * ?toString\@SnapshotFilenameAndLength\@\@QEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string toString();
};
