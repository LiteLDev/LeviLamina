#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/definition/BehaviorDefinition.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class CompositeDefinition : public ::BehaviorDefinition {

public:
    // prevent constructor by default
    CompositeDefinition& operator=(CompositeDefinition const&) = delete;
    CompositeDefinition(CompositeDefinition const&)            = delete;
    CompositeDefinition()                                      = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?get\@CompositeDefinition\@\@QEBAPEBVBehaviorDefinition\@\@_K\@Z
     */
    MCAPI class BehaviorDefinition const* get(uint64_t) const;
    /**
     * @symbol ?getCount\@CompositeDefinition\@\@QEBA_KXZ
     */
    MCAPI uint64_t getCount() const;
    // NOLINTEND

    // protected:
    // NOLINTBEGIN
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
    // NOLINTEND
};
