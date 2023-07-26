/**
 * @file  InverterNode.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class InverterNode.
 *
 */
class InverterNode {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INVERTERNODE
public:
    class InverterNode& operator=(class InverterNode const &) = delete;
    InverterNode(class InverterNode const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~InverterNode();
    /**
     * @vftbl  1
     * @symbol  ?tick\@InverterNode\@\@UEAA?AW4BehaviorStatus\@\@AEAVActor\@\@\@Z
     */
    virtual enum class BehaviorStatus tick(class Actor &);
    /**
     * @vftbl  2
     * @symbol  ?initializeFromDefinition\@InverterNode\@\@MEAAXAEAVActor\@\@\@Z
     */
    virtual void initializeFromDefinition(class Actor &);
    /**
     * @symbol  ??0InverterNode\@\@QEAA\@XZ
     */
    MCAPI InverterNode();

};