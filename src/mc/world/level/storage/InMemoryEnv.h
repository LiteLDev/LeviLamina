#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/FlushableEnv.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

class InMemoryEnv : public ::FlushableEnv {
public:
    // prevent constructor by default
    InMemoryEnv& operator=(InMemoryEnv const&);
    InMemoryEnv(InMemoryEnv const&);
    InMemoryEnv();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1InMemoryEnv@@UEAA@XZ
    virtual ~InMemoryEnv() = default;

    // vIndex: 1, symbol:
    // ?NewSequentialFile@InMemoryEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAPEAVSequentialFile@3@@Z
    virtual leveldb::Status NewSequentialFile(std::string const& f, leveldb::SequentialFile** r);

    // vIndex: 2, symbol:
    // ?NewRandomAccessFile@InMemoryEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAPEAVRandomAccessFile@3@@Z
    virtual leveldb::Status NewRandomAccessFile(std::string const& f, leveldb::RandomAccessFile** r);

    // vIndex: 3, symbol:
    // ?NewWritableFile@InMemoryEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAPEAVWritableFile@3@@Z
    virtual leveldb::Status NewWritableFile(std::string const& f, leveldb::WritableFile** r);

    // vIndex: 4, symbol:
    // ?NewAppendableFile@InMemoryEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAPEAVWritableFile@3@@Z
    virtual leveldb::Status NewAppendableFile(std::string const& f, leveldb::WritableFile** r);

    // vIndex: 5, symbol:
    // ?FileExists@InMemoryEnv@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual bool FileExists(std::string const& f);

    // vIndex: 6, symbol:
    // ?GetChildren@InMemoryEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@5@@Z
    virtual leveldb::Status GetChildren(std::string const& dir, std::vector<std::string>* r);

    // vIndex: 7, symbol:
    // ?DeleteFileA@InMemoryEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual leveldb::Status DeleteFileA(std::string const&);

    // vIndex: 11, symbol:
    // ?RenameFile@InMemoryEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
    virtual leveldb::Status RenameFile(std::string const& from, std::string const& to);

    // vIndex: 20, symbol: ?flushToPermanentStorage@InMemoryEnv@@UEAAXXZ
    virtual void flushToPermanentStorage();

    // symbol: ??0InMemoryEnv@@QEAA@PEAVEnv@leveldb@@AEBVPath@Core@@@Z
    MCAPI InMemoryEnv(leveldb::Env* env, class Core::Path const& rootDbPath);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_flushWithTransaction@InMemoryEnv@@AEAAXXZ
    MCAPI void _flushWithTransaction();

    // NOLINTEND
};
