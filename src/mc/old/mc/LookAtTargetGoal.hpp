/**
 * @file  LookAtTargetGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "LookAtActorGoal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LookAtTargetGoal.
 *
 */
class LookAtTargetGoal : public LookAtActorGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOKATTARGETGOAL
public:
    class LookAtTargetGoal& operator=(class LookAtTargetGoal const &) = delete;
    LookAtTargetGoal(class LookAtTargetGoal const &) = delete;
    LookAtTargetGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~LookAtTargetGoal();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();

};