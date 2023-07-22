/**
 * @file  RepeatUntilSuccessNode.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RepeatUntilSuccessNode.
 *
 */
class RepeatUntilSuccessNode {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REPEATUNTILSUCCESSNODE
public:
    class RepeatUntilSuccessNode& operator=(class RepeatUntilSuccessNode const &) = delete;
    RepeatUntilSuccessNode(class RepeatUntilSuccessNode const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~RepeatUntilSuccessNode();
    /**
     * @vftbl  1
     * @symbol  ?tick\@RepeatUntilSuccessNode\@\@UEAA?AW4BehaviorStatus\@\@AEAVActor\@\@\@Z
     */
    virtual enum class BehaviorStatus tick(class Actor &);
    /**
     * @vftbl  2
     * @symbol  ?initializeFromDefinition\@RepeatUntilSuccessNode\@\@MEAAXAEAVActor\@\@\@Z
     */
    virtual void initializeFromDefinition(class Actor &);
    /**
     * @symbol  ??0RepeatUntilSuccessNode\@\@QEAA\@XZ
     */
    MCAPI RepeatUntilSuccessNode();

};