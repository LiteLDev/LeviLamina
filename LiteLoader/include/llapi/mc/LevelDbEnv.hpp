/**
 * @file  MC/LevelDbEnv.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   1602966874
     * @symbol ?CreateDir@LevelDbEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCVAPI class leveldb::Status CreateDir(std::string const &);
    /**
     * @hash   690586185
     * @symbol ?DeleteDir@LevelDbEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCVAPI class leveldb::Status DeleteDir(std::string const &);
    /**
     * @hash   -1844585711
     * @symbol ?DeleteFileA@LevelDbEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCVAPI class leveldb::Status DeleteFileA(std::string const &);
    /**
     * @hash   -605064138
     * @symbol ?FileExists@LevelDbEnv@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCVAPI bool FileExists(std::string const &);
    /**
     * @hash   852616680
     * @symbol ?GetChildren@LevelDbEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@5@@Z
     */
    MCVAPI class leveldb::Status GetChildren(std::string const &, std::vector<std::string> *);
    /**
     * @hash   -132852202
     * @symbol ?GetFileSize@LevelDbEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEA_K@Z
     */
    MCVAPI class leveldb::Status GetFileSize(std::string const &, unsigned __int64 *);
    /**
     * @hash   -1018282171
     * @symbol ?GetTestDirectory@LevelDbEnv@@UEAA?AVStatus@leveldb@@PEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCVAPI class leveldb::Status GetTestDirectory(std::string *);
    /**
     * @hash   538906511
     * @symbol ?LockFile@LevelDbEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAPEAVFileLock@3@@Z
     */
    MCVAPI class leveldb::Status LockFile(std::string const &, class leveldb::FileLock **);
    /**
     * @hash   -405715683
     * @symbol ?NewAppendableFile@LevelDbEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAPEAVWritableFile@3@@Z
     */
    MCVAPI class leveldb::Status NewAppendableFile(std::string const &, class leveldb::WritableFile **);
    /**
     * @hash   475481937
     * @symbol ?NewLogger@LevelDbEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAPEAVLogger@3@@Z
     */
    MCVAPI class leveldb::Status NewLogger(std::string const &, class leveldb::Logger **);
    /**
     * @hash   2013576583
     * @symbol ?NewRandomAccessFile@LevelDbEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAPEAVRandomAccessFile@3@@Z
     */
    MCVAPI class leveldb::Status NewRandomAccessFile(std::string const &, class leveldb::RandomAccessFile **);
    /**
     * @hash   -1919184329
     * @symbol ?NewSequentialFile@LevelDbEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAPEAVSequentialFile@3@@Z
     */
    MCVAPI class leveldb::Status NewSequentialFile(std::string const &, class leveldb::SequentialFile **);
    /**
     * @hash   -1615100119
     * @symbol ?NewWritableFile@LevelDbEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAPEAVWritableFile@3@@Z
     */
    MCVAPI class leveldb::Status NewWritableFile(std::string const &, class leveldb::WritableFile **);
    /**
     * @hash   -1307970341
     * @symbol ?NowMicros@LevelDbEnv@@UEAA_KXZ
     */
    MCVAPI unsigned __int64 NowMicros();
    /**
     * @hash   -859437445
     * @symbol ?RenameFile@LevelDbEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
     */
    MCVAPI class leveldb::Status RenameFile(std::string const &, std::string const &);
    /**
     * @hash   616393843
     * @symbol ?Schedule@LevelDbEnv@@UEAAXP6AXPEAX@Z0@Z
     */
    MCVAPI void Schedule(void ( *)(void *), void *);
    /**
     * @hash   -597872954
     * @symbol ?SleepForMicroseconds@LevelDbEnv@@UEAAXH@Z
     */
    MCVAPI void SleepForMicroseconds(int);
    /**
     * @hash   -1184461576
     * @symbol ?StartThread@LevelDbEnv@@UEAAXP6AXPEAX@Z0@Z
     */
    MCVAPI void StartThread(void ( *)(void *), void *);
    /**
     * @hash   198921598
     * @symbol ?UnlockFile@LevelDbEnv@@UEAA?AVStatus@leveldb@@PEAVFileLock@3@@Z
     */
    MCVAPI class leveldb::Status UnlockFile(class leveldb::FileLock *);
    /**
     * @hash   271836324
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~LevelDbEnv();
#endif
    /**
     * @hash   -2142624834
     * @symbol ?IsComplete@LevelDbEnv@@QEBA_NXZ
     */
    MCAPI bool IsComplete() const;
    /**
     * @hash   1185140519
     * @symbol ??0LevelDbEnv@@QEAA@XZ
     */
    MCAPI LevelDbEnv();

//private:

private:
    /**
     * @hash   2012544374
     * @symbol ?sSingleton@LevelDbEnv@@0PEAV1@EA
     */
    MCAPI static class LevelDbEnv * sSingleton;

};