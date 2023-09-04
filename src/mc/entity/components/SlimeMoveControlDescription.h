#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/MoveControlDescription.h"

class SlimeMoveControlDescription : public ::MoveControlDescription {
public:
    // prevent constructor by default
    SlimeMoveControlDescription& operator=(SlimeMoveControlDescription const&) = delete;
    SlimeMoveControlDescription(SlimeMoveControlDescription const&)            = delete;
    SlimeMoveControlDescription()                                              = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ?getJsonName@SlimeMoveControlDescription@@UEBAPEBDXZ
    virtual char const* getJsonName() const;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?deserializeData@SlimeMoveControlDescription@@UEAAXUDeserializeDataParams@@@Z
    virtual void deserializeData(struct DeserializeDataParams);

    // symbol: ??1SlimeMoveControlDescription@@UEAA@XZ
    MCVAPI ~SlimeMoveControlDescription();

    // NOLINTEND
};
