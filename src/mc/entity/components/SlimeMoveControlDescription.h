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
    // vIndex: 0, symbol: ?getJsonName@SlimeMoveControlDescription@@UEBAPEBDXZ
    virtual char const* getJsonName() const;

    // vIndex: 1, symbol: ??1SlimeMoveControlDescription@@UEAA@XZ
    virtual ~SlimeMoveControlDescription();

    // vIndex: 2, symbol: ?deserializeData@SlimeMoveControlDescription@@UEAAXUDeserializeDataParams@@@Z
    virtual void deserializeData(struct DeserializeDataParams deserializeDataParams);

    // NOLINTEND
};
