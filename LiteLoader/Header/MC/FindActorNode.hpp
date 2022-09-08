/**
 * @file  FindActorNode.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
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
     * @hash   -35441236
     */
    virtual ~FindActorNode();
    /**
     * @vftbl  1
     * @symbol ?tick@FindActorNode@@UEAA?AW4BehaviorStatus@@AEAVActor@@@Z
     * @hash   61873195
     */
    virtual enum BehaviorStatus tick(class Actor &);
    /**
     * @vftbl  2
     * @symbol ?initializeFromDefinition@FindActorNode@@EEAAXAEAVActor@@@Z
     * @hash   -2143562257
     */
    virtual void initializeFromDefinition(class Actor &);
    /**
     * @symbol ??0FindActorNode@@QEAA@XZ
     * @hash   620696250
     */
    MCAPI FindActorNode();

};