#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/InMemoryAccessMode.h"

class InMemoryFile {
public:
    // prevent constructor by default
    InMemoryFile& operator=(InMemoryFile const&);
    InMemoryFile(InMemoryFile const&);
    InMemoryFile();

public:
    // NOLINTBEGIN
    // symbol: ?close@InMemoryFile@@QEAA?AVStatus@leveldb@@W4InMemoryAccessMode@@@Z
    MCAPI leveldb::Status close(::InMemoryAccessMode mode);

    // symbol: ?open@InMemoryFile@@QEAA?AVStatus@leveldb@@W4InMemoryAccessMode@@@Z
    MCAPI leveldb::Status open(::InMemoryAccessMode mode);

    // symbol: ?read@InMemoryFile@@QEBA?AVStatus@leveldb@@_K0PEAVSlice@3@PEADAEA_K@Z
    MCAPI leveldb::Status read(uint64 offset, uint64 n, leveldb::Slice* result, char* scratch, uint64& bytesRead) const;

    // NOLINTEND
};
