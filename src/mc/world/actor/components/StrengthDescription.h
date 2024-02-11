#pragma once

#include "mc/_HeaderOutputPredefine.h"

class StrengthDescription {
public:
    // prevent constructor by default
    StrengthDescription& operator=(StrengthDescription const&);
    StrengthDescription(StrengthDescription const&);
    StrengthDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ?getJsonName@StrengthDescription@@UEBAPEBDXZ
    virtual char const* getJsonName() const;

    // vIndex: 1, symbol: ??1StrengthDescription@@UEAA@XZ
    virtual ~StrengthDescription();

    // vIndex: 2, symbol: ?deserializeData@StrengthDescription@@UEAAXUDeserializeDataParams@@@Z
    virtual void deserializeData(struct DeserializeDataParams deserializeDataParams);

    // NOLINTEND
};
