/**
 * @file  DecoratorDefinition.hpp
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
 * @brief MC class DecoratorDefinition.
 *
 */
class DecoratorDefinition : public BehaviorDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DECORATORDEFINITION
public:
    class DecoratorDefinition& operator=(class DecoratorDefinition const &) = delete;
    DecoratorDefinition(class DecoratorDefinition const &) = delete;
    DecoratorDefinition() = delete;
#endif

public:

//protected:
    /**
     * @symbol ?_decoratorLoadChildBehavior\@DecoratorDefinition\@\@KA?AV?$unique_ptr\@VBehaviorDefinition\@\@U?$default_delete\@VBehaviorDefinition\@\@\@std\@\@\@std\@\@VValue\@Json\@\@AEBVBehaviorFactory\@\@VBehaviorTreeDefinitionPtr\@\@\@Z
     */
    MCAPI static std::unique_ptr<class BehaviorDefinition> _decoratorLoadChildBehavior(class Json::Value, class BehaviorFactory const &, class BehaviorTreeDefinitionPtr);

protected:

};
