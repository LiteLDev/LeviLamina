#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/MoveControlDescription.h"

class SlimeMoveControlDescription : public ::MoveControlDescription {
public:
    // prevent constructor by default
    SlimeMoveControlDescription& operator=(SlimeMoveControlDescription const&);
    SlimeMoveControlDescription(SlimeMoveControlDescription const&);
    SlimeMoveControlDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual char const* getJsonName() const;

    // vIndex: 1
    virtual ~SlimeMoveControlDescription();

    // vIndex: 2
    virtual void deserializeData(struct DeserializeDataParams deserializeDataParams);

    // NOLINTEND
};
