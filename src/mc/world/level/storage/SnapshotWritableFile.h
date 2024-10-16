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
    // vIndex: 0
    virtual ~SnapshotWritableFile() = default;

    // vIndex: 1
    virtual leveldb::Status Append(leveldb::Slice const& data);

    // vIndex: 2
    virtual leveldb::Status Close();

    // vIndex: 3
    virtual leveldb::Status Flush();

    // vIndex: 4
    virtual leveldb::Status Sync();

    MCAPI SnapshotWritableFile(leveldb::WritableFile*&& r, std::shared_mutex& creationAndWriteLock);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(leveldb::WritableFile*&& r, std::shared_mutex& creationAndWriteLock);

    MCAPI leveldb::Status Append$(leveldb::Slice const& data);

    MCAPI leveldb::Status Close$();

    MCAPI leveldb::Status Flush$();

    MCAPI leveldb::Status Sync$();

    // NOLINTEND
};
