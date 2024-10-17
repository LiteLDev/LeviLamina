#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LevelDbRandomAccessFile {
public:
    // prevent constructor by default
    LevelDbRandomAccessFile& operator=(LevelDbRandomAccessFile const&);
    LevelDbRandomAccessFile(LevelDbRandomAccessFile const&);
    LevelDbRandomAccessFile();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LevelDbRandomAccessFile() = default;

    // vIndex: 1
    virtual leveldb::Status Read(uint64 offset, uint64 n, leveldb::Slice* result, char* scratch) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI leveldb::Status Read$(uint64 offset, uint64 n, leveldb::Slice* result, char* scratch) const;

    // NOLINTEND
};
