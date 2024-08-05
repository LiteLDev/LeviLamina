#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/ObjectiveSortOrder.h"

class DisplayObjective {
public:
    // prevent constructor by default
    DisplayObjective& operator=(DisplayObjective const&);
    DisplayObjective(DisplayObjective const&);
    DisplayObjective();

public:
    // NOLINTBEGIN
    MCAPI DisplayObjective(class Objective const& obj, ::ObjectiveSortOrder order);

    MCAPI std::string const getBelowNameStringForId(struct ScoreboardId const&) const;

    MCAPI class Objective const& getObjective() const;

    MCAPI ::ObjectiveSortOrder getSortOrder() const;

    MCAPI bool isDisplaying(class Objective const& targetObjective) const;

    MCAPI bool isValid() const;

    MCAPI static class DisplayObjective deserialize(class CompoundTag const& dataTag, class Scoreboard const& owner);

    MCAPI static std::unique_ptr<class CompoundTag> serialize(class DisplayObjective const& toSave);

    // NOLINTEND
};
