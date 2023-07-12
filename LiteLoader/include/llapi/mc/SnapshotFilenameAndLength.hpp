/**
 * @file  SnapshotFilenameAndLength.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


struct SnapshotFilenameAndLength {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SNAPSHOTFILENAMEANDLENGTH
public:
    struct SnapshotFilenameAndLength& operator=(struct SnapshotFilenameAndLength const &) = delete;
    SnapshotFilenameAndLength(struct SnapshotFilenameAndLength const &) = delete;
    SnapshotFilenameAndLength() = delete;
#endif

public:
    /**
     * @symbol ?toString\@SnapshotFilenameAndLength\@\@QEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string toString();

};