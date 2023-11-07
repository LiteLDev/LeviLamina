#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

class SafeZoneFacet {
public:
    // prevent constructor by default
    SafeZoneFacet& operator=(SafeZoneFacet const&);
    SafeZoneFacet(SafeZoneFacet const&);
    SafeZoneFacet();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SafeZoneFacet@OreUI@@UEAA@XZ
    virtual ~SafeZoneFacet() = default;

    // NOLINTEND
};

}; // namespace OreUI
