#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class DecoratorDefinition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DECORATORDEFINITION
public:
    DecoratorDefinition& operator=(DecoratorDefinition const&) = delete;
    DecoratorDefinition(DecoratorDefinition const&)            = delete;
    DecoratorDefinition()                                      = delete;
#endif

public:
    /**
     * @symbol ?get\@DecoratorDefinition\@\@QEBAPEBVBehaviorDefinition\@\@XZ
     */
    MCAPI class BehaviorDefinition const* get() const;

    // protected:
    /**
     * @symbol
     * ?_decoratorLoadChildBehavior\@DecoratorDefinition\@\@KA?AV?$unique_ptr\@VBehaviorDefinition\@\@U?$default_delete\@VBehaviorDefinition\@\@\@std\@\@\@std\@\@VValue\@Json\@\@AEBVBehaviorFactory\@\@VBehaviorTreeDefinitionPtr\@\@\@Z
     */
    MCAPI static std::unique_ptr<class BehaviorDefinition>
    _decoratorLoadChildBehavior(class Json::Value, class BehaviorFactory const&, class BehaviorTreeDefinitionPtr);

protected:
};
