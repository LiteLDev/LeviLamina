/**
 * @file  UseActorNode.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class UseActorNode.
 *
 */
class UseActorNode {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_USEACTORNODE
public:
    class UseActorNode& operator=(class UseActorNode const &) = delete;
    UseActorNode(class UseActorNode const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~UseActorNode();
    /**
     * @hash   -1821496707
     * @vftbl  1
     * @symbol  ?tick\@UseActorNode\@\@UEAA?AW4BehaviorStatus\@\@AEAVActor\@\@\@Z
     */
    virtual enum class BehaviorStatus tick(class Actor &);
    /**
     * @hash   1847977612
     * @symbol  ??0UseActorNode\@\@QEAA\@XZ
     */
    MCAPI UseActorNode();

};