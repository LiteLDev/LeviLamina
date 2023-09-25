/**
 * @file  SequenceDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Json.hpp"
#include "CompositeDefinition.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SequenceDefinition.
 *
 */
class SequenceDefinition : public CompositeDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SEQUENCEDEFINITION
public:
    class SequenceDefinition& operator=(class SequenceDefinition const &) = delete;
    SequenceDefinition(class SequenceDefinition const &) = delete;
    SequenceDefinition() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?load\@SequenceDefinition\@\@UEAAXVValue\@Json\@\@AEBVBehaviorFactory\@\@\@Z
     */
    virtual void load(class Json::Value, class BehaviorFactory const &);
    /**
     * @vftbl 2
     * @symbol ?createNode\@BehaviorDefinition\@\@UEBA?AV?$unique_ptr\@VBehaviorNode\@\@U?$default_delete\@VBehaviorNode\@\@\@std\@\@\@std\@\@AEAVActor\@\@AEBVBehaviorFactory\@\@PEAVBehaviorNode\@\@PEAVBehaviorData\@\@\@Z
     */
    virtual std::unique_ptr<class BehaviorNode> createNode(class Actor &, class BehaviorFactory const &, class BehaviorNode *, class BehaviorData *) const;

};
