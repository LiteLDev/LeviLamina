#pragma once

#include "mc/_HeaderOutputPredefine.h"

class InsideBlockEventMap {
public:
    // prevent constructor by default
    InsideBlockEventMap();

public:
    // NOLINTBEGIN
    // symbol: ??0InsideBlockEventMap@@QEAA@AEBV0@@Z
    MCAPI InsideBlockEventMap(class InsideBlockEventMap const&);

    // symbol: ??0InsideBlockEventMap@@QEAA@AEBVBlock@@_N11AEBVActorDefinitionTrigger@@2@Z
    MCAPI InsideBlockEventMap(
        class Block const&                  block,
        bool                                watchEnter,
        bool                                watchExit,
        bool                                ignoreStates,
        class ActorDefinitionTrigger const& enteredEvent,
        class ActorDefinitionTrigger const& exitedEvent
    );

    // symbol: ?getBlock@InsideBlockEventMap@@QEBA?AV?$not_null@PEBVBlock@@@gsl@@XZ
    MCAPI gsl::not_null<class Block const*> getBlock() const;

    // symbol: ?getEnteredEvent@InsideBlockEventMap@@QEBAAEBVActorDefinitionTrigger@@XZ
    MCAPI class ActorDefinitionTrigger const& getEnteredEvent() const;

    // symbol: ?getExitedEvent@InsideBlockEventMap@@QEBAAEBVActorDefinitionTrigger@@XZ
    MCAPI class ActorDefinitionTrigger const& getExitedEvent() const;

    // symbol: ?isActorCurrentlyInside@InsideBlockEventMap@@QEBA_NXZ
    MCAPI bool isActorCurrentlyInside() const;

    // symbol: ?isIgnoringStates@InsideBlockEventMap@@QEBA_NXZ
    MCAPI bool isIgnoringStates() const;

    // symbol: ?isWatchingIfActorEnters@InsideBlockEventMap@@QEBA_NXZ
    MCAPI bool isWatchingIfActorEnters() const;

    // symbol: ?isWatchingIfActorExits@InsideBlockEventMap@@QEBA_NXZ
    MCAPI bool isWatchingIfActorExits() const;

    // symbol: ??4InsideBlockEventMap@@QEAAAEAV0@AEBV0@@Z
    MCAPI class InsideBlockEventMap& operator=(class InsideBlockEventMap const&);

    // symbol: ?setCurrentlyInside@InsideBlockEventMap@@QEAAX_N@Z
    MCAPI void setCurrentlyInside(bool);

    // symbol: ?setWasInside@InsideBlockEventMap@@QEAAX_N@Z
    MCAPI void setWasInside(bool wasInside);

    // symbol: ?wasActorInsideLastTick@InsideBlockEventMap@@QEBA_NXZ
    MCAPI bool wasActorInsideLastTick() const;

    // symbol: ??1InsideBlockEventMap@@QEAA@XZ
    MCAPI ~InsideBlockEventMap();

    // NOLINTEND
};
