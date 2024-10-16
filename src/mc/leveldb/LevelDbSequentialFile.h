#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LevelDbSequentialFile {
public:
    // prevent constructor by default
    LevelDbSequentialFile& operator=(LevelDbSequentialFile const&);
    LevelDbSequentialFile(LevelDbSequentialFile const&);
    LevelDbSequentialFile();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LevelDbSequentialFile() = default;

    // vIndex: 1
    virtual leveldb::Status Read(uint64 n, leveldb::Slice* result, char* scratch);

    // vIndex: 2
    virtual leveldb::Status Skip(uint64 n);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI leveldb::Status Read$(uint64 n, leveldb::Slice* result, char* scratch);

    MCAPI leveldb::Status Skip$(uint64 n);

    // NOLINTEND
};
