/**
 * @file  FindBlockNode.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FindBlockNode.
 *
 */
class FindBlockNode {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FINDBLOCKNODE
public:
    class FindBlockNode& operator=(class FindBlockNode const &) = delete;
    FindBlockNode(class FindBlockNode const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~FindBlockNode();
    /**
     * @hash   779764355
     * @vftbl  1
     * @symbol ?tick@FindBlockNode@@UEAA?AW4BehaviorStatus@@AEAVActor@@@Z
     */
    virtual enum BehaviorStatus tick(class Actor &);
    /**
     * @hash   -2060213065
     * @vftbl  2
     * @symbol ?initializeFromDefinition@FindBlockNode@@EEAAXAEAVActor@@@Z
     */
    virtual void initializeFromDefinition(class Actor &);
    /**
     * @hash   2132503842
     * @symbol ??0FindBlockNode@@QEAA@XZ
     */
    MCAPI FindBlockNode();

};