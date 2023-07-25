#pragma once

#include "mc/_HeaderOutputPredefine.h"

class InMemorySequentialFile {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INMEMORYSEQUENTIALFILE
public:
    InMemorySequentialFile& operator=(InMemorySequentialFile const&) = delete;
    InMemorySequentialFile(InMemorySequentialFile const&)            = delete;
    InMemorySequentialFile()                                         = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?Read\@InMemorySequentialFile\@\@UEAA?AVStatus\@leveldb\@\@_KPEAVSlice\@3\@PEAD\@Z
     */
    virtual class leveldb::Status Read(unsigned __int64, class leveldb::Slice*, char*);
    /**
     * @vftbl 2
     * @symbol ?Skip\@InMemorySequentialFile\@\@UEAA?AVStatus\@leveldb\@\@_K\@Z
     */
    virtual class leveldb::Status Skip(unsigned __int64);
    /**
     * @symbol ??0InMemorySequentialFile\@\@QEAA\@V?$shared_ptr\@VInMemoryFile\@\@\@std\@\@\@Z
     */
    MCAPI InMemorySequentialFile(class std::shared_ptr<class InMemoryFile>);
};
