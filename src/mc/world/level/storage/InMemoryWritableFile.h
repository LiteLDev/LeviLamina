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
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?Append@InMemoryWritableFile@@UEAA?AVStatus@leveldb@@AEBVSlice@3@@Z
    virtual leveldb::Status Append(leveldb::Slice const&);

    // vIndex: 2, symbol: ?Close@InMemoryWritableFile@@UEAA?AVStatus@leveldb@@XZ
    virtual leveldb::Status Close();

    // vIndex: 3, symbol: ?Flush@InMemoryWritableFile@@UEAA?AVStatus@leveldb@@XZ
    virtual leveldb::Status Flush();

    // vIndex: 4, symbol: ?Sync@InMemoryWritableFile@@UEAA?AVStatus@leveldb@@XZ
    virtual leveldb::Status Sync();

    // symbol: ??0InMemoryWritableFile@@QEAA@V?$shared_ptr@VInMemoryFile@@@std@@@Z
    MCAPI explicit InMemoryWritableFile(std::shared_ptr<class InMemoryFile>);

    // NOLINTEND
};
