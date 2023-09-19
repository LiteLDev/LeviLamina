#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorComponentDescription.h"

struct MoveControlDescription : public ::ActorComponentDescription {
public:
    // prevent constructor by default
    MoveControlDescription& operator=(MoveControlDescription const&);
    MoveControlDescription(MoveControlDescription const&);
    MoveControlDescription();

public:
    // NOLINTBEGIN
    // symbol: ?deserializeData@MoveControlDescription@@UEAAXUDeserializeDataParams@@@Z
    MCVAPI void deserializeData(struct DeserializeDataParams);

    // NOLINTEND
};
