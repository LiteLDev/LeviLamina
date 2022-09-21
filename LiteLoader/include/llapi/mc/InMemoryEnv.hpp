/**
 * @file  MC/InMemoryEnv.hpp
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
 * @brief MC class InMemoryEnv.
 *
 */
class InMemoryEnv : public TransactionalWorldBlockTarget {

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
     * @symbol __unk_destructor_0
     */
    virtual ~InMemoryEnv();
    /**
     * @hash   1280231771
     * @vftbl  1
     * @symbol ?NewSequentialFile@InMemoryEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAPEAVSequentialFile@3@@Z
     */
    virtual class leveldb::Status NewSequentialFile(std::string const &, class leveldb::SequentialFile **);
    /**
     * @hash   -1914129541
     * @vftbl  2
     * @symbol ?NewRandomAccessFile@InMemoryEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAPEAVRandomAccessFile@3@@Z
     */
    virtual class leveldb::Status NewRandomAccessFile(std::string const &, class leveldb::RandomAccessFile **);
    /**
     * @hash   -1589888563
     * @vftbl  3
     * @symbol ?NewWritableFile@InMemoryEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAPEAVWritableFile@3@@Z
     */
    virtual class leveldb::Status NewWritableFile(std::string const &, class leveldb::WritableFile **);
    /**
     * @hash   -1321048591
     * @vftbl  4
     * @symbol ?NewAppendableFile@InMemoryEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAPEAVWritableFile@3@@Z
     */
    virtual class leveldb::Status NewAppendableFile(std::string const &, class leveldb::WritableFile **);
    /**
     * @hash   -866598942
     * @vftbl  5
     * @symbol ?FileExists@InMemoryEnv@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual bool FileExists(std::string const &);
    /**
     * @hash   -328255924
     * @vftbl  6
     * @symbol ?GetChildren@InMemoryEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@5@@Z
     */
    virtual class leveldb::Status GetChildren(std::string const &, std::vector<std::string> *);
    /**
     * @hash   1594225245
     * @vftbl  7
     * @symbol ?DeleteFileA@InMemoryEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual class leveldb::Status DeleteFileA(std::string const &);
    /**
     * @hash   515070287
     * @vftbl  11
     * @symbol ?RenameFile@InMemoryEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
     */
    virtual class leveldb::Status RenameFile(std::string const &, std::string const &);
    /**
     * @hash   -46193204
     * @vftbl  20
     * @symbol ?flushToPermanentStorage@InMemoryEnv@@UEAAXXZ
     */
    virtual void flushToPermanentStorage();
    /**
     * @hash   -1384312954
     * @symbol ??0InMemoryEnv@@QEAA@PEAVEnv@leveldb@@AEBVPath@Core@@@Z
     */
    MCAPI InMemoryEnv(class leveldb::Env *, class Core::Path const &);

//private:
    /**
     * @hash   -1806069336
     * @symbol ?_flushWithTransaction@InMemoryEnv@@AEAAXXZ
     */
    MCAPI void _flushWithTransaction();

private:

};