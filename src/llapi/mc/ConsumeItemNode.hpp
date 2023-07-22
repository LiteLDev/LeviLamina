/**
 * @file  ConsumeItemNode.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ConsumeItemNode.
 *
 */
class ConsumeItemNode {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONSUMEITEMNODE
public:
    class ConsumeItemNode& operator=(class ConsumeItemNode const &) = delete;
    ConsumeItemNode(class ConsumeItemNode const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ConsumeItemNode();
    /**
     * @vftbl  1
     * @symbol  ?tick\@ConsumeItemNode\@\@UEAA?AW4BehaviorStatus\@\@AEAVActor\@\@\@Z
     */
    virtual enum class BehaviorStatus tick(class Actor &);
    /**
     * @symbol  ??0ConsumeItemNode\@\@QEAA\@XZ
     */
    MCAPI ConsumeItemNode();

};