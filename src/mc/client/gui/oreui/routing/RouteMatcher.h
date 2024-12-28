#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

class RouteMatcher {
public:
    // prevent constructor by default
    RouteMatcher& operator=(RouteMatcher const&);
    RouteMatcher(RouteMatcher const&);
    RouteMatcher();
};

} // namespace OreUI
