#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/MoveControlDescription.h"

class GenericMoveControlDescription : public ::MoveControlDescription {
public:
    // prevent constructor by default
    GenericMoveControlDescription& operator=(GenericMoveControlDescription const&) = delete;
    GenericMoveControlDescription(GenericMoveControlDescription const&)            = delete;
    GenericMoveControlDescription()                                                = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ?getJsonName@GenericMoveControlDescription@@UEBAPEBDXZ
    virtual char const* getJsonName() const;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?deserializeData@Description@@UEAAXUDeserializeDataParams@@@Z
    virtual void deserializeData(struct DeserializeDataParams);

    // symbol: ??1GenericMoveControlDescription@@UEAA@XZ
    MCVAPI ~GenericMoveControlDescription();

    // NOLINTEND
};
