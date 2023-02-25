/**
 * @file  WaitTicksDefinition.hpp
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
 * @brief MC class WaitTicksDefinition.
 *
 */
class WaitTicksDefinition : public BehaviorDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WAITTICKSDEFINITION
public:
    class WaitTicksDefinition& operator=(class WaitTicksDefinition const &) = delete;
    WaitTicksDefinition(class WaitTicksDefinition const &) = delete;
    WaitTicksDefinition() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~WaitTicksDefinition();
    /**
     * @vftbl  1
     * @symbol  ?load\@WaitTicksDefinition\@\@UEAAXVValue\@Json\@\@AEBVBehaviorFactory\@\@\@Z
     */
    virtual void load(class Json::Value, class BehaviorFactory const &);

};