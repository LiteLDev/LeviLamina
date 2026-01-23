#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/interface/RouteMode.h"
#include "mc/client/gui/oreui/interface/RoutePrerequisite.h"
#include "mc/client/gui/oreui/routing/RouteFlags.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ISceneStack;
struct SceneFactory;
namespace OreUI { class IRouteMatcher; }
namespace OreUI { struct DebugData; }
namespace OreUI { struct Route; }
namespace OreUI { struct RouteData; }
namespace OreUI { struct RouteDataParser; }
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
        ::ll::UntypedStorage<8, 32> mUnk271542;
        ::ll::UntypedStorage<4, 4>  mUnk55d7bc;
        ::ll::UntypedStorage<8, 8>  mUnk284dd5;
        // NOLINTEND

    public:
        // prevent constructor by default
        EntryPoint& operator=(EntryPoint const&);
        EntryPoint(EntryPoint const&);
        EntryPoint();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 88> mUnk921d6d;
    ::ll::UntypedStorage<8, 24> mUnka09a17;
    ::ll::UntypedStorage<8, 8>  mUnk6faf20;
    ::ll::UntypedStorage<8, 24> mUnkbbc95d;
    ::ll::UntypedStorage<8, 24> mUnk497ad8;
    ::ll::UntypedStorage<8, 24> mUnk5e9fe2;
    ::ll::UntypedStorage<8, 24> mUnk9c15d8;
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
