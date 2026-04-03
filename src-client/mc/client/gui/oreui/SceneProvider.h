#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/ViewCacheMode.h"
#include "mc/client/gui/oreui/interface/FacetRegistryLocation.h"
#include "mc/client/gui/oreui/interface/RouteMode.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class AbstractScene;
class IClientInstance;
class ISceneStack;
namespace OreUI { class FacetRegistryFactory; }
namespace OreUI { class Library; }
namespace OreUI { class RouteModeInputHandler; }
namespace OreUI { class Router; }
namespace OreUI { struct ViewId; }
namespace OreUI::Detail { class ViewContextFactory; }
namespace ui { class ScreenTechStackSelector; }
// clang-format on

namespace OreUI {

class SceneProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::OreUI::Library&>                                      mUILibrary;
    ::ll::TypedStorage<8, 8, ::ui::ScreenTechStackSelector const&>                   mScreenTechStackSelector;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::FacetRegistryFactory>>       mFacetRegistryFactory;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::Detail::ViewContextFactory>> mContextFactory;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IClientInstance>>      mClientInstance;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::RouteModeInputHandler>>      mRouteModeInputHandler;
    // NOLINTEND

public:
    // prevent constructor by default
    SceneProvider& operator=(SceneProvider const&);
    SceneProvider(SceneProvider const&);
    SceneProvider();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::OreUI::ViewId _createView(
        ::std::string const&           url,
        ::OreUI::FacetRegistryLocation location,
        ::OreUI::ViewCacheMode         cacheMode
    ) const;

    MCAPI ::std::shared_ptr<::AbstractScene> createScene(
        ::std::string const&                                url,
        ::OreUI::Router&                                    router,
        ::Bedrock::NotNullNonOwnerPtr<::ISceneStack> const& sceneStack,
        ::OreUI::RouteMode                                  mode,
        ::OreUI::FacetRegistryLocation                      location
    ) const;

    MCAPI void preCacheGameplayViews();

    MCAPI void preCacheOutOfGameViews();
    // NOLINTEND
};

} // namespace OreUI
