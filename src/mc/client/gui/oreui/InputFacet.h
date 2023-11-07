#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

class InputFacet {
public:
    // prevent constructor by default
    InputFacet& operator=(InputFacet const&);
    InputFacet(InputFacet const&);
    InputFacet();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1InputFacet@OreUI@@UEAA@XZ
    virtual ~InputFacet() = default;

    // NOLINTEND
};

}; // namespace OreUI
