/**
 * @file  SelectorBehaviorNode.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SelectorBehaviorNode.
 *
 */
class SelectorBehaviorNode {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SELECTORBEHAVIORNODE
public:
    class SelectorBehaviorNode& operator=(class SelectorBehaviorNode const &) = delete;
    SelectorBehaviorNode(class SelectorBehaviorNode const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~SelectorBehaviorNode();
    /**
     * @hash   132458320
     * @vftbl  1
     * @symbol  ?tick\@SelectorBehaviorNode\@\@UEAA?AW4BehaviorStatus\@\@AEAVActor\@\@\@Z
     */
    virtual enum class BehaviorStatus tick(class Actor &);
    /**
     * @hash   704533293
     * @vftbl  2
     * @symbol  ?initializeFromDefinition\@SelectorBehaviorNode\@\@MEAAXAEAVActor\@\@\@Z
     */
    virtual void initializeFromDefinition(class Actor &);
    /**
     * @hash   72356367
     * @symbol  ??0SelectorBehaviorNode\@\@QEAA\@XZ
     */
    MCAPI SelectorBehaviorNode();

};