/**
 * @file  ActivateToolNode.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ActivateToolNode.
 *
 */
class ActivateToolNode {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTIVATETOOLNODE
public:
    class ActivateToolNode& operator=(class ActivateToolNode const &) = delete;
    ActivateToolNode(class ActivateToolNode const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ActivateToolNode();
    /**
     * @vftbl  1
     * @symbol  ?tick\@ActivateToolNode\@\@UEAA?AW4BehaviorStatus\@\@AEAVActor\@\@\@Z
     */
    virtual enum class BehaviorStatus tick(class Actor &);
    /**
     * @vftbl  2
     * @symbol  ?initializeFromDefinition\@ActivateToolNode\@\@EEAAXAEAVActor\@\@\@Z
     */
    virtual void initializeFromDefinition(class Actor &);
    /**
     * @symbol  ??0ActivateToolNode\@\@QEAA\@XZ
     */
    MCAPI ActivateToolNode();

};