/**
 * @file  SubtreeDefinition.hpp
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
 * @brief MC class SubtreeDefinition.
 *
 */
class SubtreeDefinition : public BehaviorDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SUBTREEDEFINITION
public:
    class SubtreeDefinition& operator=(class SubtreeDefinition const &) = delete;
    SubtreeDefinition(class SubtreeDefinition const &) = delete;
    SubtreeDefinition() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~SubtreeDefinition();
    /**
     * @vftbl  1
     * @symbol  ?load\@SubtreeDefinition\@\@UEAAXVValue\@Json\@\@AEBVBehaviorFactory\@\@\@Z
     */
    virtual void load(class Json::Value, class BehaviorFactory const &);

};