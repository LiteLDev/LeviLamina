#pragma once

#include "mc/_HeaderOutputPredefine.h"

class InsideBlockEventMap {

public:
    // prevent constructor by default
    InsideBlockEventMap() = delete;

public:
    /**
     * @symbol ??0InsideBlockEventMap\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI InsideBlockEventMap(class InsideBlockEventMap const&); // NOLINT
    /**
     * @symbol ?getEnteredEvent\@InsideBlockEventMap\@\@QEBAAEBVActorDefinitionTrigger\@\@XZ
     */
    MCAPI class ActorDefinitionTrigger const& getEnteredEvent() const; // NOLINT
    /**
     * @symbol ?getExitedEvent\@InsideBlockEventMap\@\@QEBAAEBVActorDefinitionTrigger\@\@XZ
     */
    MCAPI class ActorDefinitionTrigger const& getExitedEvent() const; // NOLINT
    /**
     * @symbol ?isActorCurrentlyInside\@InsideBlockEventMap\@\@QEBA_NXZ
     */
    MCAPI bool isActorCurrentlyInside() const; // NOLINT
    /**
     * @symbol ?isWatchingIfActorEnters\@InsideBlockEventMap\@\@QEBA_NXZ
     */
    MCAPI bool isWatchingIfActorEnters() const; // NOLINT
    /**
     * @symbol ?isWatchingIfActorExits\@InsideBlockEventMap\@\@QEBA_NXZ
     */
    MCAPI bool isWatchingIfActorExits() const; // NOLINT
    /**
     * @symbol ??4InsideBlockEventMap\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class InsideBlockEventMap& operator=(class InsideBlockEventMap const&); // NOLINT
    /**
     * @symbol ?wasActorInsideLastTick\@InsideBlockEventMap\@\@QEBA_NXZ
     */
    MCAPI bool wasActorInsideLastTick() const; // NOLINT
    /**
     * @symbol ??1InsideBlockEventMap\@\@QEAA\@XZ
     */
    MCAPI ~InsideBlockEventMap(); // NOLINT
};
