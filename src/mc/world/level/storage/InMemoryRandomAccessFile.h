#pragma once

#include "mc/_HeaderOutputPredefine.h"

class InMemoryRandomAccessFile {
public:
    // prevent constructor by default
    InMemoryRandomAccessFile& operator=(InMemoryRandomAccessFile const&);
    InMemoryRandomAccessFile(InMemoryRandomAccessFile const&);
    InMemoryRandomAccessFile();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1InMemoryRandomAccessFile@@UEAA@XZ
    virtual ~InMemoryRandomAccessFile() = default;

    // vIndex: 1, symbol: ?Read@InMemoryRandomAccessFile@@UEBA?AVStatus@leveldb@@_K0PEAVSlice@3@PEAD@Z
    virtual leveldb::Status Read(uint64 offset, uint64 n, leveldb::Slice* result, char* scratch) const;

    // NOLINTEND
};
