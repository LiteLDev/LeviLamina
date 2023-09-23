#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/MoveControlDescription.h"

class AmphibiousMoveControlDescription : public ::MoveControlDescription {
public:
    // prevent constructor by default
    AmphibiousMoveControlDescription& operator=(AmphibiousMoveControlDescription const&);
    AmphibiousMoveControlDescription(AmphibiousMoveControlDescription const&);
    AmphibiousMoveControlDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ?getJsonName@AmphibiousMoveControlDescription@@UEBAPEBDXZ
    virtual char const* getJsonName() const;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?deserializeData@MobEffectChangeDescription@@UEAAXUDeserializeDataParams@@@Z
    virtual void deserializeData(struct DeserializeDataParams);

    // symbol: ??1AmphibiousMoveControlDescription@@UEAA@XZ
    MCVAPI ~AmphibiousMoveControlDescription();

    // NOLINTEND
};
