/**
 * @file  BehaviorTreeDescription.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BehaviorTreeDescription.
 *
 */
class BehaviorTreeDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEHAVIORTREEDESCRIPTION
public:
    class BehaviorTreeDescription& operator=(class BehaviorTreeDescription const &) = delete;
    BehaviorTreeDescription(class BehaviorTreeDescription const &) = delete;
    BehaviorTreeDescription() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  ?getJsonName\@BehaviorTreeDescription\@\@UEBAPEBDXZ
     */
    virtual char const * getJsonName() const;
    /**
     * @vftbl  1
     * @symbol  __unk_destructor_1
     */
    virtual ~BehaviorTreeDescription();
    /**
     * @vftbl  3
     * @symbol  ?serializeData\@BehaviorTreeDescription\@\@UEBAXAEAVValue\@Json\@\@\@Z
     */
    virtual void serializeData(class Json::Value &) const;

};