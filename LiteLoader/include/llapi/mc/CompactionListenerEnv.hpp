/**
 * @file  CompactionListenerEnv.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "TransactionalWorldBlockTarget.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CompactionListenerEnv.
 *
 */
class CompactionListenerEnv : public TransactionalWorldBlockTarget {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMPACTIONLISTENERENV
public:
    class CompactionListenerEnv& operator=(class CompactionListenerEnv const &) = delete;
    CompactionListenerEnv(class CompactionListenerEnv const &) = delete;
    CompactionListenerEnv() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~CompactionListenerEnv();
    /**
     * @hash   1210113610
     * @vftbl  14
     * @symbol ?Schedule@CompactionListenerEnv@@UEAAXP6AXPEAX@Z0@Z
     */
    virtual void Schedule(void ( *)(void *), void *);
    /**
     * @hash   512881884
     * @symbol ??0CompactionListenerEnv@@QEAA@PEAVEnv@leveldb@@@Z
     */
    MCAPI CompactionListenerEnv(class leveldb::Env *);
    /**
     * @hash   758504364
     * @symbol ?setCompactionCallback@CompactionListenerEnv@@QEAAXV?$function@$$A6AXW4CompactionStatus@@@Z@std@@@Z
     */
    MCAPI void setCompactionCallback(class std::function<void (enum CompactionStatus)>);

};