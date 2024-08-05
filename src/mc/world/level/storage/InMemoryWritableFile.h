#pragma once

#include "mc/_HeaderOutputPredefine.h"

class InMemoryWritableFile {
public:
    // prevent constructor by default
    InMemoryWritableFile& operator=(InMemoryWritableFile const&);
    InMemoryWritableFile(InMemoryWritableFile const&);
    InMemoryWritableFile();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~InMemoryWritableFile() = default;

    // vIndex: 1
    virtual leveldb::Status Append(leveldb::Slice const& data);

    // vIndex: 2
    virtual leveldb::Status Close();

    // vIndex: 3
    virtual leveldb::Status Flush();

    // vIndex: 4
    virtual leveldb::Status Sync();

    // NOLINTEND
};
