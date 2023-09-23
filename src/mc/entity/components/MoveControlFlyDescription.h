#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/MoveControlDescription.h"

class MoveControlFlyDescription : public ::MoveControlDescription {
public:
    // prevent constructor by default
    MoveControlFlyDescription& operator=(MoveControlFlyDescription const&);
    MoveControlFlyDescription(MoveControlFlyDescription const&);
    MoveControlFlyDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ?getJsonName@MoveControlFlyDescription@@UEBAPEBDXZ
    virtual char const* getJsonName() const;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?deserializeData@MobEffectChangeDescription@@UEAAXUDeserializeDataParams@@@Z
    virtual void deserializeData(struct DeserializeDataParams);

    // symbol: ??1MoveControlFlyDescription@@UEAA@XZ
    MCVAPI ~MoveControlFlyDescription();

    // NOLINTEND
};
