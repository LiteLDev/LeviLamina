#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LevelDbRandomAccessFile {

public:
    // prevent constructor by default
    LevelDbRandomAccessFile& operator=(LevelDbRandomAccessFile const&) = delete;
    LevelDbRandomAccessFile(LevelDbRandomAccessFile const&)            = delete;
    LevelDbRandomAccessFile()                                          = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?Read\@LevelDbRandomAccessFile\@\@UEBA?AVStatus\@leveldb\@\@_K0PEAVSlice\@3\@PEAD\@Z
     */
    virtual class leveldb::Status
    Read(unsigned __int64, unsigned __int64, class leveldb::Slice*, char*) const; // NOLINT
};
