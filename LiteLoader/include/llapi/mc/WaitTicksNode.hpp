/**
 * @file  WaitTicksNode.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @symbol  __unk_destructor_0
     */
    virtual ~WaitTicksNode();
    /**
     * @hash   -451467696
     * @vftbl  1
     * @symbol  ?tick\@WaitTicksNode\@\@UEAA?AW4BehaviorStatus\@\@AEAVActor\@\@\@Z
     */
    virtual enum class BehaviorStatus tick(class Actor &);
    /**
     * @hash   889245428
     * @vftbl  2
     * @symbol  ?initializeFromDefinition\@WaitTicksNode\@\@EEAAXAEAVActor\@\@\@Z
     */
    virtual void initializeFromDefinition(class Actor &);
    /**
     * @hash   537903423
     * @symbol  ??0WaitTicksNode\@\@QEAA\@XZ
     */
    MCAPI WaitTicksNode();

};