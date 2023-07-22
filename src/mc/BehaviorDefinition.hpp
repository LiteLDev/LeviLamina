/**
 * @file  BehaviorDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BehaviorDefinition.
 *
 */
class BehaviorDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEHAVIORDEFINITION
public:
    class BehaviorDefinition& operator=(class BehaviorDefinition const &) = delete;
    BehaviorDefinition(class BehaviorDefinition const &) = delete;
    BehaviorDefinition() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~BehaviorDefinition();
    /**
     * @vftbl  1
     * @symbol  ?load\@BehaviorDefinition\@\@UEAAXVValue\@Json\@\@AEBVBehaviorFactory\@\@\@Z
     */
    virtual void load(class Json::Value, class BehaviorFactory const &);
    /**
     * @vftbl  2
     * @symbol  ?createNode\@BehaviorDefinition\@\@UEBA?AV?$unique_ptr\@VBehaviorNode\@\@U?$default_delete\@VBehaviorNode\@\@\@std\@\@\@std\@\@AEAVActor\@\@AEBVBehaviorFactory\@\@PEAVBehaviorNode\@\@PEAVBehaviorData\@\@\@Z
     */
    virtual std::unique_ptr<class BehaviorNode> createNode(class Actor &, class BehaviorFactory const &, class BehaviorNode *, class BehaviorData *) const;
    /**
     * @symbol  ?getTreeDefinition\@BehaviorDefinition\@\@QEBA?AVBehaviorTreeDefinitionPtr\@\@XZ
     */
    MCAPI class BehaviorTreeDefinitionPtr getTreeDefinition() const;

};