/**
 * @file  BreakBlockDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Json.hpp"
#include "BehaviorDefinition.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BreakBlockDefinition.
 *
 */
class BreakBlockDefinition : public BehaviorDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BREAKBLOCKDEFINITION
public:
    class BreakBlockDefinition& operator=(class BreakBlockDefinition const &) = delete;
    BreakBlockDefinition(class BreakBlockDefinition const &) = delete;
    BreakBlockDefinition() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~BreakBlockDefinition();
    /**
     * @vftbl  1
     * @symbol  ?load\@BreakBlockDefinition\@\@UEAAXVValue\@Json\@\@AEBVBehaviorFactory\@\@\@Z
     */
    virtual void load(class Json::Value, class BehaviorFactory const &);

};