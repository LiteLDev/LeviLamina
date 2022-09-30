/**
 * @file  FindActorNode.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FindActorNode.
 *
 */
class FindActorNode {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FINDACTORNODE
public:
    class FindActorNode& operator=(class FindActorNode const &) = delete;
    FindActorNode(class FindActorNode const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~FindActorNode();
    /**
     * @hash   61873195
     * @vftbl  1
     * @symbol ?tick@FindActorNode@@UEAA?AW4BehaviorStatus@@AEAVActor@@@Z
     */
    virtual enum class BehaviorStatus tick(class Actor &);
    /**
     * @hash   -2143562257
     * @vftbl  2
     * @symbol ?initializeFromDefinition@FindActorNode@@EEAAXAEAVActor@@@Z
     */
    virtual void initializeFromDefinition(class Actor &);
    /**
     * @hash   620696250
     * @symbol ??0FindActorNode@@QEAA@XZ
     */
    MCAPI FindActorNode();

};