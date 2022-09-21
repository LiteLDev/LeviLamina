/**
 * @file  MC/FlushableStorageAreaEnv.hpp
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
 * @brief MC class FlushableStorageAreaEnv.
 *
 */
class FlushableStorageAreaEnv : public TransactionalWorldBlockTarget {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FLUSHABLESTORAGEAREAENV
public:
    class FlushableStorageAreaEnv& operator=(class FlushableStorageAreaEnv const &) = delete;
    FlushableStorageAreaEnv(class FlushableStorageAreaEnv const &) = delete;
    FlushableStorageAreaEnv() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~FlushableStorageAreaEnv();
    /**
     * @hash   1187343136
     * @vftbl  20
     * @symbol ?flushToPermanentStorage@FlushableStorageAreaEnv@@UEAAXXZ
     */
    virtual void flushToPermanentStorage();
    /**
     * @hash   329981609
     * @symbol ??0FlushableStorageAreaEnv@@QEAA@PEAVEnv@leveldb@@V?$shared_ptr@VFileStorageArea@Core@@@std@@@Z
     */
    MCAPI FlushableStorageAreaEnv(class leveldb::Env *, class std::shared_ptr<class Core::FileStorageArea>);

};