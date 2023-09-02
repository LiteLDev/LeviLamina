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
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol:
    // ?NewSequentialFile@InMemoryEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAPEAVSequentialFile@3@@Z
    virtual leveldb::Status NewSequentialFile(std::string const&, leveldb::SequentialFile**);

    // vIndex: 2, symbol:
    // ?NewRandomAccessFile@InMemoryEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAPEAVRandomAccessFile@3@@Z
    virtual leveldb::Status NewRandomAccessFile(std::string const&, leveldb::RandomAccessFile**);

    // vIndex: 3, symbol:
    // ?NewWritableFile@InMemoryEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAPEAVWritableFile@3@@Z
    virtual leveldb::Status NewWritableFile(std::string const&, leveldb::WritableFile**);

    // vIndex: 4, symbol:
    // ?NewAppendableFile@InMemoryEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAPEAVWritableFile@3@@Z
    virtual leveldb::Status NewAppendableFile(std::string const&, leveldb::WritableFile**);

    // vIndex: 5, symbol:
    // ?FileExists@InMemoryEnv@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual bool FileExists(std::string const&);

    // vIndex: 6, symbol:
    // ?GetChildren@InMemoryEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@5@@Z
    virtual leveldb::Status GetChildren(std::string const&, std::vector<std::string>*);

    // vIndex: 7, symbol:
    // ?DeleteFileA@InMemoryEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual leveldb::Status DeleteFileA(std::string const&);

    // vIndex: 11, symbol:
    // ?RenameFile@InMemoryEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
    virtual leveldb::Status RenameFile(std::string const&, std::string const&);

    // vIndex: 20, symbol: ?flushToPermanentStorage@InMemoryEnv@@UEAAXXZ
    virtual void flushToPermanentStorage();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_flushWithTransaction@InMemoryEnv@@AEAAXXZ
    MCAPI void _flushWithTransaction();

    // NOLINTEND
};
