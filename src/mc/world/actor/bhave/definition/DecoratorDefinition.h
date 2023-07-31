#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class DecoratorDefinition {

public:
    // prevent constructor by default
    DecoratorDefinition& operator=(DecoratorDefinition const&) = delete;
    DecoratorDefinition(DecoratorDefinition const&)            = delete;
    DecoratorDefinition()                                      = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?get\@DecoratorDefinition\@\@QEBAPEBVBehaviorDefinition\@\@XZ
     */
    MCAPI class BehaviorDefinition const* get() const;
    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_decoratorLoadChildBehavior\@DecoratorDefinition\@\@KA?AV?$unique_ptr\@VBehaviorDefinition\@\@U?$default_delete\@VBehaviorDefinition\@\@\@std\@\@\@std\@\@VValue\@Json\@\@AEBVBehaviorFactory\@\@VBehaviorTreeDefinitionPtr\@\@\@Z
     */
    MCAPI static std::unique_ptr<class BehaviorDefinition>
    _decoratorLoadChildBehavior(class Json::Value, class BehaviorFactory const&, class BehaviorTreeDefinitionPtr);
    // NOLINTEND
};
