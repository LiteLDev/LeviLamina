/**
 * @file  MC/ActivateToolDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "BehaviorDefinition.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ActivateToolDefinition.
 *
 */
class ActivateToolDefinition : public BehaviorDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTIVATETOOLDEFINITION
public:
    class ActivateToolDefinition& operator=(class ActivateToolDefinition const &) = delete;
    ActivateToolDefinition(class ActivateToolDefinition const &) = delete;
    ActivateToolDefinition() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ActivateToolDefinition();
    /**
     * @hash   -754266938
     * @vftbl  1
     * @symbol ?load@ActivateToolDefinition@@UEAAXVValue@Json@@AEBVBehaviorFactory@@@Z
     */
    virtual void load(class Json::Value, class BehaviorFactory const &);

};