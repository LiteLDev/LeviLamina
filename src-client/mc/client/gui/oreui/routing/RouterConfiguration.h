#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/interface/RouteMode.h"
#include "mc/client/gui/oreui/interface/RoutePrerequisite.h"
#include "mc/client/gui/oreui/routing/RouteDataParser.h"
#include "mc/client/gui/oreui/routing/RouteFlags.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ISceneStack;
class SceneFactory;
namespace OreUI { class IEntryPoint; }
namespace OreUI { class IRouteMatcher; }
namespace OreUI { struct DebugData; }
namespace OreUI { struct Route; }
namespace OreUI { struct RouteData; }
namespace OreUI { struct RouteJsonMetadata; }
// clang-format on

namespace OreUI {

class RouterConfiguration {
public:
    // RouterConfiguration inner types declare
    // clang-format off
    struct EntryPoint;
    // clang-format on

    // RouterConfiguration inner types define
    struct EntryPoint {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string const>                    route;
        ::ll::TypedStorage<4, 4, ::OreUI::EntryPoints::RouteFlags const>  flags;
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::IEntryPoint>> definition;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 88, ::OreUI::RouteDataParser>                                mRouteDataParser;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::RouteJsonMetadata>>               mCurrentRouteJsonMetadata;
    ::ll::TypedStorage<8, 8, ::OreUI::DebugData const&>                                mDebugData;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::Route>>                           mDefaultRoutes;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::Route>>                           mInGameRoutes;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::Route>>                           mOutOfGameRoutes;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::RouterConfiguration::EntryPoint>> mEntryPoints;
    // NOLINTEND

public:
    // prevent constructor by default
    RouterConfiguration& operator=(RouterConfiguration const&);
    RouterConfiguration(RouterConfiguration const&);
    RouterConfiguration();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RouterConfiguration(::OreUI::RouterConfiguration&&);

    MCAPI RouterConfiguration(::OreUI::RouteDataParser&& routeDataParser, ::OreUI::DebugData const& debugData);

    MCAPI void _addRoute(
        ::std::vector<::OreUI::Route>& routes,
        ::std::string const&           fileName,
        ::std::string const&           route,
        ::OreUI::RouteMode             mode,
        ::OreUI::RoutePrerequisite     prerequisite
    ) const;

    MCAPI void _fillRoutes(::std::vector<::OreUI::RouteData> const& routeData);

    MCAPI ::std::unique_ptr<::OreUI::IRouteMatcher> createRouteMatcher(
        ::SceneFactory&                                     sceneFactory,
        ::Bedrock::NotNullNonOwnerPtr<::ISceneStack> const& sceneStack,
        ::OreUI::EntryPoints::RouteFlags                    scope
    ) const;

    MCAPI ::std::tuple<::std::vector<::OreUI::RouteData>, ::std::vector<::OreUI::RouteJsonMetadata>>
    getRouteData() const;

    MCAPI bool reload();

    MCAPI ~RouterConfiguration();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::RouterConfiguration&&);

    MCAPI void* $ctor(::OreUI::RouteDataParser&& routeDataParser, ::OreUI::DebugData const& debugData);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI
