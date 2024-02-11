#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LevelDbSequentialFile {
public:
    // prevent constructor by default
    LevelDbSequentialFile& operator=(LevelDbSequentialFile const&);
    LevelDbSequentialFile(LevelDbSequentialFile const&);
    LevelDbSequentialFile();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1LevelDbSequentialFile@@UEAA@XZ
    virtual ~LevelDbSequentialFile() = default;

    // vIndex: 1, symbol: ?Read@LevelDbSequentialFile@@UEAA?AVStatus@leveldb@@_KPEAVSlice@3@PEAD@Z
    virtual leveldb::Status Read(uint64 n, leveldb::Slice* result, char* scratch);

    // vIndex: 2, symbol: ?Skip@LevelDbSequentialFile@@UEAA?AVStatus@leveldb@@_K@Z
    virtual leveldb::Status Skip(uint64 n);

    // NOLINTEND
};
