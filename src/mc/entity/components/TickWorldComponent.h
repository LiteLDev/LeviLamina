#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TickWorldComponent {
public:
    // prevent constructor by default
    TickWorldComponent& operator=(TickWorldComponent const&);
    TickWorldComponent(TickWorldComponent const&);

public:
    // NOLINTBEGIN
    // symbol: ??0TickWorldComponent@@QEAA@XZ
    MCAPI TickWorldComponent();

    // symbol: ??0TickWorldComponent@@QEAA@$$QEAV0@@Z
    MCAPI TickWorldComponent(class TickWorldComponent&& other);

    // symbol: ?getChunkRadius@TickWorldComponent@@QEBAIXZ
    MCAPI uint getChunkRadius() const;

    // symbol: ?getMaxDistToPlayers@TickWorldComponent@@QEBAMXZ
    MCAPI float getMaxDistToPlayers() const;

    // symbol: ?getTickingArea@TickWorldComponent@@QEAA?AV?$shared_ptr@VITickingArea@@@std@@XZ
    MCAPI std::shared_ptr<class ITickingArea> getTickingArea();

    // symbol: ?hasTickingArea@TickWorldComponent@@QEBA_NXZ
    MCAPI bool hasTickingArea() const;

    // symbol: ?initFromDefinition@TickWorldComponent@@QEAAXAEAVActor@@@Z
    MCAPI void initFromDefinition(class Actor& owner);

    // symbol: ?isAlwaysActive@TickWorldComponent@@QEBA_NXZ
    MCAPI bool isAlwaysActive() const;

    // symbol: ??4TickWorldComponent@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class TickWorldComponent& operator=(class TickWorldComponent&& other);

    // symbol: ?removeArea@TickWorldComponent@@QEAAXXZ
    MCAPI void removeArea();

    // symbol: ?setTickingArea@TickWorldComponent@@QEAAXAEAVActor@@V?$shared_ptr@VITickingArea@@@std@@@Z
    MCAPI void setTickingArea(class Actor& owner, std::shared_ptr<class ITickingArea> tickingArea);

    // symbol: ?updateArea@TickWorldComponent@@QEAAXAEAVActor@@@Z
    MCAPI void updateArea(class Actor& owner);

    // symbol: ??1TickWorldComponent@@QEAA@XZ
    MCAPI ~TickWorldComponent();

    // NOLINTEND
};
