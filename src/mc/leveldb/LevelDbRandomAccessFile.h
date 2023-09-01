#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LevelDbRandomAccessFile {
public:
    // prevent constructor by default
    LevelDbRandomAccessFile& operator=(LevelDbRandomAccessFile const&) = delete;
    LevelDbRandomAccessFile(LevelDbRandomAccessFile const&)            = delete;
    LevelDbRandomAccessFile()                                          = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?Read@LevelDbRandomAccessFile@@UEBA?AVStatus@leveldb@@_K0PEAVSlice@3@PEAD@Z
    virtual leveldb::Status Read(uint64, uint64, leveldb::Slice*, char*) const;

    // NOLINTEND
};
