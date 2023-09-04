#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorComponentDescription.h"

struct WaterMovementDescription : public ::ActorComponentDescription {
public:
    // prevent constructor by default
    WaterMovementDescription& operator=(WaterMovementDescription const&) = delete;
    WaterMovementDescription(WaterMovementDescription const&)            = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ?getJsonName@WaterMovementDescription@@UEBAPEBDXZ
    virtual char const* getJsonName() const;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?deserializeData@WaterMovementDescription@@UEAAXUDeserializeDataParams@@@Z
    virtual void deserializeData(struct DeserializeDataParams);

    // symbol: ??0WaterMovementDescription@@QEAA@XZ
    MCAPI WaterMovementDescription();

    // NOLINTEND
};
