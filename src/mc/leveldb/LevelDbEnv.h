#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LevelDbEnv {
public:
    // prevent constructor by default
    LevelDbEnv& operator=(LevelDbEnv const&);
    LevelDbEnv(LevelDbEnv const&);

public:
    // NOLINTBEGIN
    // symbol:
    // ?CreateDir@LevelDbEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI leveldb::Status CreateDir(std::string const& path);

    // symbol:
    // ?DeleteDir@LevelDbEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI leveldb::Status DeleteDir(std::string const& name);

    // symbol:
    // ?DeleteFileA@LevelDbEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI leveldb::Status DeleteFileA(std::string const&);

    // symbol: ?FileExists@LevelDbEnv@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI bool FileExists(std::string const& fname);

    // symbol:
    // ?GetChildren@LevelDbEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@5@@Z
    MCVAPI leveldb::Status GetChildren(std::string const& dir, std::vector<std::string>* pChildrenOut);

    // symbol:
    // ?GetFileSize@LevelDbEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEA_K@Z
    MCVAPI leveldb::Status GetFileSize(std::string const& fname, uint64* size);

    // symbol:
    // ?GetTestDirectory@LevelDbEnv@@UEAA?AVStatus@leveldb@@PEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI leveldb::Status GetTestDirectory(std::string* result);

    // symbol:
    // ?LockFile@LevelDbEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAPEAVFileLock@3@@Z
    MCVAPI leveldb::Status LockFile(std::string const& fname, leveldb::FileLock** lock);

    // symbol:
    // ?NewAppendableFile@LevelDbEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAPEAVWritableFile@3@@Z
    MCVAPI leveldb::Status NewAppendableFile(std::string const& fname, leveldb::WritableFile** result);

    // symbol:
    // ?NewLogger@LevelDbEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAPEAVLogger@3@@Z
    MCVAPI leveldb::Status NewLogger(std::string const& fname, leveldb::Logger** result);

    // symbol:
    // ?NewRandomAccessFile@LevelDbEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAPEAVRandomAccessFile@3@@Z
    MCVAPI leveldb::Status NewRandomAccessFile(std::string const& fname, leveldb::RandomAccessFile** result);

    // symbol:
    // ?NewSequentialFile@LevelDbEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAPEAVSequentialFile@3@@Z
    MCVAPI leveldb::Status NewSequentialFile(std::string const& fname, leveldb::SequentialFile** result);

    // symbol:
    // ?NewWritableFile@LevelDbEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAPEAVWritableFile@3@@Z
    MCVAPI leveldb::Status NewWritableFile(std::string const& fname, leveldb::WritableFile** result);

    // symbol: ?NowMicros@LevelDbEnv@@UEAA_KXZ
    MCVAPI uint64 NowMicros();

    // symbol:
    // ?RenameFile@LevelDbEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
    MCVAPI leveldb::Status RenameFile(std::string const& src, std::string const& target);

    // symbol: ?Schedule@LevelDbEnv@@UEAAXP6AXPEAX@Z0@Z
    MCVAPI void Schedule(void (*function)(void*), void* arg);

    // symbol: ?SleepForMicroseconds@LevelDbEnv@@UEAAXH@Z
    MCVAPI void SleepForMicroseconds(int microseconds);

    // symbol: ?StartThread@LevelDbEnv@@UEAAXP6AXPEAX@Z0@Z
    MCVAPI void StartThread(void (*function)(void*), void* arg);

    // symbol: ?UnlockFile@LevelDbEnv@@UEAA?AVStatus@leveldb@@PEAVFileLock@3@@Z
    MCVAPI leveldb::Status UnlockFile(leveldb::FileLock* lock);

    // symbol: ??1LevelDbEnv@@UEAA@XZ
    MCVAPI ~LevelDbEnv();

    // symbol: ?IsComplete@LevelDbEnv@@QEBA_NXZ
    MCAPI bool IsComplete() const;

    // symbol: ??0LevelDbEnv@@QEAA@XZ
    MCAPI LevelDbEnv();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?sSingleton@LevelDbEnv@@0PEAV1@EA
    MCAPI static class LevelDbEnv* sSingleton;

    // NOLINTEND
};
