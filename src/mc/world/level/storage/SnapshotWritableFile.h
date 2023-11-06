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
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~SnapshotWritableFile();

    // vIndex: 1, symbol: ?Append@SnapshotWritableFile@@UEAA?AVStatus@leveldb@@AEBVSlice@3@@Z
    virtual leveldb::Status Append(leveldb::Slice const&);

    // vIndex: 2, symbol: ?Close@SnapshotWritableFile@@UEAA?AVStatus@leveldb@@XZ
    virtual leveldb::Status Close();

    // vIndex: 3, symbol: ?Flush@SnapshotWritableFile@@UEAA?AVStatus@leveldb@@XZ
    virtual leveldb::Status Flush();

    // vIndex: 4, symbol: ?Sync@SnapshotWritableFile@@UEAA?AVStatus@leveldb@@XZ
    virtual leveldb::Status Sync();

    // NOLINTEND
};
