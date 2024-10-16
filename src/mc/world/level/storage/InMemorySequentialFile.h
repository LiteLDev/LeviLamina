#pragma once

#include "mc/_HeaderOutputPredefine.h"

class InMemorySequentialFile {
public:
    // prevent constructor by default
    InMemorySequentialFile& operator=(InMemorySequentialFile const&);
    InMemorySequentialFile(InMemorySequentialFile const&);
    InMemorySequentialFile();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~InMemorySequentialFile() = default;

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
