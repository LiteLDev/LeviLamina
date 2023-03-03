/**
 * @file  SubtreeNode.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SubtreeNode.
 *
 */
class SubtreeNode {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SUBTREENODE
public:
    class SubtreeNode& operator=(class SubtreeNode const &) = delete;
    SubtreeNode(class SubtreeNode const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~SubtreeNode();
    /**
     * @vftbl  1
     * @symbol  ?tick\@SubtreeNode\@\@UEAA?AW4BehaviorStatus\@\@AEAVActor\@\@\@Z
     */
    virtual enum class BehaviorStatus tick(class Actor &);
    /**
     * @vftbl  2
     * @symbol  ?initializeFromDefinition\@SubtreeNode\@\@MEAAXAEAVActor\@\@\@Z
     */
    virtual void initializeFromDefinition(class Actor &);
    /**
     * @symbol  ??0SubtreeNode\@\@QEAA\@XZ
     */
    MCAPI SubtreeNode();

};