#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Util::Url {

struct ComponentsView {

public:
    // prevent constructor by default
    ComponentsView& operator=(ComponentsView const&) = delete;
    ComponentsView(ComponentsView const&)            = delete;
    ComponentsView()                                 = delete;
};

}; // namespace Util::Url
