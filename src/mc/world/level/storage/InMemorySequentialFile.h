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
    // vIndex: 0, symbol: __gen_??1InMemorySequentialFile@@UEAA@XZ
    virtual ~InMemorySequentialFile() = default;

    // vIndex: 1, symbol: ?Read@InMemorySequentialFile@@UEAA?AVStatus@leveldb@@_KPEAVSlice@3@PEAD@Z
    virtual leveldb::Status Read(uint64 n, leveldb::Slice* result, char* scratch);

    // vIndex: 2, symbol: ?Skip@InMemorySequentialFile@@UEAA?AVStatus@leveldb@@_K@Z
    virtual leveldb::Status Skip(uint64 n);

    // NOLINTEND
};
