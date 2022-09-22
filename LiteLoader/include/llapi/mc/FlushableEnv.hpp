/**
 * @file  FlushableEnv.hpp
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
 * @brief MC class FlushableEnv.
 *
 */
class FlushableEnv : public TransactionalWorldBlockTarget {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FLUSHABLEENV
public:
    class FlushableEnv& operator=(class FlushableEnv const &) = delete;
    FlushableEnv(class FlushableEnv const &) = delete;
    FlushableEnv() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~FlushableEnv();
    /**
     * @hash   -456082351
     * @symbol ??0FlushableEnv@@QEAA@PEAVEnv@leveldb@@@Z
     */
    MCAPI FlushableEnv(class leveldb::Env *);

};