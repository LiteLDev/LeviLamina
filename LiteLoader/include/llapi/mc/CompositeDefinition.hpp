/**
 * @file  CompositeDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Json.hpp"
#include "BehaviorDefinition.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CompositeDefinition.
 *
 */
class CompositeDefinition : public BehaviorDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMPOSITEDEFINITION
public:
    class CompositeDefinition& operator=(class CompositeDefinition const &) = delete;
    CompositeDefinition(class CompositeDefinition const &) = delete;
    CompositeDefinition() = delete;
#endif

public:

//protected:
    /**
     * @symbol ?_compositeLoadChildrenBehaviors\@CompositeDefinition\@\@KAXVValue\@Json\@\@AEAV?$vector\@V?$unique_ptr\@VBehaviorDefinition\@\@U?$default_delete\@VBehaviorDefinition\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VBehaviorDefinition\@\@U?$default_delete\@VBehaviorDefinition\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@AEBVBehaviorFactory\@\@VBehaviorTreeDefinitionPtr\@\@\@Z
     */
    MCAPI static void _compositeLoadChildrenBehaviors(class Json::Value, std::vector<std::unique_ptr<class BehaviorDefinition>> &, class BehaviorFactory const &, class BehaviorTreeDefinitionPtr);

protected:

};
