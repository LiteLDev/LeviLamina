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
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~InMemorySequentialFile();

    // vIndex: 1, symbol: ?Read@InMemorySequentialFile@@UEAA?AVStatus@leveldb@@_KPEAVSlice@3@PEAD@Z
    virtual leveldb::Status Read(uint64, leveldb::Slice*, char*);

    // vIndex: 2, symbol: ?Skip@InMemorySequentialFile@@UEAA?AVStatus@leveldb@@_K@Z
    virtual leveldb::Status Skip(uint64);

    // symbol: ??0InMemorySequentialFile@@QEAA@V?$shared_ptr@VInMemoryFile@@@std@@@Z
    MCAPI explicit InMemorySequentialFile(std::shared_ptr<class InMemoryFile>);

    // NOLINTEND
};
