#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

class ClipboardFacet {
public:
    // prevent constructor by default
    ClipboardFacet& operator=(ClipboardFacet const&);
    ClipboardFacet(ClipboardFacet const&);
    ClipboardFacet();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ClipboardFacet@OreUI@@UEAA@XZ
    virtual ~ClipboardFacet() = default;

    // NOLINTEND
};

}; // namespace OreUI
