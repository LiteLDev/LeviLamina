#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/control/JumpControlDescription.h"

class DynamicJumpControlDescription : public ::JumpControlDescription {
public:
    // prevent constructor by default
    DynamicJumpControlDescription& operator=(DynamicJumpControlDescription const&);
    DynamicJumpControlDescription(DynamicJumpControlDescription const&);
    DynamicJumpControlDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ?getJsonName@DynamicJumpControlDescription@@UEBAPEBDXZ
    virtual char const* getJsonName() const;

    // vIndex: 1, symbol: ??1DynamicJumpControlDescription@@UEAA@XZ
    virtual ~DynamicJumpControlDescription();

    // vIndex: 2, symbol: ?deserializeData@DynamicJumpControlDescription@@UEAAXUDeserializeDataParams@@@Z
    virtual void deserializeData(struct DeserializeDataParams deserializeDataParams);

    // NOLINTEND
};
