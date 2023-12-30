#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace sigslot {

class _signal_base_interface {
public:
    // prevent constructor by default
    _signal_base_interface& operator=(_signal_base_interface const&);
    _signal_base_interface(_signal_base_interface const&);
    _signal_base_interface();
};

}; // namespace sigslot
