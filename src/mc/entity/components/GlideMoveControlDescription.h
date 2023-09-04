#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/MoveControlDescription.h"

class GlideMoveControlDescription : public ::MoveControlDescription {
public:
    // prevent constructor by default
    GlideMoveControlDescription& operator=(GlideMoveControlDescription const&) = delete;
    GlideMoveControlDescription(GlideMoveControlDescription const&)            = delete;
    GlideMoveControlDescription()                                              = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ?getJsonName@GlideMoveControlDescription@@UEBAPEBDXZ
    virtual char const* getJsonName() const;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?deserializeData@GlideMoveControlDescription@@UEAAXUDeserializeDataParams@@@Z
    virtual void deserializeData(struct DeserializeDataParams);

    // symbol: ??1GlideMoveControlDescription@@UEAA@XZ
    MCVAPI ~GlideMoveControlDescription();

    // NOLINTEND
};
