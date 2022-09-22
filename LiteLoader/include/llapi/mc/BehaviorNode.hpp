/**
 * @file  BehaviorNode.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BehaviorNode.
 *
 */
class BehaviorNode {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEHAVIORNODE
public:
    class BehaviorNode& operator=(class BehaviorNode const &) = delete;
    BehaviorNode(class BehaviorNode const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~BehaviorNode();
    /**
     * @vftbl  1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1() = 0;
    /**
     * @hash   -1232124018
     * @vftbl  2
     * @symbol ?initializeFromDefinition@BehaviorNode@@MEAAXAEAVActor@@@Z
     */
    virtual void initializeFromDefinition(class Actor &);
    /**
     * @hash   370415568
     * @symbol ??0BehaviorNode@@QEAA@XZ
     */
    MCAPI BehaviorNode();
    /**
     * @hash   2029960802
     * @symbol ?getBehaviorData@BehaviorNode@@QEAAAEAVBehaviorData@@XZ
     */
    MCAPI class BehaviorData & getBehaviorData();

};