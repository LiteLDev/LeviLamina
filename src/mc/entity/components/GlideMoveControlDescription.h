#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/MoveControlDescription.h"

class GlideMoveControlDescription : public ::MoveControlDescription {
public:
    // prevent constructor by default
    GlideMoveControlDescription& operator=(GlideMoveControlDescription const&);
    GlideMoveControlDescription(GlideMoveControlDescription const&);
    GlideMoveControlDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual char const* getJsonName() const;

    // vIndex: 1
    virtual ~GlideMoveControlDescription();

    // vIndex: 2
    virtual void deserializeData(struct DeserializeDataParams deserializeDataParams);

    // NOLINTEND
};
