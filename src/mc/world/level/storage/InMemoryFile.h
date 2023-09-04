#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/PathBuffer.h"
#include "mc/enums/InMemoryAccessMode.h"

class InMemoryFile {
public:
    // prevent constructor by default
    InMemoryFile& operator=(InMemoryFile const&) = delete;
    InMemoryFile(InMemoryFile const&)            = delete;
    InMemoryFile()                               = delete;

public:
    // NOLINTBEGIN
    // symbol: ?append@InMemoryFile@@QEAA?AVStatus@leveldb@@AEBVSlice@3@@Z
    MCAPI leveldb::Status append(leveldb::Slice const&);

    // symbol: ?close@InMemoryFile@@QEAA?AVStatus@leveldb@@W4InMemoryAccessMode@@@Z
    MCAPI leveldb::Status close(::InMemoryAccessMode);

    // symbol:
    // ?getFilename@InMemoryFile@@QEBA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
    MCAPI class Core::PathBuffer<std::string> getFilename() const;

    // symbol: ?open@InMemoryFile@@QEAA?AVStatus@leveldb@@W4InMemoryAccessMode@@@Z
    MCAPI leveldb::Status open(::InMemoryAccessMode);

    // symbol: ?read@InMemoryFile@@QEBA?AVStatus@leveldb@@_K0PEAVSlice@3@PEADAEA_K@Z
    MCAPI leveldb::Status read(uint64, uint64, leveldb::Slice*, char*, uint64&) const;

    // NOLINTEND
};
