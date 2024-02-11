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
    // vIndex: 0, symbol: ?getJsonName@GlideMoveControlDescription@@UEBAPEBDXZ
    virtual char const* getJsonName() const;

    // vIndex: 1, symbol: ??1GlideMoveControlDescription@@UEAA@XZ
    virtual ~GlideMoveControlDescription();

    // vIndex: 2, symbol: ?deserializeData@GlideMoveControlDescription@@UEAAXUDeserializeDataParams@@@Z
    virtual void deserializeData(struct DeserializeDataParams deserializeDataParams);

    // NOLINTEND
};
