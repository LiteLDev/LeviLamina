/**
 * @file  LevelDbEnv.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LevelDbEnv.
 *
 */
class LevelDbEnv {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELDBENV
public:
    class LevelDbEnv& operator=(class LevelDbEnv const &) = delete;
    LevelDbEnv(class LevelDbEnv const &) = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LEVELDBENV
    /**
     * @symbol  ?CreateDir\@LevelDbEnv\@\@UEAA?AVStatus\@leveldb\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI class leveldb::Status CreateDir(std::string const &);
    /**
     * @symbol  ?DeleteDir\@LevelDbEnv\@\@UEAA?AVStatus\@leveldb\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI class leveldb::Status DeleteDir(std::string const &);
    /**
     * @symbol  ?DeleteFileA\@LevelDbEnv\@\@UEAA?AVStatus\@leveldb\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI class leveldb::Status DeleteFileA(std::string const &);
    /**
     * @symbol  ?FileExists\@LevelDbEnv\@\@UEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI bool FileExists(std::string const &);
    /**
     * @symbol  ?GetChildren\@LevelDbEnv\@\@UEAA?AVStatus\@leveldb\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@PEAV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@5\@\@Z
     */
    MCVAPI class leveldb::Status GetChildren(std::string const &, std::vector<std::string> *);
    /**
     * @symbol  ?GetFileSize\@LevelDbEnv\@\@UEAA?AVStatus\@leveldb\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@PEA_K\@Z
     */
    MCVAPI class leveldb::Status GetFileSize(std::string const &, unsigned __int64 *);
    /**
     * @symbol  ?GetTestDirectory\@LevelDbEnv\@\@UEAA?AVStatus\@leveldb\@\@PEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI class leveldb::Status GetTestDirectory(std::string *);
    /**
     * @symbol  ?LockFile\@LevelDbEnv\@\@UEAA?AVStatus\@leveldb\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@PEAPEAVFileLock\@3\@\@Z
     */
    MCVAPI class leveldb::Status LockFile(std::string const &, class leveldb::FileLock **);
    /**
     * @symbol  ?NewAppendableFile\@LevelDbEnv\@\@UEAA?AVStatus\@leveldb\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@PEAPEAVWritableFile\@3\@\@Z
     */
    MCVAPI class leveldb::Status NewAppendableFile(std::string const &, class leveldb::WritableFile **);
    /**
     * @symbol  ?NewLogger\@LevelDbEnv\@\@UEAA?AVStatus\@leveldb\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@PEAPEAVLogger\@3\@\@Z
     */
    MCVAPI class leveldb::Status NewLogger(std::string const &, class leveldb::Logger **);
    /**
     * @symbol  ?NewRandomAccessFile\@LevelDbEnv\@\@UEAA?AVStatus\@leveldb\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@PEAPEAVRandomAccessFile\@3\@\@Z
     */
    MCVAPI class leveldb::Status NewRandomAccessFile(std::string const &, class leveldb::RandomAccessFile **);
    /**
     * @symbol  ?NewSequentialFile\@LevelDbEnv\@\@UEAA?AVStatus\@leveldb\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@PEAPEAVSequentialFile\@3\@\@Z
     */
    MCVAPI class leveldb::Status NewSequentialFile(std::string const &, class leveldb::SequentialFile **);
    /**
     * @symbol  ?NewWritableFile\@LevelDbEnv\@\@UEAA?AVStatus\@leveldb\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@PEAPEAVWritableFile\@3\@\@Z
     */
    MCVAPI class leveldb::Status NewWritableFile(std::string const &, class leveldb::WritableFile **);
    /**
     * @symbol  ?NowMicros\@LevelDbEnv\@\@UEAA_KXZ
     */
    MCVAPI unsigned __int64 NowMicros();
    /**
     * @symbol  ?RenameFile\@LevelDbEnv\@\@UEAA?AVStatus\@leveldb\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCVAPI class leveldb::Status RenameFile(std::string const &, std::string const &);
    /**
     * @symbol  ?Schedule\@LevelDbEnv\@\@UEAAXP6AXPEAX\@Z0\@Z
     */
    MCVAPI void Schedule(void ( *)(void *), void *);
    /**
     * @symbol  ?SleepForMicroseconds\@LevelDbEnv\@\@UEAAXH\@Z
     */
    MCVAPI void SleepForMicroseconds(int);
    /**
     * @symbol  ?StartThread\@LevelDbEnv\@\@UEAAXP6AXPEAX\@Z0\@Z
     */
    MCVAPI void StartThread(void ( *)(void *), void *);
    /**
     * @symbol  ?UnlockFile\@LevelDbEnv\@\@UEAA?AVStatus\@leveldb\@\@PEAVFileLock\@3\@\@Z
     */
    MCVAPI class leveldb::Status UnlockFile(class leveldb::FileLock *);
    /**
     * @symbol  __unk_destructor_-1
     */
    MCVAPI ~LevelDbEnv();
#endif
    /**
     * @symbol  ?IsComplete\@LevelDbEnv\@\@QEBA_NXZ
     */
    MCAPI bool IsComplete() const;
    /**
     * @symbol  ??0LevelDbEnv\@\@QEAA\@XZ
     */
    MCAPI LevelDbEnv();

//private:

private:
    /**
     * @symbol  ?sSingleton\@LevelDbEnv\@\@0PEAV1\@EA
     */
    MCAPI static class LevelDbEnv * sSingleton;

};