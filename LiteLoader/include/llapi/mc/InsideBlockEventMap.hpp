/**
 * @file  MC/InsideBlockEventMap.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class InsideBlockEventMap.
 *
 */
class InsideBlockEventMap {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INSIDEBLOCKEVENTMAP
public:
    class InsideBlockEventMap& operator=(class InsideBlockEventMap const &) = delete;
    InsideBlockEventMap() = delete;
#endif

public:
    /**
     * @hash   -754543351
     * @symbol ??0InsideBlockEventMap@@QEAA@AEBVBlock@@_N11AEBVActorDefinitionTrigger@@2@Z
     */
    MCAPI InsideBlockEventMap(class Block const &, bool, bool, bool, class ActorDefinitionTrigger const &, class ActorDefinitionTrigger const &);
    /**
     * @hash   -1686351695
     * @symbol ??0InsideBlockEventMap@@QEAA@AEBV0@@Z
     */
    MCAPI InsideBlockEventMap(class InsideBlockEventMap const &);
    /**
     * @hash   1392194891
     * @symbol ?getBlock@InsideBlockEventMap@@QEBA?AV?$not_null@PEBVBlock@@@gsl@@XZ
     */
    MCAPI class gsl::not_null<class Block const *> getBlock() const;
    /**
     * @hash   2146246404
     * @symbol ?getEnteredEvent@InsideBlockEventMap@@QEBAAEBVActorDefinitionTrigger@@XZ
     */
    MCAPI class ActorDefinitionTrigger const & getEnteredEvent() const;
    /**
     * @hash   -462798458
     * @symbol ?getExitedEvent@InsideBlockEventMap@@QEBAAEBVActorDefinitionTrigger@@XZ
     */
    MCAPI class ActorDefinitionTrigger const & getExitedEvent() const;
    /**
     * @hash   -2113298870
     * @symbol ?isActorCurrentlyInside@InsideBlockEventMap@@QEBA_NXZ
     */
    MCAPI bool isActorCurrentlyInside() const;
    /**
     * @hash   -2047726438
     * @symbol ?isIgnoringStates@InsideBlockEventMap@@QEBA_NXZ
     */
    MCAPI bool isIgnoringStates() const;
    /**
     * @hash   247950568
     * @symbol ?isWatchingIfActorEnters@InsideBlockEventMap@@QEBA_NXZ
     */
    MCAPI bool isWatchingIfActorEnters() const;
    /**
     * @hash   -247709542
     * @symbol ?isWatchingIfActorExits@InsideBlockEventMap@@QEBA_NXZ
     */
    MCAPI bool isWatchingIfActorExits() const;
    /**
     * @hash   -656899390
     * @symbol ?setCurrentlyInside@InsideBlockEventMap@@QEAAX_N@Z
     */
    MCAPI void setCurrentlyInside(bool);
    /**
     * @hash   165282802
     * @symbol ?setWasInside@InsideBlockEventMap@@QEAAX_N@Z
     */
    MCAPI void setWasInside(bool);
    /**
     * @hash   -1313935318
     * @symbol ?wasActorInsideLastTick@InsideBlockEventMap@@QEBA_NXZ
     */
    MCAPI bool wasActorInsideLastTick() const;
    /**
     * @hash   -2001073073
     * @symbol ??1InsideBlockEventMap@@QEAA@XZ
     */
    MCAPI ~InsideBlockEventMap();

};