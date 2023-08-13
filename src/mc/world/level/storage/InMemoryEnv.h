#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/FlushableEnv.h"

class InMemoryEnv : public ::FlushableEnv {

public:
    // prevent constructor by default
    InMemoryEnv& operator=(InMemoryEnv const&) = delete;
    InMemoryEnv(InMemoryEnv const&)            = delete;
    InMemoryEnv()                              = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?NewSequentialFile\@InMemoryEnv\@\@UEAA?AVStatus\@leveldb\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@PEAPEAVSequentialFile\@3\@\@Z
     */
    virtual class leveldb::Status NewSequentialFile(std::string const&, class leveldb::SequentialFile**);
    /**
     * @vftbl 2
     * @symbol
     * ?NewRandomAccessFile\@InMemoryEnv\@\@UEAA?AVStatus\@leveldb\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@PEAPEAVRandomAccessFile\@3\@\@Z
     */
    virtual class leveldb::Status NewRandomAccessFile(std::string const&, class leveldb::RandomAccessFile**);
    /**
     * @vftbl 3
     * @symbol
     * ?NewWritableFile\@InMemoryEnv\@\@UEAA?AVStatus\@leveldb\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@PEAPEAVWritableFile\@3\@\@Z
     */
    virtual class leveldb::Status NewWritableFile(std::string const&, class leveldb::WritableFile**);
    /**
     * @vftbl 4
     * @symbol
     * ?NewAppendableFile\@InMemoryEnv\@\@UEAA?AVStatus\@leveldb\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@PEAPEAVWritableFile\@3\@\@Z
     */
    virtual class leveldb::Status NewAppendableFile(std::string const&, class leveldb::WritableFile**);
    /**
     * @vftbl 5
     * @symbol
     * ?FileExists\@InMemoryEnv\@\@UEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual bool FileExists(std::string const&);
    /**
     * @vftbl 6
     * @symbol
     * ?GetChildren\@InMemoryEnv\@\@UEAA?AVStatus\@leveldb\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@PEAV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@5\@\@Z
     */
    virtual class leveldb::Status GetChildren(std::string const&, std::vector<std::string>*);
    /**
     * @vftbl 7
     * @symbol
     * ?DeleteFileA\@InMemoryEnv\@\@UEAA?AVStatus\@leveldb\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual class leveldb::Status DeleteFileA(std::string const&);
    /**
     * @vftbl 11
     * @symbol
     * ?RenameFile\@InMemoryEnv\@\@UEAA?AVStatus\@leveldb\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    virtual class leveldb::Status RenameFile(std::string const&, std::string const&);
    /**
     * @vftbl 20
     * @symbol ?flushToPermanentStorage\@InMemoryEnv\@\@UEAAXXZ
     */
    virtual void flushToPermanentStorage();
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_flushWithTransaction\@InMemoryEnv\@\@AEAAXXZ
     */
    MCAPI void _flushWithTransaction();
    // NOLINTEND
};
