#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/interface/IRouteMatcher.h"
#include "mc/client/gui/oreui/interface/RouteMode.h"
#include "mc/client/gui/oreui/interface/RoutePrerequisite.h"
#include "mc/client/gui/oreui/interface/RouteType.h"
#include "mc/client/gui/oreui/routing/RouteHistoryAction.h"

namespace OreUI {

class RouteMatcher : public ::OreUI::IRouteMatcher {
public:
    // RouteMatcher inner types declare
    // clang-format off
    struct RouteEntry;
    struct DefaultRouteEntry;
    struct RedirectEntry;
    // clang-format on

    // RouteMatcher inner types define
    struct RouteEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string const>       baseScreenId;
        ::ll::TypedStorage<8, 32, ::std::string const>       pattern;
        ::ll::TypedStorage<4, 4, ::OreUI::RouteType>         type;
        ::ll::TypedStorage<4, 4, ::OreUI::RouteMode>         mode;
        ::ll::TypedStorage<4, 4, ::OreUI::RoutePrerequisite> prerequisite;
        ::ll::TypedStorage<8, 64, ::std::function<bool()>>   isActiveCallback;
        ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&, ::OreUI::RouteHistoryAction)>>
            matchCallback;
        // NOLINTEND

    public:
        // prevent constructor by default
        RouteEntry& operator=(RouteEntry const&);
        RouteEntry();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI RouteEntry(::OreUI::RouteMatcher::RouteEntry const&);

        MCAPI RouteEntry(::OreUI::RouteMatcher::RouteEntry&&);

        MCAPI RouteEntry(
            ::std::string const&                                                     baseScreenId,
            ::std::string const&                                                     pattern,
            ::OreUI::RouteType                                                       type,
            ::OreUI::RouteMode                                                       mode,
            ::OreUI::RoutePrerequisite                                               prerequisite,
            ::std::function<bool()>                                                  isActiveCallback,
            ::std::function<void(::std::string const&, ::OreUI::RouteHistoryAction)> matchCallback
        );

        MCAPI ~RouteEntry();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::OreUI::RouteMatcher::RouteEntry const&);

        MCAPI void* $ctor(::OreUI::RouteMatcher::RouteEntry&&);

        MCAPI void* $ctor(
            ::std::string const&                                                     baseScreenId,
            ::std::string const&                                                     pattern,
            ::OreUI::RouteType                                                       type,
            ::OreUI::RouteMode                                                       mode,
            ::OreUI::RoutePrerequisite                                               prerequisite,
            ::std::function<bool()>                                                  isActiveCallback,
            ::std::function<void(::std::string const&, ::OreUI::RouteHistoryAction)> matchCallback
        );
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    struct DefaultRouteEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string const> baseScreenId;
        ::ll::TypedStorage<8, 32, ::std::string const> route;
        // NOLINTEND

    public:
        // prevent constructor by default
        DefaultRouteEntry& operator=(DefaultRouteEntry const&);
        DefaultRouteEntry();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI DefaultRouteEntry(::OreUI::RouteMatcher::DefaultRouteEntry const&);

        MCAPI DefaultRouteEntry(::OreUI::RouteMatcher::DefaultRouteEntry&&);

        MCAPI DefaultRouteEntry(::std::string const& baseScreenId, ::std::string const& route);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCFOLD void* $ctor(::OreUI::RouteMatcher::DefaultRouteEntry const&);

        MCFOLD void* $ctor(::OreUI::RouteMatcher::DefaultRouteEntry&&);

        MCFOLD void* $ctor(::std::string const& baseScreenId, ::std::string const& route);
        // NOLINTEND
    };

    struct RedirectEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string const>                                  pattern;
        ::ll::TypedStorage<8, 64, ::std::function<bool()>>                              isActiveCallback;
        ::ll::TypedStorage<8, 64, ::std::function<::std::string(::std::string const&)>> composer;
        // NOLINTEND

    public:
        // prevent constructor by default
        RedirectEntry& operator=(RedirectEntry const&);
        RedirectEntry();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI RedirectEntry(::OreUI::RouteMatcher::RedirectEntry const&);

        MCAPI RedirectEntry(::OreUI::RouteMatcher::RedirectEntry&&);

        MCAPI RedirectEntry(
            ::std::string const&                                 pattern,
            ::std::function<bool()>                              isActiveCallback,
            ::std::function<::std::string(::std::string const&)> composer
        );
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCFOLD void* $ctor(::OreUI::RouteMatcher::RedirectEntry const&);

        MCAPI void* $ctor(::OreUI::RouteMatcher::RedirectEntry&&);

        MCFOLD void* $ctor(
            ::std::string const&                                 pattern,
            ::std::function<bool()>                              isActiveCallback,
            ::std::function<::std::string(::std::string const&)> composer
        );
        // NOLINTEND
    };

    using IsActiveCallback = ::std::function<bool()>;

    using OnMatchCallback = ::std::function<void(::std::string const&, ::OreUI::RouteHistoryAction)>;

    using RouteRedirectComposer = ::std::function<::std::string(::std::string const&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::RouteMatcher::RouteEntry>>        mRoutes;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::RouteMatcher::DefaultRouteEntry>> mDefaultRoutes;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::RouteMatcher::RedirectEntry>>     mRedirects;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void navigateTo(::std::string const& route, ::OreUI::RouteHistoryAction action) const /*override*/;

    virtual ::std::string redirectIfNeeded(::std::string const& route) const /*override*/;

    virtual bool isSupported(::std::string const& route) const /*override*/;

    virtual bool areCompatible(::std::string const& routeA, ::std::string const& routeB) const /*override*/;

    virtual bool isRouteInDirectory(::std::string const& directory, ::std::string const& route) const /*override*/;

    virtual ::std::optional<::std::string> getDefaultRouteForFile(::std::string const& file) const /*override*/;

    virtual ::OreUI::RouteType getRouteType(::std::string const& route) const /*override*/;

    virtual ::OreUI::RouteMode getRouteMode(::std::string const& route) const /*override*/;

    virtual ::OreUI::RoutePrerequisite getRoutePrerequisite(::std::string const& route) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::optional<::OreUI::RouteMatcher::RedirectEntry> _matchRedirect(::std::string const& route) const;

    MCAPI ::std::optional<::OreUI::RouteMatcher::RouteEntry> _matchRoute(::std::string const& route) const;

    MCAPI void addRedirect(
        ::std::string const&                                 path,
        ::std::function<bool()>                              isActiveCallback,
        ::std::function<::std::string(::std::string const&)> composer
    );

    MCAPI void addRoute(
        ::std::string const&                                                     baseScreenId,
        ::std::string const&                                                     pattern,
        ::OreUI::RouteType                                                       type,
        ::OreUI::RouteMode                                                       mode,
        ::OreUI::RoutePrerequisite                                               prerequisite,
        ::std::function<bool()>                                                  isActiveCallback,
        ::std::function<void(::std::string const&, ::OreUI::RouteHistoryAction)> matchCallback
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $navigateTo(::std::string const& route, ::OreUI::RouteHistoryAction action) const;

    MCAPI ::std::string $redirectIfNeeded(::std::string const& route) const;

    MCAPI bool $isSupported(::std::string const& route) const;

    MCAPI bool $areCompatible(::std::string const& routeA, ::std::string const& routeB) const;

    MCAPI bool $isRouteInDirectory(::std::string const& directory, ::std::string const& route) const;

    MCAPI ::std::optional<::std::string> $getDefaultRouteForFile(::std::string const& file) const;

    MCAPI ::OreUI::RouteType $getRouteType(::std::string const& route) const;

    MCAPI ::OreUI::RouteMode $getRouteMode(::std::string const& route) const;

    MCAPI ::OreUI::RoutePrerequisite $getRoutePrerequisite(::std::string const& route) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
