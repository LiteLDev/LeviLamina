#pragma once

#include "mc/_HeaderOutputPredefine.h"

class InMemorySequentialFile {

public:
    // prevent constructor by default
    InMemorySequentialFile& operator=(InMemorySequentialFile const&) = delete;
    InMemorySequentialFile(InMemorySequentialFile const&)            = delete;
    InMemorySequentialFile()                                         = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?Read\@InMemorySequentialFile\@\@UEAA?AVStatus\@leveldb\@\@_KPEAVSlice\@3\@PEAD\@Z
     */
    virtual class leveldb::Status Read(uint64_t, class leveldb::Slice*, char*);
    /**
     * @vftbl 2
     * @symbol ?Skip\@InMemorySequentialFile\@\@UEAA?AVStatus\@leveldb\@\@_K\@Z
     */
    virtual class leveldb::Status Skip(uint64_t);
    /**
     * @symbol ??0InMemorySequentialFile\@\@QEAA\@V?$shared_ptr\@VInMemoryFile\@\@\@std\@\@\@Z
     */
    MCAPI InMemorySequentialFile(std::shared_ptr<class InMemoryFile>);
    // NOLINTEND
};
