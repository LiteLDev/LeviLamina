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
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?Read\@LevelDbSequentialFile\@\@UEAA?AVStatus\@leveldb\@\@_KPEAVSlice\@3\@PEAD\@Z
     */
    virtual class leveldb::Status Read(uint64_t, class leveldb::Slice*, char*);
    /**
     * @vftbl 2
     * @symbol ?Skip\@LevelDbSequentialFile\@\@UEAA?AVStatus\@leveldb\@\@_K\@Z
     */
    virtual class leveldb::Status Skip(uint64_t);
    // NOLINTEND
};
