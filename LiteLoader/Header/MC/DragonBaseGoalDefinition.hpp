// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class DragonBaseGoalDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DRAGONBASEGOALDEFINITION
public:
    class DragonBaseGoalDefinition& operator=(class DragonBaseGoalDefinition const &) = delete;
    DragonBaseGoalDefinition(class DragonBaseGoalDefinition const &) = delete;
#endif

public:
    /*0*/ virtual ~DragonBaseGoalDefinition();
    /*1*/ virtual bool validateMobType(class Mob &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DRAGONBASEGOALDEFINITION
public:
#endif
    MCAPI DragonBaseGoalDefinition();
    MCAPI void initialize(class EntityContext &, class DragonBaseGoal &);



};