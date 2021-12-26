// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class MoveToBlockGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVETOBLOCKGOAL
public:
    class MoveToBlockGoal& operator=(class MoveToBlockGoal const&) = delete;
    MoveToBlockGoal(class MoveToBlockGoal const&) = delete;
    MoveToBlockGoal() = delete;
#endif

public:
    /*0*/ virtual ~MoveToBlockGoal();
    /*1*/ virtual bool canUse();
    /*2*/ virtual bool canContinueToUse();
    /*3*/ virtual void __unk_vfn_0();
    /*4*/ virtual void start();
    /*5*/ virtual void stop();
    /*6*/ virtual void tick();
    /*7*/ virtual void appendDebugInfo(std::string&) const;
    /*8*/ virtual void __unk_vfn_1();
    /*9*/ virtual void __unk_vfn_2();
    MCAPI MoveToBlockGoal(class Mob&, float, int, int, int, int, float, class Vec3, float, enum TargetSelectionMethod, std::vector<class DefinitionTrigger>, std::vector<class DefinitionTrigger>, std::vector<class ItemDescriptor>);

protected:

private:
    MCAPI void _checkIfStuck();
    MCAPI bool _isValidTarget(class Block const&) const;
    MCAPI void _moveToBlock();
    MCAPI bool _pathIsValid(class Path const*);

};