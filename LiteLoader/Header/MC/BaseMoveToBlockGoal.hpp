// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BaseMoveToGoal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class BaseMoveToBlockGoal : public BaseMoveToGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BASEMOVETOBLOCKGOAL
public:
    class BaseMoveToBlockGoal& operator=(class BaseMoveToBlockGoal const &) = delete;
    BaseMoveToBlockGoal(class BaseMoveToBlockGoal const &) = delete;
    BaseMoveToBlockGoal() = delete;
#endif

public:
    /*0*/ virtual ~BaseMoveToBlockGoal();
    /*1*/ virtual bool canUse();
    /*2*/ virtual bool canContinueToUse();
    /*3*/ virtual void __unk_vfn_3();
    /*8*/ virtual void __unk_vfn_8();
    /*9*/ virtual void __unk_vfn_9();
    /*14*/ virtual void _moveToBlock();
    /*17*/ virtual bool findTargetBlock();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BASEMOVETOBLOCKGOAL
public:
#endif
    MCAPI BaseMoveToBlockGoal(class Mob &, float, int, int, int, float, float);



};