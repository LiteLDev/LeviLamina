/**
 * @file  LookAtBlockDefinition.hpp
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
 * @brief MC class LookAtBlockDefinition.
 *
 */
class LookAtBlockDefinition : public BehaviorDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOKATBLOCKDEFINITION
public:
    class LookAtBlockDefinition& operator=(class LookAtBlockDefinition const &) = delete;
    LookAtBlockDefinition(class LookAtBlockDefinition const &) = delete;
    LookAtBlockDefinition() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~LookAtBlockDefinition();
    /**
     * @vftbl  1
     * @symbol  ?load\@LookAtBlockDefinition\@\@UEAAXVValue\@Json\@\@AEBVBehaviorFactory\@\@\@Z
     */
    virtual void load(class Json::Value, class BehaviorFactory const &);

};