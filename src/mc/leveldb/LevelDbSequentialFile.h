#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LevelDbSequentialFile {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELDBSEQUENTIALFILE
public:
    LevelDbSequentialFile& operator=(LevelDbSequentialFile const&) = delete;
    LevelDbSequentialFile(LevelDbSequentialFile const&)            = delete;
    LevelDbSequentialFile()                                        = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?Read\@LevelDbSequentialFile\@\@UEAA?AVStatus\@leveldb\@\@_KPEAVSlice\@3\@PEAD\@Z
     */
    virtual class leveldb::Status Read(unsigned __int64, class leveldb::Slice*, char*);
    /**
     * @vftbl 2
     * @symbol ?Skip\@LevelDbSequentialFile\@\@UEAA?AVStatus\@leveldb\@\@_K\@Z
     */
    virtual class leveldb::Status Skip(unsigned __int64);
};
