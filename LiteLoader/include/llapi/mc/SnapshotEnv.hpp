/**
 * @file  MC/SnapshotEnv.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Core.hpp"
#include "TransactionalWorldBlockTarget.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SnapshotEnv.
 *
 */
class SnapshotEnv : public TransactionalWorldBlockTarget {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SNAPSHOTENV
public:
    class SnapshotEnv& operator=(class SnapshotEnv const &) = delete;
    SnapshotEnv(class SnapshotEnv const &) = delete;
    SnapshotEnv() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~SnapshotEnv();
    /**
     * @hash   -871675719
     * @vftbl  1
     * @symbol ?NewSequentialFile@SnapshotEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAPEAVSequentialFile@3@@Z
     */
    virtual class leveldb::Status NewSequentialFile(std::string const &, class leveldb::SequentialFile **);
    /**
     * @hash   949115897
     * @vftbl  2
     * @symbol ?NewRandomAccessFile@SnapshotEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAPEAVRandomAccessFile@3@@Z
     */
    virtual class leveldb::Status NewRandomAccessFile(std::string const &, class leveldb::RandomAccessFile **);
    /**
     * @hash   1888456715
     * @vftbl  3
     * @symbol ?NewWritableFile@SnapshotEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAPEAVWritableFile@3@@Z
     */
    virtual class leveldb::Status NewWritableFile(std::string const &, class leveldb::WritableFile **);
    /**
     * @hash   -2137363089
     * @vftbl  4
     * @symbol ?NewAppendableFile@SnapshotEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAPEAVWritableFile@3@@Z
     */
    virtual class leveldb::Status NewAppendableFile(std::string const &, class leveldb::WritableFile **);
    /**
     * @hash   1004971055
     * @vftbl  7
     * @symbol ?DeleteFileA@SnapshotEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual class leveldb::Status DeleteFileA(std::string const &);
    /**
     * @hash   570783933
     * @vftbl  11
     * @symbol ?RenameFile@SnapshotEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
     */
    virtual class leveldb::Status RenameFile(std::string const &, std::string const &);
    /**
     * @hash   2093970375
     * @symbol ??0SnapshotEnv@@QEAA@PEAVEnv@leveldb@@@Z
     */
    MCAPI SnapshotEnv(class leveldb::Env *);
    /**
     * @hash   679268951
     * @symbol ?createSnapshot@SnapshotEnv@@QEAA?AV?$vector@USnapshotFilenameAndLength@@V?$allocator@USnapshotFilenameAndLength@@@std@@@std@@AEBVPath@Core@@@Z
     */
    MCAPI std::vector<struct SnapshotFilenameAndLength> createSnapshot(class Core::Path const &);
    /**
     * @hash   887969819
     * @symbol ?releaseSnapshot@SnapshotEnv@@QEAAXXZ
     */
    MCAPI void releaseSnapshot();

//private:
    /**
     * @hash   -1100421732
     * @symbol ?_isQueuedForRemoval@SnapshotEnv@@AEAA_NAEBV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@@Z
     */
    MCAPI bool _isQueuedForRemoval(class Core::PathBuffer<std::string> const &);

private:

};