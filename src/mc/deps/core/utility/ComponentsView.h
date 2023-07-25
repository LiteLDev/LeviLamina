#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Util::Url {

struct ComponentsView {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_UTIL_URL_COMPONENTSVIEW
public:
    ComponentsView& operator=(ComponentsView const&) = delete;
    ComponentsView(ComponentsView const&)            = delete;
    ComponentsView()                                 = delete;
#endif

public:
};

}; // namespace Util::Url
