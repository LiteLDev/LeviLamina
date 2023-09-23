#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/MoveControlDescription.h"

class MoveControlHoverDescription : public ::MoveControlDescription {
public:
    // prevent constructor by default
    MoveControlHoverDescription& operator=(MoveControlHoverDescription const&);
    MoveControlHoverDescription(MoveControlHoverDescription const&);
    MoveControlHoverDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ?getJsonName@MoveControlHoverDescription@@UEBAPEBDXZ
    virtual char const* getJsonName() const;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?deserializeData@MobEffectChangeDescription@@UEAAXUDeserializeDataParams@@@Z
    virtual void deserializeData(struct DeserializeDataParams);

    // symbol: ??1MoveControlHoverDescription@@UEAA@XZ
    MCVAPI ~MoveControlHoverDescription();

    // NOLINTEND
};
