#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IsSpawnableDescription {
public:
    // prevent constructor by default
    IsSpawnableDescription& operator=(IsSpawnableDescription const&);
    IsSpawnableDescription(IsSpawnableDescription const&);
    IsSpawnableDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getJsonName@IsSpawnableDescription@@UEBAPEBDXZ
    virtual char const* getJsonName() const;

    // NOLINTEND
};
