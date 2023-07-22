/**
 * @file  CompositeDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
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
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~CompositeDefinition();
    /**
     * @symbol  ??0CompositeDefinition\@\@QEAA\@XZ
     */
    MCAPI CompositeDefinition();
    /**
     * @symbol  ?get\@CompositeDefinition\@\@QEBAPEBVBehaviorDefinition\@\@_K\@Z
     */
    MCAPI class BehaviorDefinition const * get(unsigned __int64) const;
    /**
     * @symbol  ?getCount\@CompositeDefinition\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getCount() const;

//protected:
    /**
     * @symbol  ?_compositeLoadChildrenBehaviors\@CompositeDefinition\@\@KAXVValue\@Json\@\@AEAV?$vector\@V?$unique_ptr\@VBehaviorDefinition\@\@U?$default_delete\@VBehaviorDefinition\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VBehaviorDefinition\@\@U?$default_delete\@VBehaviorDefinition\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@AEBVBehaviorFactory\@\@VBehaviorTreeDefinitionPtr\@\@\@Z
     */
    MCAPI static void _compositeLoadChildrenBehaviors(class Json::Value, std::vector<std::unique_ptr<class BehaviorDefinition>> &, class BehaviorFactory const &, class BehaviorTreeDefinitionPtr);

protected:

};