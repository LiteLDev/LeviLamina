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
    // vIndex: 0
    virtual ~InMemoryRandomAccessFile() = default;

    // vIndex: 1
    virtual leveldb::Status Read(uint64 offset, uint64 n, leveldb::Slice* result, char* scratch) const;

    // NOLINTEND
};
