/**
 * @file  InMemoryEnv.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Core.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class InMemoryEnv.
 *
 */
class InMemoryEnv {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INMEMORYENV
public:
    class InMemoryEnv& operator=(class InMemoryEnv const &) = delete;
    InMemoryEnv(class InMemoryEnv const &) = delete;
    InMemoryEnv() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~InMemoryEnv();
    /**
     * @vftbl  1
     * @symbol  ?NewSequentialFile\@InMemoryEnv\@\@UEAA?AVStatus\@leveldb\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@PEAPEAVSequentialFile\@3\@\@Z
     */
    virtual class leveldb::Status NewSequentialFile(std::string const &, class leveldb::SequentialFile **);
    /**
     * @vftbl  2
     * @symbol  ?NewRandomAccessFile\@InMemoryEnv\@\@UEAA?AVStatus\@leveldb\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@PEAPEAVRandomAccessFile\@3\@\@Z
     */
    virtual class leveldb::Status NewRandomAccessFile(std::string const &, class leveldb::RandomAccessFile **);
    /**
     * @vftbl  3
     * @symbol  ?NewWritableFile\@InMemoryEnv\@\@UEAA?AVStatus\@leveldb\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@PEAPEAVWritableFile\@3\@\@Z
     */
    virtual class leveldb::Status NewWritableFile(std::string const &, class leveldb::WritableFile **);
    /**
     * @vftbl  4
     * @symbol  ?NewAppendableFile\@InMemoryEnv\@\@UEAA?AVStatus\@leveldb\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@PEAPEAVWritableFile\@3\@\@Z
     */
    virtual class leveldb::Status NewAppendableFile(std::string const &, class leveldb::WritableFile **);
    /**
     * @vftbl  5
     * @symbol  ?FileExists\@InMemoryEnv\@\@UEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual bool FileExists(std::string const &);
    /**
     * @vftbl  6
     * @symbol  ?GetChildren\@InMemoryEnv\@\@UEAA?AVStatus\@leveldb\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@PEAV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@5\@\@Z
     */
    virtual class leveldb::Status GetChildren(std::string const &, std::vector<std::string> *);
    /**
     * @vftbl  7
     * @symbol  ?DeleteFileA\@InMemoryEnv\@\@UEAA?AVStatus\@leveldb\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual class leveldb::Status DeleteFileA(std::string const &);
    /**
     * @vftbl  8
     * @symbol  ?CreateDir\@EnvWrapper\@leveldb\@\@UEAA?AVStatus\@2\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual class leveldb::Status CreateDir(std::string const &);
    /**
     * @vftbl  9
     * @symbol  ?DeleteDir\@EnvWrapper\@leveldb\@\@UEAA?AVStatus\@2\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual class leveldb::Status DeleteDir(std::string const &);
    /**
     * @vftbl  10
     * @symbol  ?GetFileSize\@EnvWrapper\@leveldb\@\@UEAA?AVStatus\@2\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@PEA_K\@Z
     */
    virtual class leveldb::Status GetFileSize(std::string const &, unsigned __int64 *);
    /**
     * @vftbl  11
     * @symbol  ?RenameFile\@InMemoryEnv\@\@UEAA?AVStatus\@leveldb\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    virtual class leveldb::Status RenameFile(std::string const &, std::string const &);
    /**
     * @vftbl  12
     * @symbol  ?LockFile\@EnvWrapper\@leveldb\@\@UEAA?AVStatus\@2\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@PEAPEAVFileLock\@2\@\@Z
     */
    virtual class leveldb::Status LockFile(std::string const &, class leveldb::FileLock **);
    /**
     * @vftbl  13
     * @symbol  ?UnlockFile\@EnvWrapper\@leveldb\@\@UEAA?AVStatus\@2\@PEAVFileLock\@2\@\@Z
     */
    virtual class leveldb::Status UnlockFile(class leveldb::FileLock *);
    /**
     * @vftbl  14
     * @symbol  ?Schedule\@EnvWrapper\@leveldb\@\@UEAAXP6AXPEAX\@Z0\@Z
     */
    virtual void Schedule(void ( *)(void *), void *);
    /**
     * @vftbl  15
     * @symbol  ?StartThread\@EnvWrapper\@leveldb\@\@UEAAXP6AXPEAX\@Z0\@Z
     */
    virtual void StartThread(void ( *)(void *), void *);
    /**
     * @vftbl  16
     * @symbol  ?GetTestDirectory\@EnvWrapper\@leveldb\@\@UEAA?AVStatus\@2\@PEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual class leveldb::Status GetTestDirectory(std::string *);
    /**
     * @vftbl  17
     * @symbol  ?NewLogger\@EnvWrapper\@leveldb\@\@UEAA?AVStatus\@2\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@PEAPEAVLogger\@2\@\@Z
     */
    virtual class leveldb::Status NewLogger(std::string const &, class leveldb::Logger **);
    /**
     * @vftbl  18
     * @symbol  ?NowMicros\@EnvWrapper\@leveldb\@\@UEAA_KXZ
     */
    virtual unsigned __int64 NowMicros();
    /**
     * @vftbl  19
     * @symbol  ?SleepForMicroseconds\@EnvWrapper\@leveldb\@\@UEAAXH\@Z
     */
    virtual void SleepForMicroseconds(int);
    /**
     * @vftbl  20
     * @symbol  ?flushToPermanentStorage\@InMemoryEnv\@\@UEAAXXZ
     */
    virtual void flushToPermanentStorage();
    /**
     * @symbol  ??0InMemoryEnv\@\@QEAA\@PEAVEnv\@leveldb\@\@AEBVPath\@Core\@\@\@Z
     */
    MCAPI InMemoryEnv(class leveldb::Env *, class Core::Path const &);

//private:
    /**
     * @symbol  ?_flushWithTransaction\@InMemoryEnv\@\@AEAAXXZ
     */
    MCAPI void _flushWithTransaction();

private:

};