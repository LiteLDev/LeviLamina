// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "TargetGoal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class OwnerHurtTargetGoal : public TargetGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OWNERHURTTARGETGOAL
public:
    class OwnerHurtTargetGoal& operator=(class OwnerHurtTargetGoal const &) = delete;
    OwnerHurtTargetGoal(class OwnerHurtTargetGoal const &) = delete;
    OwnerHurtTargetGoal() = delete;
#endif

public:
    /*0*/ virtual ~OwnerHurtTargetGoal();
    /*1*/ virtual bool canUse();
    /*4*/ virtual void start();
    /*8*/ virtual void __unk_vfn_8();
    /*9*/ virtual void __unk_vfn_9();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_OWNERHURTTARGETGOAL
public:
#endif
    MCAPI OwnerHurtTargetGoal(class Mob &, std::vector<struct MobDescriptor> const &);



};