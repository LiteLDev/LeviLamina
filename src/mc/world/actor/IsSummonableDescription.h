#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IsSummonableDescription {
public:
    // prevent constructor by default
    IsSummonableDescription& operator=(IsSummonableDescription const&);
    IsSummonableDescription(IsSummonableDescription const&);
    IsSummonableDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~IsSummonableDescription() = default;

    // vIndex: 1, symbol: ?getJsonName@IsSummonableDescription@@UEBAPEBDXZ
    virtual char const* getJsonName() const;

    // NOLINTEND
};
