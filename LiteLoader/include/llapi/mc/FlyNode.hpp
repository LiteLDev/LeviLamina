/**
 * @file  FlyNode.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FlyNode.
 *
 */
class FlyNode {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FLYNODE
public:
    class FlyNode& operator=(class FlyNode const &) = delete;
    FlyNode(class FlyNode const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~FlyNode();
    /**
     * @hash   -1377373982
     * @vftbl  1
     * @symbol  ?tick\@FlyNode\@\@UEAA?AW4BehaviorStatus\@\@AEAVActor\@\@\@Z
     */
    virtual enum class BehaviorStatus tick(class Actor &);
    /**
     * @hash   372971046
     * @vftbl  2
     * @symbol  ?initializeFromDefinition\@FlyNode\@\@EEAAXAEAVActor\@\@\@Z
     */
    virtual void initializeFromDefinition(class Actor &);
    /**
     * @hash   -1102055647
     * @symbol  ??0FlyNode\@\@QEAA\@XZ
     */
    MCAPI FlyNode();

};