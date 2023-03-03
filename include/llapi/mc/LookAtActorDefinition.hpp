/**
 * @file  LookAtActorDefinition.hpp
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
 * @brief MC class LookAtActorDefinition.
 *
 */
class LookAtActorDefinition : public BehaviorDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOKATACTORDEFINITION
public:
    class LookAtActorDefinition& operator=(class LookAtActorDefinition const &) = delete;
    LookAtActorDefinition(class LookAtActorDefinition const &) = delete;
    LookAtActorDefinition() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~LookAtActorDefinition();
    /**
     * @vftbl  1
     * @symbol  ?load\@LookAtActorDefinition\@\@UEAAXVValue\@Json\@\@AEBVBehaviorFactory\@\@\@Z
     */
    virtual void load(class Json::Value, class BehaviorFactory const &);

};