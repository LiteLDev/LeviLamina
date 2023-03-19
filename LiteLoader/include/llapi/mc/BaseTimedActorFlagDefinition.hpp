/**
 * @file  BaseTimedActorFlagDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class BaseTimedActorFlagDefinition {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BASETIMEDACTORFLAGDEFINITION
public:
    class BaseTimedActorFlagDefinition& operator=(class BaseTimedActorFlagDefinition const &) = delete;
    BaseTimedActorFlagDefinition(class BaseTimedActorFlagDefinition const &) = delete;
#endif

public:
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
