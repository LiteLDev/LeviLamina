#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TickWorldComponent {

public:
    // prevent constructor by default
    TickWorldComponent& operator=(TickWorldComponent const&) = delete;
    TickWorldComponent(TickWorldComponent const&)            = delete;

public:
    /**
     * @symbol ??0TickWorldComponent\@\@QEAA\@XZ
     */
    MCAPI TickWorldComponent(); // NOLINT
    /**
     * @symbol ??0TickWorldComponent\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI TickWorldComponent(class TickWorldComponent&&); // NOLINT
    /**
     * @symbol ?getChunkRadius\@TickWorldComponent\@\@QEBAIXZ
     */
    MCAPI unsigned int getChunkRadius() const; // NOLINT
    /**
     * @symbol ?getMaxDistToPlayers\@TickWorldComponent\@\@QEBAMXZ
     */
    MCAPI float getMaxDistToPlayers() const; // NOLINT
    /**
     * @symbol ?getTickingArea\@TickWorldComponent\@\@QEAA?AV?$shared_ptr\@VITickingArea\@\@\@std\@\@XZ
     */
    MCAPI class std::shared_ptr<class ITickingArea> getTickingArea(); // NOLINT
    /**
     * @symbol ?hasTickingArea\@TickWorldComponent\@\@QEBA_NXZ
     */
    MCAPI bool hasTickingArea() const; // NOLINT
    /**
     * @symbol ?initFromDefinition\@TickWorldComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void initFromDefinition(class Actor&); // NOLINT
    /**
     * @symbol ?isAlwaysActive\@TickWorldComponent\@\@QEBA_NXZ
     */
    MCAPI bool isAlwaysActive() const; // NOLINT
    /**
     * @symbol ??4TickWorldComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class TickWorldComponent& operator=(class TickWorldComponent&&); // NOLINT
    /**
     * @symbol ?removeArea\@TickWorldComponent\@\@QEAAXXZ
     */
    MCAPI void removeArea(); // NOLINT
    /**
     * @symbol ?setTickingArea\@TickWorldComponent\@\@QEAAXAEAVActor\@\@V?$shared_ptr\@VITickingArea\@\@\@std\@\@\@Z
     */
    MCAPI void setTickingArea(class Actor&, class std::shared_ptr<class ITickingArea>); // NOLINT
    /**
     * @symbol ?updateArea\@TickWorldComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void updateArea(class Actor&); // NOLINT
    /**
     * @symbol ??1TickWorldComponent\@\@QEAA\@XZ
     */
    MCAPI ~TickWorldComponent(); // NOLINT
};
