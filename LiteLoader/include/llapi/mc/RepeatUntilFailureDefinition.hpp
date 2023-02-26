/**
 * @file  RepeatUntilFailureDefinition.hpp
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
 * @brief MC class RepeatUntilFailureDefinition.
 *
 */
class RepeatUntilFailureDefinition : public BehaviorDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REPEATUNTILFAILUREDEFINITION
public:
    class RepeatUntilFailureDefinition& operator=(class RepeatUntilFailureDefinition const &) = delete;
    RepeatUntilFailureDefinition(class RepeatUntilFailureDefinition const &) = delete;
    RepeatUntilFailureDefinition() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~RepeatUntilFailureDefinition();
    /**
     * @vftbl  1
     * @symbol  ?load\@RepeatUntilFailureDefinition\@\@UEAAXVValue\@Json\@\@AEBVBehaviorFactory\@\@\@Z
     */
    virtual void load(class Json::Value, class BehaviorFactory const &);

};