#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AttackDescription {
public:
    // prevent constructor by default
    AttackDescription& operator=(AttackDescription const&) = delete;
    AttackDescription(AttackDescription const&)            = delete;
    AttackDescription()                                    = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ?getJsonName@AttackDescription@@UEBAPEBDXZ
    virtual char const* getJsonName() const;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?deserializeData@AttackDescription@@UEAAXUDeserializeDataParams@@@Z
    virtual void deserializeData(struct DeserializeDataParams);

    // symbol: ??1AttackDescription@@UEAA@XZ
    MCVAPI ~AttackDescription();

    // NOLINTEND
};
