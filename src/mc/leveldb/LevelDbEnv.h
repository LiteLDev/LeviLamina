#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LevelDbEnv {

public:
    // prevent constructor by default
    LevelDbEnv& operator=(LevelDbEnv const&) = delete;
    LevelDbEnv(LevelDbEnv const&)            = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LEVELDBENV
    /**
     * @symbol
     * ?CreateDir\@LevelDbEnv\@\@UEAA?AVStatus\@leveldb\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI class leveldb::Status CreateDir(std::string const&); // NOLINT
    /**
     * @symbol
     * ?DeleteDir\@LevelDbEnv\@\@UEAA?AVStatus\@leveldb\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI class leveldb::Status DeleteDir(std::string const&); // NOLINT
    /**
     * @symbol
     * ?DeleteFileA\@LevelDbEnv\@\@UEAA?AVStatus\@leveldb\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI class leveldb::Status DeleteFileA(std::string const&); // NOLINT
    /**
     * @symbol
     * ?FileExists\@LevelDbEnv\@\@UEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI bool FileExists(std::string const&); // NOLINT
    /**
     * @symbol
     * ?GetChildren\@LevelDbEnv\@\@UEAA?AVStatus\@leveldb\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@PEAV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@5\@\@Z
     */
    MCVAPI class leveldb::Status GetChildren(std::string const&, std::vector<std::string>*); // NOLINT
    /**
     * @symbol
     * ?GetFileSize\@LevelDbEnv\@\@UEAA?AVStatus\@leveldb\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@PEA_K\@Z
     */
    MCVAPI class leveldb::Status GetFileSize(std::string const&, unsigned __int64*); // NOLINT
    /**
     * @symbol
     * ?GetTestDirectory\@LevelDbEnv\@\@UEAA?AVStatus\@leveldb\@\@PEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI class leveldb::Status GetTestDirectory(std::string*); // NOLINT
    /**
     * @symbol
     * ?LockFile\@LevelDbEnv\@\@UEAA?AVStatus\@leveldb\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@PEAPEAVFileLock\@3\@\@Z
     */
    MCVAPI class leveldb::Status LockFile(std::string const&, class leveldb::FileLock**); // NOLINT
    /**
     * @symbol
     * ?NewAppendableFile\@LevelDbEnv\@\@UEAA?AVStatus\@leveldb\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@PEAPEAVWritableFile\@3\@\@Z
     */
    MCVAPI class leveldb::Status NewAppendableFile(std::string const&, class leveldb::WritableFile**); // NOLINT
    /**
     * @symbol
     * ?NewLogger\@LevelDbEnv\@\@UEAA?AVStatus\@leveldb\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@PEAPEAVLogger\@3\@\@Z
     */
    MCVAPI class leveldb::Status NewLogger(std::string const&, class leveldb::Logger**); // NOLINT
    /**
     * @symbol
     * ?NewRandomAccessFile\@LevelDbEnv\@\@UEAA?AVStatus\@leveldb\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@PEAPEAVRandomAccessFile\@3\@\@Z
     */
    MCVAPI class leveldb::Status NewRandomAccessFile(std::string const&, class leveldb::RandomAccessFile**); // NOLINT
    /**
     * @symbol
     * ?NewSequentialFile\@LevelDbEnv\@\@UEAA?AVStatus\@leveldb\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@PEAPEAVSequentialFile\@3\@\@Z
     */
    MCVAPI class leveldb::Status NewSequentialFile(std::string const&, class leveldb::SequentialFile**); // NOLINT
    /**
     * @symbol
     * ?NewWritableFile\@LevelDbEnv\@\@UEAA?AVStatus\@leveldb\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@PEAPEAVWritableFile\@3\@\@Z
     */
    MCVAPI class leveldb::Status NewWritableFile(std::string const&, class leveldb::WritableFile**); // NOLINT
    /**
     * @symbol ?NowMicros\@LevelDbEnv\@\@UEAA_KXZ
     */
    MCVAPI unsigned __int64 NowMicros(); // NOLINT
    /**
     * @symbol
     * ?RenameFile\@LevelDbEnv\@\@UEAA?AVStatus\@leveldb\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCVAPI class leveldb::Status RenameFile(std::string const&, std::string const&); // NOLINT
    /**
     * @symbol ?Schedule\@LevelDbEnv\@\@UEAAXP6AXPEAX\@Z0\@Z
     */
    MCVAPI void Schedule(void (*)(void*), void*); // NOLINT
    /**
     * @symbol ?SleepForMicroseconds\@LevelDbEnv\@\@UEAAXH\@Z
     */
    MCVAPI void SleepForMicroseconds(int); // NOLINT
    /**
     * @symbol ?StartThread\@LevelDbEnv\@\@UEAAXP6AXPEAX\@Z0\@Z
     */
    MCVAPI void StartThread(void (*)(void*), void*); // NOLINT
    /**
     * @symbol ?UnlockFile\@LevelDbEnv\@\@UEAA?AVStatus\@leveldb\@\@PEAVFileLock\@3\@\@Z
     */
    MCVAPI class leveldb::Status UnlockFile(class leveldb::FileLock*); // NOLINT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~LevelDbEnv(); // NOLINT
#endif
    /**
     * @symbol ?IsComplete\@LevelDbEnv\@\@QEBA_NXZ
     */
    MCAPI bool IsComplete() const; // NOLINT
    /**
     * @symbol ??0LevelDbEnv\@\@QEAA\@XZ
     */
    MCAPI LevelDbEnv(); // NOLINT

    // private:

private:
    /**
     * @symbol ?sSingleton\@LevelDbEnv\@\@0PEAV1\@EA
     */
    MCAPI static class LevelDbEnv* sSingleton; // NOLINT
};
