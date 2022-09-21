/**
 * @file  MC/WaitTicksNode.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class WaitTicksNode.
 *
 */
class WaitTicksNode {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WAITTICKSNODE
public:
    class WaitTicksNode& operator=(class WaitTicksNode const &) = delete;
    WaitTicksNode(class WaitTicksNode const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~WaitTicksNode();
    /**
     * @hash   -644441088
     * @vftbl  1
     * @symbol ?tick@WaitTicksNode@@UEAA?AW4BehaviorStatus@@AEAVActor@@@Z
     */
    virtual enum BehaviorStatus tick(class Actor &);
    /**
     * @hash   696272036
     * @vftbl  2
     * @symbol ?initializeFromDefinition@WaitTicksNode@@EEAAXAEAVActor@@@Z
     */
    virtual void initializeFromDefinition(class Actor &);
    /**
     * @hash   344930031
     * @symbol ??0WaitTicksNode@@QEAA@XZ
     */
    MCAPI WaitTicksNode();

};