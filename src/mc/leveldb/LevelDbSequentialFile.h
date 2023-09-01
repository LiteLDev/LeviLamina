#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LevelDbSequentialFile {
public:
    // prevent constructor by default
    LevelDbSequentialFile& operator=(LevelDbSequentialFile const&) = delete;
    LevelDbSequentialFile(LevelDbSequentialFile const&)            = delete;
    LevelDbSequentialFile()                                        = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?Read@LevelDbSequentialFile@@UEAA?AVStatus@leveldb@@_KPEAVSlice@3@PEAD@Z
    virtual leveldb::Status Read(uint64, leveldb::Slice*, char*);

    // vIndex: 2, symbol: ?Skip@LevelDbSequentialFile@@UEAA?AVStatus@leveldb@@_K@Z
    virtual leveldb::Status Skip(uint64);

    // NOLINTEND
};
