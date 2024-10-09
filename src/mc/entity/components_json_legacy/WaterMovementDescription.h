#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorComponentDescription.h"

struct WaterMovementDescription : public ::ActorComponentDescription {
public:
    // prevent constructor by default
    WaterMovementDescription& operator=(WaterMovementDescription const&);
    WaterMovementDescription(WaterMovementDescription const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual char const* getJsonName() const;

    // vIndex: 1
    virtual ~WaterMovementDescription() = default;

    // vIndex: 2
    virtual void deserializeData(struct DeserializeDataParams deserializeDataParams);

    MCAPI WaterMovementDescription();

    // NOLINTEND
};
