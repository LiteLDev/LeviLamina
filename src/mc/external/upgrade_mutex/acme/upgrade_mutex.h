#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace acme {

class upgrade_mutex {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 80> mUnke874b7;
    ::ll::UntypedStorage<8, 72> mUnk60eba0;
    ::ll::UntypedStorage<8, 72> mUnkef1146;
    ::ll::UntypedStorage<4, 4>  mUnkda77d3;
    // NOLINTEND

public:
    // prevent constructor by default
    upgrade_mutex& operator=(upgrade_mutex const&);
    upgrade_mutex(upgrade_mutex const&);
    upgrade_mutex();
};

} // namespace acme
