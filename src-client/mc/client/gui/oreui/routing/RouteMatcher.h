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
        ::ll::UntypedStorage<8, 32> mUnkdf8093;
        ::ll::UntypedStorage<8, 32> mUnk23955c;
        ::ll::UntypedStorage<4, 4>  mUnkbfd991;
        ::ll::UntypedStorage<4, 4>  mUnk1877f3;
        ::ll::UntypedStorage<4, 4>  mUnkcda4fa;
        ::ll::UntypedStorage<8, 64> mUnked51b4;
        ::ll::UntypedStorage<8, 64> mUnk2807b2;
        // NOLINTEND

    public:
        // prevent constructor by default
        RouteEntry& operator=(RouteEntry const&);
        RouteEntry(RouteEntry const&);
        RouteEntry();

    public:
        // member functions
        // NOLINTBEGIN
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
        ::ll::UntypedStorage<8, 32> mUnk48da59;
        ::ll::UntypedStorage<8, 32> mUnkdb2a3f;
        // NOLINTEND

    public:
        // prevent constructor by default
        DefaultRouteEntry& operator=(DefaultRouteEntry const&);
        DefaultRouteEntry(DefaultRouteEntry const&);
        DefaultRouteEntry();
    };

    struct RedirectEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnkf410e4;
        ::ll::UntypedStorage<8, 64> mUnk5b856f;
        ::ll::UntypedStorage<8, 64> mUnkff2432;
        // NOLINTEND

    public:
        // prevent constructor by default
        RedirectEntry& operator=(RedirectEntry const&);
        RedirectEntry(RedirectEntry const&);
        RedirectEntry();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI RedirectEntry(
            ::std::string const&                                 pattern,
            ::std::function<bool()>                              isActiveCallback,
            ::std::function<::std::string(::std::string const&)> composer
        );
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCFOLD void* $ctor(
            ::std::string const&                                 pattern,
            ::std::function<bool()>                              isActiveCallback,
            ::std::function<::std::string(::std::string const&)> composer
        );
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk372d3c;
    ::ll::UntypedStorage<8, 24> mUnk186545;
    ::ll::UntypedStorage<8, 24> mUnkc0d45d;
    // NOLINTEND

public:
    // prevent constructor by default
    RouteMatcher& operator=(RouteMatcher const&);
    RouteMatcher(RouteMatcher const&);
    RouteMatcher();

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

    virtual ~RouteMatcher() /*override*/;
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
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
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
