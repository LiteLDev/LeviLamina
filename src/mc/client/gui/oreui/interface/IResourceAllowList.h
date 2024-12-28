#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

class IResourceAllowList {
public:
    // prevent constructor by default
    IResourceAllowList& operator=(IResourceAllowList const&);
    IResourceAllowList(IResourceAllowList const&);
    IResourceAllowList();
};

} // namespace OreUI
