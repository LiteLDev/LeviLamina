// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class RandomSitGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RANDOMSITGOAL
public:
    class RandomSitGoal& operator=(class RandomSitGoal const &) = delete;
    RandomSitGoal(class RandomSitGoal const &) = delete;
    RandomSitGoal() = delete;
#endif

public:
    /*0*/ virtual ~RandomSitGoal();
    /*1*/ virtual bool canUse();
    /*2*/ virtual bool canContinueToUse();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void start();
    /*5*/ virtual void stop();
    /*6*/ virtual void __unk_vfn_6();
    /*7*/ virtual void appendDebugInfo(std::string &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RANDOMSITGOAL
public:
#endif
    MCAPI RandomSitGoal(class Mob &, float, float, float, float);



};