/**
 * @file  InteractActionDefinition.hpp
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
 * @brief MC class InteractActionDefinition.
 *
 */
class InteractActionDefinition : public BehaviorDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INTERACTACTIONDEFINITION
public:
    class InteractActionDefinition& operator=(class InteractActionDefinition const &) = delete;
    InteractActionDefinition(class InteractActionDefinition const &) = delete;
    InteractActionDefinition() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~InteractActionDefinition();
    /**
     * @vftbl  1
     * @symbol  ?load\@InteractActionDefinition\@\@UEAAXVValue\@Json\@\@AEBVBehaviorFactory\@\@\@Z
     */
    virtual void load(class Json::Value, class BehaviorFactory const &);

};