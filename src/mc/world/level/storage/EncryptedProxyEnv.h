#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EncryptedProxyEnv {
public:
    // prevent constructor by default
    EncryptedProxyEnv& operator=(EncryptedProxyEnv const&);
    EncryptedProxyEnv(EncryptedProxyEnv const&);
    EncryptedProxyEnv();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1EncryptedProxyEnv@@UEAA@XZ
    virtual ~EncryptedProxyEnv() = default;

    // vIndex: 1, symbol:
    // ?NewSequentialFile@EncryptedProxyEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAPEAVSequentialFile@3@@Z
    virtual leveldb::Status NewSequentialFile(std::string const& f, leveldb::SequentialFile** r);

    // vIndex: 2, symbol:
    // ?NewRandomAccessFile@EncryptedProxyEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAPEAVRandomAccessFile@3@@Z
    virtual leveldb::Status NewRandomAccessFile(std::string const& f, leveldb::RandomAccessFile** r);

    // vIndex: 3, symbol:
    // ?NewWritableFile@EncryptedProxyEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAPEAVWritableFile@3@@Z
    virtual leveldb::Status NewWritableFile(std::string const& f, leveldb::WritableFile** r);

    // vIndex: 7, symbol:
    // ?DeleteFileA@EncryptedProxyEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual leveldb::Status DeleteFileA(std::string const&);

    // vIndex: 11, symbol:
    // ?RenameFile@EncryptedProxyEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
    virtual leveldb::Status RenameFile(std::string const& from, std::string const& to);

    // NOLINTEND
};
