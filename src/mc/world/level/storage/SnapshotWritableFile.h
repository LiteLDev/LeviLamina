#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SnapshotWritableFile {

public:
    // prevent constructor by default
    SnapshotWritableFile& operator=(SnapshotWritableFile const&) = delete;
    SnapshotWritableFile(SnapshotWritableFile const&)            = delete;
    SnapshotWritableFile()                                       = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?Append\@SnapshotWritableFile\@\@UEAA?AVStatus\@leveldb\@\@AEBVSlice\@3\@\@Z
     */
    virtual class leveldb::Status Append(class leveldb::Slice const&); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?Close\@SnapshotWritableFile\@\@UEAA?AVStatus\@leveldb\@\@XZ
     */
    virtual class leveldb::Status Close(); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?Flush\@SnapshotWritableFile\@\@UEAA?AVStatus\@leveldb\@\@XZ
     */
    virtual class leveldb::Status Flush(); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?Sync\@SnapshotWritableFile\@\@UEAA?AVStatus\@leveldb\@\@XZ
     */
    virtual class leveldb::Status Sync(); // NOLINT
};
