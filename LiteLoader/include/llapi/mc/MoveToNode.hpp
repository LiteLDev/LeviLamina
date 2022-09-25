/**
 * @file  MoveToNode.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MoveToNode.
 *
 */
class MoveToNode {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVETONODE
public:
    class MoveToNode& operator=(class MoveToNode const &) = delete;
    MoveToNode(class MoveToNode const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~MoveToNode();
    /**
     * @hash   -1523477077
     * @vftbl  1
     * @symbol ?tick@MoveToNode@@UEAA?AW4BehaviorStatus@@AEAVActor@@@Z
     */
    virtual enum BehaviorStatus tick(class Actor &);
    /**
     * @hash   1119781359
     * @vftbl  2
     * @symbol ?initializeFromDefinition@MoveToNode@@EEAAXAEAVActor@@@Z
     */
    virtual void initializeFromDefinition(class Actor &);
    /**
     * @hash   358572010
     * @symbol ??0MoveToNode@@QEAA@XZ
     */
    MCAPI MoveToNode();

};