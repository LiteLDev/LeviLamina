#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SubscribedObjectives {
public:
    // prevent constructor by default
    SubscribedObjectives& operator=(SubscribedObjectives const&);
    SubscribedObjectives(SubscribedObjectives const&);
    SubscribedObjectives();

public:
    // NOLINTBEGIN
    MCAPI void addObjective(std::string const& objective);

    MCAPI void removeObjective(std::string const& objective);

    MCAPI void sendEvent(std::string const& objective, int score) const;

    // NOLINTEND
};
