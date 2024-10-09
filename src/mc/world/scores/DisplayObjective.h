#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/scores/Objective.h"

// auto generated inclusion list
#include "mc/world/scores/ObjectiveSortOrder.h"

class DisplayObjective {
public:
    // prevent constructor by default
    Objective const*   mObjective; // this+0x0
    ObjectiveSortOrder mSortOrder; // this+0x8
public:
    // prevent constructor by default
    DisplayObjective() = delete;

public:
    // NOLINTBEGIN
    MCAPI DisplayObjective(class Objective const& obj, ::ObjectiveSortOrder order);

    MCAPI std::string const getBelowNameStringForId(struct ScoreboardId const& scoreboardId) const;

    MCAPI class Objective const& getObjective() const;

    MCAPI ::ObjectiveSortOrder getSortOrder() const;

    MCAPI bool isDisplaying(class Objective const& targetObjective) const;

    MCAPI bool isValid() const;

    MCAPI static class DisplayObjective deserialize(class CompoundTag const& dataTag, class Scoreboard const& owner);

    MCAPI static std::unique_ptr<class CompoundTag> serialize(class DisplayObjective const& toSave);

    // NOLINTEND
};
