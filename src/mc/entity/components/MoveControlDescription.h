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
    // vIndex: 1, symbol: __gen_??1MoveControlDescription@@UEAA@XZ
    virtual ~MoveControlDescription() = default;

    // vIndex: 2, symbol: ?deserializeData@MoveControlDescription@@UEAAXUDeserializeDataParams@@@Z
    virtual void deserializeData(struct DeserializeDataParams deserializeDataParams);

    // NOLINTEND
};
