/**
 * @file  ShootBowDefinition.hpp
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
 * @brief MC class ShootBowDefinition.
 *
 */
class ShootBowDefinition : public BehaviorDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHOOTBOWDEFINITION
public:
    class ShootBowDefinition& operator=(class ShootBowDefinition const &) = delete;
    ShootBowDefinition(class ShootBowDefinition const &) = delete;
    ShootBowDefinition() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ShootBowDefinition();
    /**
     * @vftbl  1
     * @symbol  ?load\@ShootBowDefinition\@\@UEAAXVValue\@Json\@\@AEBVBehaviorFactory\@\@\@Z
     */
    virtual void load(class Json::Value, class BehaviorFactory const &);

};