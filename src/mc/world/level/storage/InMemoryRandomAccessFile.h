#pragma once

#include "mc/_HeaderOutputPredefine.h"

class InMemoryRandomAccessFile {

public:
    // prevent constructor by default
    InMemoryRandomAccessFile& operator=(InMemoryRandomAccessFile const&) = delete;
    InMemoryRandomAccessFile(InMemoryRandomAccessFile const&)            = delete;
    InMemoryRandomAccessFile()                                           = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?Read\@InMemoryRandomAccessFile\@\@UEBA?AVStatus\@leveldb\@\@_K0PEAVSlice\@3\@PEAD\@Z
     */
    virtual class leveldb::Status
    Read(unsigned __int64, unsigned __int64, class leveldb::Slice*, char*) const; // NOLINT
    /**
     * @symbol ??0InMemoryRandomAccessFile\@\@QEAA\@V?$shared_ptr\@VInMemoryFile\@\@\@std\@\@\@Z
     */
    MCAPI InMemoryRandomAccessFile(class std::shared_ptr<class InMemoryFile>); // NOLINT
};
