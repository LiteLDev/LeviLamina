#pragma once

#include "mc/_HeaderOutputPredefine.h"

class InsideBlockEventMap {

public:
    // prevent constructor by default
    InsideBlockEventMap() = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0InsideBlockEventMap\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI InsideBlockEventMap(class InsideBlockEventMap const&);
    /**
     * @symbol ?getEnteredEvent\@InsideBlockEventMap\@\@QEBAAEBVActorDefinitionTrigger\@\@XZ
     */
    MCAPI class ActorDefinitionTrigger const& getEnteredEvent() const;
    /**
     * @symbol ?getExitedEvent\@InsideBlockEventMap\@\@QEBAAEBVActorDefinitionTrigger\@\@XZ
     */
    MCAPI class ActorDefinitionTrigger const& getExitedEvent() const;
    /**
     * @symbol ?isActorCurrentlyInside\@InsideBlockEventMap\@\@QEBA_NXZ
     */
    MCAPI bool isActorCurrentlyInside() const;
    /**
     * @symbol ?isWatchingIfActorEnters\@InsideBlockEventMap\@\@QEBA_NXZ
     */
    MCAPI bool isWatchingIfActorEnters() const;
    /**
     * @symbol ?isWatchingIfActorExits\@InsideBlockEventMap\@\@QEBA_NXZ
     */
    MCAPI bool isWatchingIfActorExits() const;
    /**
     * @symbol ??4InsideBlockEventMap\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class InsideBlockEventMap& operator=(class InsideBlockEventMap const&);
    /**
     * @symbol ?wasActorInsideLastTick\@InsideBlockEventMap\@\@QEBA_NXZ
     */
    MCAPI bool wasActorInsideLastTick() const;
    /**
     * @symbol ??1InsideBlockEventMap\@\@QEAA\@XZ
     */
    MCAPI ~InsideBlockEventMap();
    // NOLINTEND
};
