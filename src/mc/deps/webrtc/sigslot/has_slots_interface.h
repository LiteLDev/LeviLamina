#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace sigslot {

class has_slots_interface {
public:
    // prevent constructor by default
    has_slots_interface& operator=(has_slots_interface const&);
    has_slots_interface(has_slots_interface const&);
    has_slots_interface();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1has_slots_interface@sigslot@@MEAA@XZ
    virtual ~has_slots_interface();

    // NOLINTEND
};

}; // namespace sigslot
