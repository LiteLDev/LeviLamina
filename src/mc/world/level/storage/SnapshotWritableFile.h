#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SnapshotWritableFile {
public:
    // prevent constructor by default
    SnapshotWritableFile& operator=(SnapshotWritableFile const&);
    SnapshotWritableFile(SnapshotWritableFile const&);
    SnapshotWritableFile();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SnapshotWritableFile@@UEAA@XZ
    virtual ~SnapshotWritableFile() = default;

    // vIndex: 1, symbol: ?Append@SnapshotWritableFile@@UEAA?AVStatus@leveldb@@AEBVSlice@3@@Z
    virtual leveldb::Status Append(leveldb::Slice const& data);

    // vIndex: 2, symbol: ?Close@SnapshotWritableFile@@UEAA?AVStatus@leveldb@@XZ
    virtual leveldb::Status Close();

    // vIndex: 3, symbol: ?Flush@SnapshotWritableFile@@UEAA?AVStatus@leveldb@@XZ
    virtual leveldb::Status Flush();

    // vIndex: 4, symbol: ?Sync@SnapshotWritableFile@@UEAA?AVStatus@leveldb@@XZ
    virtual leveldb::Status Sync();

    // symbol: ??0SnapshotWritableFile@@QEAA@$$QEAPEAVWritableFile@leveldb@@AEAVshared_mutex@std@@@Z
    MCAPI SnapshotWritableFile(leveldb::WritableFile*&& r, std::shared_mutex& creationAndWriteLock);

    // NOLINTEND
};
