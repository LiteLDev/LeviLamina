#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MobEffectChangeDescription {
public:
    // prevent constructor by default
    MobEffectChangeDescription& operator=(MobEffectChangeDescription const&);
    MobEffectChangeDescription(MobEffectChangeDescription const&);
    MobEffectChangeDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ?getJsonName@MobEffectChangeDescription@@UEBAPEBDXZ
    virtual char const* getJsonName() const;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?deserializeData@MobEffectChangeDescription@@UEAAXUDeserializeDataParams@@@Z
    virtual void deserializeData(struct DeserializeDataParams);

    // symbol: ??1MobEffectChangeDescription@@UEAA@XZ
    MCVAPI ~MobEffectChangeDescription();

    // NOLINTEND
};
