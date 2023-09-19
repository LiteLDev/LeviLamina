#pragma once

#include "mc/_HeaderOutputPredefine.h"

class FlushableEnv {
public:
    // prevent constructor by default
    FlushableEnv& operator=(FlushableEnv const&);
    FlushableEnv(FlushableEnv const&);
    FlushableEnv();

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
    // ?NewAppendableFile@Env@leveldb@@UEAA?AVStatus@2@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAPEAVWritableFile@2@@Z
    virtual leveldb::Status NewAppendableFile(std::string const&, leveldb::WritableFile**);

    // vIndex: 5, symbol:
    // ?FileExists@EnvWrapper@leveldb@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual bool FileExists(std::string const&);

    // vIndex: 6, symbol:
    // ?GetChildren@InMemoryEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@5@@Z
    virtual leveldb::Status GetChildren(std::string const&, std::vector<std::string>*);

    // vIndex: 7, symbol:
    // ?DeleteFileA@InMemoryEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual leveldb::Status DeleteFileA(std::string const&);

    // vIndex: 8, symbol:
    // ?CreateDir@EnvWrapper@leveldb@@UEAA?AVStatus@2@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual leveldb::Status CreateDir(std::string const&);

    // vIndex: 9, symbol:
    // ?DeleteDir@EnvWrapper@leveldb@@UEAA?AVStatus@2@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual leveldb::Status DeleteDir(std::string const&);

    // vIndex: 10, symbol:
    // ?GetFileSize@EnvWrapper@leveldb@@UEAA?AVStatus@2@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEA_K@Z
    virtual leveldb::Status GetFileSize(std::string const&, uint64*);

    // vIndex: 11, symbol:
    // ?RenameFile@InMemoryEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
    virtual leveldb::Status RenameFile(std::string const&, std::string const&);

    // vIndex: 12, symbol:
    // ?LockFile@EnvWrapper@leveldb@@UEAA?AVStatus@2@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAPEAVFileLock@2@@Z
    virtual leveldb::Status LockFile(std::string const&, leveldb::FileLock**);

    // vIndex: 13, symbol: ?UnlockFile@EnvWrapper@leveldb@@UEAA?AVStatus@2@PEAVFileLock@2@@Z
    virtual leveldb::Status UnlockFile(leveldb::FileLock*);

    // vIndex: 14, symbol: ?Schedule@EnvWrapper@leveldb@@UEAAXP6AXPEAX@Z0@Z
    virtual void Schedule(void (*)(void*), void*);

    // vIndex: 15, symbol: ?StartThread@EnvWrapper@leveldb@@UEAAXP6AXPEAX@Z0@Z
    virtual void StartThread(void (*)(void*), void*);

    // vIndex: 16, symbol:
    // ?GetTestDirectory@EnvWrapper@leveldb@@UEAA?AVStatus@2@PEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual leveldb::Status GetTestDirectory(std::string*);

    // vIndex: 17, symbol:
    // ?NewLogger@EnvWrapper@leveldb@@UEAA?AVStatus@2@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAPEAVLogger@2@@Z
    virtual leveldb::Status NewLogger(std::string const&, leveldb::Logger**);

    // vIndex: 18, symbol: ?NowMicros@EnvWrapper@leveldb@@UEAA_KXZ
    virtual uint64 NowMicros();

    // vIndex: 19, symbol: ?SleepForMicroseconds@EnvWrapper@leveldb@@UEAAXH@Z
    virtual void SleepForMicroseconds(int);

    // vIndex: 20, symbol: ?flushToPermanentStorage@InMemoryEnv@@UEAAXXZ
    virtual void flushToPermanentStorage() = 0;

    // symbol: ??1FlushableEnv@@UEAA@XZ
    MCVAPI ~FlushableEnv();

    // NOLINTEND
};
