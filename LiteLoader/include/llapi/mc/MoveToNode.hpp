/**
 * @file  MoveToNode.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @symbol  __unk_destructor_0
     */
    virtual ~MoveToNode();
    /**
     * @hash   -1330595941
     * @vftbl  1
     * @symbol  ?tick\@MoveToNode\@\@UEAA?AW4BehaviorStatus\@\@AEAVActor\@\@\@Z
     */
    virtual enum class BehaviorStatus tick(class Actor &);
    /**
     * @hash   1312662495
     * @vftbl  2
     * @symbol  ?initializeFromDefinition\@MoveToNode\@\@EEAAXAEAVActor\@\@\@Z
     */
    virtual void initializeFromDefinition(class Actor &);
    /**
     * @hash   551453146
     * @symbol  ??0MoveToNode\@\@QEAA\@XZ
     */
    MCAPI MoveToNode();

};