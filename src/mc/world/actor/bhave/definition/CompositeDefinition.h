#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class CompositeDefinition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMPOSITEDEFINITION
public:
    CompositeDefinition& operator=(CompositeDefinition const&) = delete;
    CompositeDefinition(CompositeDefinition const&)            = delete;
    CompositeDefinition()                                      = delete;
#endif

public:
    /**
     * @symbol ?get\@CompositeDefinition\@\@QEBAPEBVBehaviorDefinition\@\@_K\@Z
     */
    MCAPI class BehaviorDefinition const* get(unsigned __int64) const;
    /**
     * @symbol ?getCount\@CompositeDefinition\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getCount() const;

    // protected:
    /**
     * @symbol
     * ?_compositeLoadChildrenBehaviors\@CompositeDefinition\@\@KAXVValue\@Json\@\@AEAV?$vector\@V?$unique_ptr\@VBehaviorDefinition\@\@U?$default_delete\@VBehaviorDefinition\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VBehaviorDefinition\@\@U?$default_delete\@VBehaviorDefinition\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@AEBVBehaviorFactory\@\@VBehaviorTreeDefinitionPtr\@\@\@Z
     */
    MCAPI static void _compositeLoadChildrenBehaviors(
        class Json::Value,
        std::vector<std::unique_ptr<class BehaviorDefinition>>&,
        class BehaviorFactory const&,
        class BehaviorTreeDefinitionPtr
    );

protected:
};
