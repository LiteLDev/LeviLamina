/**
 * @file  BaseTimedActorFlagDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "BaseGoalDefinition.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class BaseTimedActorFlagDefinition : public BaseGoalDefinition {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BASETIMEDACTORFLAGDEFINITION
public:
    class BaseTimedActorFlagDefinition& operator=(class BaseTimedActorFlagDefinition const &) = delete;
    BaseTimedActorFlagDefinition(class BaseTimedActorFlagDefinition const &) = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BASETIMEDACTORFLAGDEFINITION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BaseTimedActorFlagDefinition();
#endif
    /**
     * @symbol ??0BaseTimedActorFlagDefinition\@\@QEAA\@XZ
     */
    MCAPI BaseTimedActorFlagDefinition();
    /**
     * @symbol ?initialize\@BaseTimedActorFlagDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVBaseTimedActorFlagGoal\@\@\@Z
     */
    MCAPI void initialize(class EntityContext &, class BaseTimedActorFlagGoal &) const;

};
