#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/interface/RouteMode.h"
#include "mc/client/gui/oreui/interface/RoutePrerequisite.h"
#include "mc/client/gui/oreui/interface/RouteType.h"
#include "mc/client/gui/oreui/routing/RouteHistoryAction.h"

namespace OreUI {

class IRouteMatcher {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IRouteMatcher() = default;

    virtual void navigateTo(::std::string const&, ::OreUI::RouteHistoryAction) const = 0;

    virtual ::std::string redirectIfNeeded(::std::string const&) const = 0;

    virtual bool isSupported(::std::string const&) const = 0;

    virtual bool areCompatible(::std::string const&, ::std::string const&) const = 0;

    virtual bool isRouteInDirectory(::std::string const&, ::std::string const&) const = 0;

    virtual ::std::optional<::std::string> getDefaultRouteForFile(::std::string const&) const = 0;

    virtual ::OreUI::RouteType getRouteType(::std::string const&) const = 0;

    virtual ::OreUI::RouteMode getRouteMode(::std::string const&) const = 0;

    virtual ::OreUI::RoutePrerequisite getRoutePrerequisite(::std::string const&) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace OreUI
