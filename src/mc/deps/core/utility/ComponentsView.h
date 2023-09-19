#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Util::Url {

struct ComponentsView {
public:
    // prevent constructor by default
    ComponentsView& operator=(ComponentsView const&);
    ComponentsView(ComponentsView const&);
    ComponentsView();
};

}; // namespace Util::Url
