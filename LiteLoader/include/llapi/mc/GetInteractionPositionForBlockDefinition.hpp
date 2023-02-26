/**
 * @file  GetInteractionPositionForBlockDefinition.hpp
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
 * @brief MC class GetInteractionPositionForBlockDefinition.
 *
 */
class GetInteractionPositionForBlockDefinition : public BehaviorDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GETINTERACTIONPOSITIONFORBLOCKDEFINITION
public:
    class GetInteractionPositionForBlockDefinition& operator=(class GetInteractionPositionForBlockDefinition const &) = delete;
    GetInteractionPositionForBlockDefinition(class GetInteractionPositionForBlockDefinition const &) = delete;
    GetInteractionPositionForBlockDefinition() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~GetInteractionPositionForBlockDefinition();
    /**
     * @vftbl  1
     * @symbol  ?load\@GetInteractionPositionForBlockDefinition\@\@UEAAXVValue\@Json\@\@AEBVBehaviorFactory\@\@\@Z
     */
    virtual void load(class Json::Value, class BehaviorFactory const &);

};