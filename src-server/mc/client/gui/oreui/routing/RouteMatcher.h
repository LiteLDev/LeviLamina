#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

class RouteMatcher {
public:
    // RouteMatcher inner types declare
    // clang-format off
    struct RouteEntry;
    struct DefaultRouteEntry;
    struct RedirectEntry;
    // clang-format on

    // RouteMatcher inner types define
    struct RouteEntry {};

    struct DefaultRouteEntry {};

    struct RedirectEntry {};
};

} // namespace OreUI
