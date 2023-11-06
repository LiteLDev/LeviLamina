#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct Description {
public:
    // prevent constructor by default
    Description& operator=(Description const&);
    Description(Description const&);
    Description();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ?getJsonName@MoveControlBasicDescription@@UEBAPEBDXZ
    virtual char const* getJsonName() const = 0;

    // vIndex: 1, symbol: ??1@@UEAA@XZ
    virtual ~Description() = default;

    // vIndex: 2, symbol: ?deserializeData@Description@@UEAAXUDeserializeDataParams@@@Z
    virtual void deserializeData(struct DeserializeDataParams);

    // symbol: ?parseDescription@Description@@QEAAPEAU1@UDeserializeDataParams@@@Z
    MCAPI struct Description* parseDescription(struct DeserializeDataParams);

    // NOLINTEND
};
