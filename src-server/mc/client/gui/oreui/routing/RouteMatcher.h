#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

struct RouteMatcher {
public:
    // RouteMatcher inner types declare
    // clang-format off
    struct DefaultRouteEntry;
    struct RedirectEntry;
    struct RouteEntry;
    // clang-format on

    // RouteMatcher inner types define
    struct DefaultRouteEntry {};

    struct RedirectEntry {};

    struct RouteEntry {};
};

} // namespace OreUI
