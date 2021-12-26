// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class BreakDoorGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BREAKDOORGOAL
public:
    class BreakDoorGoal& operator=(class BreakDoorGoal const&) = delete;
    BreakDoorGoal(class BreakDoorGoal const&) = delete;
    BreakDoorGoal() = delete;
#endif

public:
    /*0*/ virtual ~BreakDoorGoal();
    /*1*/ virtual bool canUse();
    /*2*/ virtual bool canContinueToUse();
    /*3*/ virtual void __unk_vfn_0();
    /*4*/ virtual void start();
    /*5*/ virtual void stop();
    /*6*/ virtual void tick();
    /*7*/ virtual void appendDebugInfo(std::string&) const;
    /*8*/ virtual void __unk_vfn_1();
    /*9*/ virtual void __unk_vfn_2();
    MCAPI BreakDoorGoal(class Mob&);

protected:

private:

};