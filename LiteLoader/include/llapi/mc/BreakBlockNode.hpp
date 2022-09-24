/**
 * @file  BreakBlockNode.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BreakBlockNode.
 *
 */
class BreakBlockNode {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BREAKBLOCKNODE
public:
    class BreakBlockNode& operator=(class BreakBlockNode const &) = delete;
    BreakBlockNode(class BreakBlockNode const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~BreakBlockNode();
    /**
     * @hash   2067319773
     * @vftbl  1
     * @symbol ?tick@BreakBlockNode@@UEAA?AW4BehaviorStatus@@AEAVActor@@@Z
     */
    virtual enum BehaviorStatus tick(class Actor &);
    /**
     * @hash   841379089
     * @vftbl  2
     * @symbol ?initializeFromDefinition@BreakBlockNode@@EEAAXAEAVActor@@@Z
     */
    virtual void initializeFromDefinition(class Actor &);
    /**
     * @hash   431113724
     * @symbol ??0BreakBlockNode@@QEAA@XZ
     */
    MCAPI BreakBlockNode();

};