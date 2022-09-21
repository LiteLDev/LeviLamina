/**
 * @file  MC/WaitNode.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class WaitNode.
 *
 */
class WaitNode {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WAITNODE
public:
    class WaitNode& operator=(class WaitNode const &) = delete;
    WaitNode(class WaitNode const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~WaitNode();
    /**
     * @hash   595806212
     * @vftbl  1
     * @symbol ?tick@WaitNode@@UEAA?AW4BehaviorStatus@@AEAVActor@@@Z
     */
    virtual enum BehaviorStatus tick(class Actor &);
    /**
     * @hash   53679016
     * @vftbl  2
     * @symbol ?initializeFromDefinition@WaitNode@@EEAAXAEAVActor@@@Z
     */
    virtual void initializeFromDefinition(class Actor &);
    /**
     * @hash   -1211915901
     * @symbol ??0WaitNode@@QEAA@XZ
     */
    MCAPI WaitNode();

};