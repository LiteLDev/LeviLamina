#pragma once

#include "Objective.h"
#include "ObjectiveSortOrder.h"
#include "ScoreboardId.h"

class DisplayObjective {
public:
    Objective*         objective;
    ObjectiveSortOrder order;

    MCAPI static std::unique_ptr<ObjectiveCriteria> deserialize(CompoundTag const&, ScoreboardId const&);
    MCAPI std::string const getBelowNameStringForId(ScoreboardId const&) const;
};