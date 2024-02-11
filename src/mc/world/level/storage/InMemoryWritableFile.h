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
    // vIndex: 0, symbol: __gen_??1InMemoryWritableFile@@UEAA@XZ
    virtual ~InMemoryWritableFile() = default;

    // vIndex: 1, symbol: ?Append@InMemoryWritableFile@@UEAA?AVStatus@leveldb@@AEBVSlice@3@@Z
    virtual leveldb::Status Append(leveldb::Slice const& data);

    // vIndex: 2, symbol: ?Close@InMemoryWritableFile@@UEAA?AVStatus@leveldb@@XZ
    virtual leveldb::Status Close();

    // vIndex: 3, symbol: ?Flush@InMemoryWritableFile@@UEAA?AVStatus@leveldb@@XZ
    virtual leveldb::Status Flush();

    // vIndex: 4, symbol: ?Sync@InMemoryWritableFile@@UEAA?AVStatus@leveldb@@XZ
    virtual leveldb::Status Sync();

    // NOLINTEND
};
