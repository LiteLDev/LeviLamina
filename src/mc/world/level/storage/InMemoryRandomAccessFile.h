#pragma once

#include "mc/_HeaderOutputPredefine.h"

class InMemoryRandomAccessFile {

public:
    // prevent constructor by default
    InMemoryRandomAccessFile& operator=(InMemoryRandomAccessFile const&) = delete;
    InMemoryRandomAccessFile(InMemoryRandomAccessFile const&)            = delete;
    InMemoryRandomAccessFile()                                           = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?Read\@InMemoryRandomAccessFile\@\@UEBA?AVStatus\@leveldb\@\@_K0PEAVSlice\@3\@PEAD\@Z
     */
    virtual class leveldb::Status Read(uint64_t, uint64_t, class leveldb::Slice*, char*) const;
    /**
     * @symbol ??0InMemoryRandomAccessFile\@\@QEAA\@V?$shared_ptr\@VInMemoryFile\@\@\@std\@\@\@Z
     */
    MCAPI InMemoryRandomAccessFile(std::shared_ptr<class InMemoryFile>);
    // NOLINTEND
};
