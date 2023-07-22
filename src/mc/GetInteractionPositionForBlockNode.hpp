/**
 * @file  GetInteractionPositionForBlockNode.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Facing.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class GetInteractionPositionForBlockNode.
 *
 */
class GetInteractionPositionForBlockNode {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GETINTERACTIONPOSITIONFORBLOCKNODE
public:
    class GetInteractionPositionForBlockNode& operator=(class GetInteractionPositionForBlockNode const &) = delete;
    GetInteractionPositionForBlockNode(class GetInteractionPositionForBlockNode const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~GetInteractionPositionForBlockNode();
    /**
     * @vftbl  1
     * @symbol  ?tick\@GetInteractionPositionForBlockNode\@\@UEAA?AW4BehaviorStatus\@\@AEAVActor\@\@\@Z
     */
    virtual enum class BehaviorStatus tick(class Actor &);
    /**
     * @vftbl  2
     * @symbol  ?initializeFromDefinition\@GetInteractionPositionForBlockNode\@\@EEAAXAEAVActor\@\@\@Z
     */
    virtual void initializeFromDefinition(class Actor &);
    /**
     * @symbol  ??0GetInteractionPositionForBlockNode\@\@QEAA\@XZ
     */
    MCAPI GetInteractionPositionForBlockNode();

//private:
    /**
     * @symbol  ?parseFacingNameFromString\@GetInteractionPositionForBlockNode\@\@AEAA?AW4Name\@Facing\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI enum class Facing::Name parseFacingNameFromString(std::string);

private:

};