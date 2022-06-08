// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class AvoidBlockGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AVOIDBLOCKGOAL
public:
    class AvoidBlockGoal& operator=(class AvoidBlockGoal const &) = delete;
    AvoidBlockGoal(class AvoidBlockGoal const &) = delete;
    AvoidBlockGoal() = delete;
#endif

public:
    /*0*/ virtual ~AvoidBlockGoal();
    /*1*/ virtual bool canUse();
    /*2*/ virtual bool canContinueToUse();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void start();
    /*5*/ virtual void stop();
    /*6*/ virtual void tick();
    /*7*/ virtual void appendDebugInfo(std::string &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_AVOIDBLOCKGOAL
public:
#endif
    MCAPI AvoidBlockGoal(class Mob &);


//private:
    MCAPI bool _isValidTarget(class Block const &) const;

};