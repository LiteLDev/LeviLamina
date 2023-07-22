/**
 * @file  FindBlockDefinition.hpp
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
 * @brief MC class FindBlockDefinition.
 *
 */
class FindBlockDefinition : public BehaviorDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FINDBLOCKDEFINITION
public:
    class FindBlockDefinition& operator=(class FindBlockDefinition const &) = delete;
    FindBlockDefinition(class FindBlockDefinition const &) = delete;
    FindBlockDefinition() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~FindBlockDefinition();
    /**
     * @vftbl  1
     * @symbol  ?load\@FindBlockDefinition\@\@UEAAXVValue\@Json\@\@AEBVBehaviorFactory\@\@\@Z
     */
    virtual void load(class Json::Value, class BehaviorFactory const &);

};