#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Poi {

class Manager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnkd7ecdb;
    ::ll::UntypedStorage<8, 288> mUnk3cda98;
    // NOLINTEND

public:
    // prevent constructor by default
    Manager& operator=(Manager const&);
    Manager(Manager const&);
    Manager();
};

} // namespace Poi
