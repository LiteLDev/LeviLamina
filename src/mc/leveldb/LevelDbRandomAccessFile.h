#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LevelDbRandomAccessFile {
public:
    // prevent constructor by default
    LevelDbRandomAccessFile& operator=(LevelDbRandomAccessFile const&);
    LevelDbRandomAccessFile(LevelDbRandomAccessFile const&);
    LevelDbRandomAccessFile();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1LevelDbRandomAccessFile@@UEAA@XZ
    virtual ~LevelDbRandomAccessFile() = default;

    // vIndex: 1, symbol: ?Read@LevelDbRandomAccessFile@@UEBA?AVStatus@leveldb@@_K0PEAVSlice@3@PEAD@Z
    virtual leveldb::Status Read(uint64 offset, uint64 n, leveldb::Slice* result, char* scratch) const;

    // NOLINTEND
};
