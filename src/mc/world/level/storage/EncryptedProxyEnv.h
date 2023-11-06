#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/EncryptedProxyReadMode.h"

class EncryptedProxyEnv {
public:
    // prevent constructor by default
    EncryptedProxyEnv& operator=(EncryptedProxyEnv const&);
    EncryptedProxyEnv(EncryptedProxyEnv const&);
    EncryptedProxyEnv();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~EncryptedProxyEnv() = default;

    // vIndex: 1, symbol:
    // ?NewSequentialFile@EncryptedProxyEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAPEAVSequentialFile@3@@Z
    virtual leveldb::Status NewSequentialFile(std::string const&, leveldb::SequentialFile**);

    // vIndex: 2, symbol:
    // ?NewRandomAccessFile@EncryptedProxyEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAPEAVRandomAccessFile@3@@Z
    virtual leveldb::Status NewRandomAccessFile(std::string const&, leveldb::RandomAccessFile**);

    // vIndex: 3, symbol:
    // ?NewWritableFile@EncryptedProxyEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAPEAVWritableFile@3@@Z
    virtual leveldb::Status NewWritableFile(std::string const&, leveldb::WritableFile**);

    // vIndex: 7, symbol:
    // ?DeleteFileA@EncryptedProxyEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual leveldb::Status DeleteFileA(std::string const&);

    // vIndex: 11, symbol:
    // ?RenameFile@EncryptedProxyEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
    virtual leveldb::Status RenameFile(std::string const&, std::string const&);

    // symbol:
    // ??0EncryptedProxyEnv@@QEAA@PEAVEnv@leveldb@@AEBVContentIdentity@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4EncryptedProxyReadMode@@@Z
    MCAPI EncryptedProxyEnv(leveldb::Env*, class ContentIdentity const&, std::string const&, ::EncryptedProxyReadMode);

    // NOLINTEND
};
