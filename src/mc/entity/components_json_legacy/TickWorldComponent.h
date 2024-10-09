#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TickWorldComponent {
public:
    // prevent constructor by default
    TickWorldComponent& operator=(TickWorldComponent const&);
    TickWorldComponent(TickWorldComponent const&);

public:
    // NOLINTBEGIN
    MCAPI TickWorldComponent();

    MCAPI TickWorldComponent(class TickWorldComponent&& other);

    MCAPI uint getChunkRadius() const;

    MCAPI float getMaxDistToPlayers() const;

    MCAPI std::shared_ptr<class ITickingArea> getTickingArea();

    MCAPI bool hasTickingArea() const;

    MCAPI void initFromDefinition(class Actor& owner);

    MCAPI bool isAlwaysActive() const;

    MCAPI class TickWorldComponent& operator=(class TickWorldComponent&& other);

    MCAPI void removeArea();

    MCAPI void setTickingArea(class Actor& owner, std::shared_ptr<class ITickingArea> tickingArea);

    MCAPI void updateArea(class Actor& owner);

    MCAPI ~TickWorldComponent();

    // NOLINTEND
};
