#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AttackDescription {
public:
    // prevent constructor by default
    AttackDescription& operator=(AttackDescription const&);
    AttackDescription(AttackDescription const&);
    AttackDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ?getJsonName@AttackDescription@@UEBAPEBDXZ
    virtual char const* getJsonName() const;

    // vIndex: 1, symbol: ??1AttackDescription@@UEAA@XZ
    virtual ~AttackDescription();

    // vIndex: 2, symbol: ?deserializeData@AttackDescription@@UEAAXUDeserializeDataParams@@@Z
    virtual void deserializeData(struct DeserializeDataParams deserializeDataParams);

    // NOLINTEND
};
