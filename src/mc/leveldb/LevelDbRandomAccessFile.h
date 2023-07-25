#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LevelDbRandomAccessFile {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELDBRANDOMACCESSFILE
public:
    LevelDbRandomAccessFile& operator=(LevelDbRandomAccessFile const&) = delete;
    LevelDbRandomAccessFile(LevelDbRandomAccessFile const&)            = delete;
    LevelDbRandomAccessFile()                                          = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?Read\@LevelDbRandomAccessFile\@\@UEBA?AVStatus\@leveldb\@\@_K0PEAVSlice\@3\@PEAD\@Z
     */
    virtual class leveldb::Status Read(unsigned __int64, unsigned __int64, class leveldb::Slice*, char*) const;
};
