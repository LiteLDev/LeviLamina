#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/MoveControlDescription.h"

class MoveControlDolphinDescription : public ::MoveControlDescription {
public:
    // prevent constructor by default
    MoveControlDolphinDescription& operator=(MoveControlDolphinDescription const&) = delete;
    MoveControlDolphinDescription(MoveControlDolphinDescription const&)            = delete;
    MoveControlDolphinDescription()                                                = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ?getJsonName@MoveControlDolphinDescription@@UEBAPEBDXZ
    virtual char const* getJsonName() const;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?deserializeData@Description@@UEAAXUDeserializeDataParams@@@Z
    virtual void deserializeData(struct DeserializeDataParams);

    // symbol: ??1MoveControlDolphinDescription@@UEAA@XZ
    MCVAPI ~MoveControlDolphinDescription();

    // NOLINTEND
};
