#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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
namespace OreUI::Detail { class BindingRegistryFactory; }
namespace ui { class ScreenTechStackSelector; }
// clang-format on

namespace OreUI {

class SceneProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::OreUI::Library&>                                          mUILibrary;
    ::ll::TypedStorage<8, 8, ::ui::ScreenTechStackSelector const&>                       mScreenTechStackSelector;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::FacetRegistryFactory>>           mFacetRegistryFactory;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::Detail::BindingRegistryFactory>> mBindingRegistryFactory;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IClientInstance>>          mClientInstance;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::RouteModeInputHandler>>          mRouteModeInputHandler;
    // NOLINTEND

public:
    // prevent constructor by default
    SceneProvider& operator=(SceneProvider const&);
    SceneProvider(SceneProvider const&);
    SceneProvider();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SceneProvider(
        ::std::unique_ptr<::OreUI::FacetRegistryFactory>           facetRegistryFactory,
        ::std::unique_ptr<::OreUI::Detail::BindingRegistryFactory> bindingRegistryFactory,
        ::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const&    clientInstance,
        ::OreUI::Library&                                          uiLibrary,
        ::ui::ScreenTechStackSelector const&                       screenTechStackSelector
    );

    MCAPI ::std::shared_ptr<::AbstractScene> createScene(
        ::std::string const&                                url,
        ::OreUI::Router&                                    router,
        ::Bedrock::NotNullNonOwnerPtr<::ISceneStack> const& sceneStack,
        ::OreUI::RouteMode                                  mode,
        ::OreUI::FacetRegistryLocation                      location
    ) const;

    MCAPI void preCacheGameplayViews(::OreUI::Router& router);

    MCAPI void preCacheOutOfGameViews(::OreUI::Router& router);

    MCAPI ~SceneProvider();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::unique_ptr<::OreUI::FacetRegistryFactory>           facetRegistryFactory,
        ::std::unique_ptr<::OreUI::Detail::BindingRegistryFactory> bindingRegistryFactory,
        ::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const&    clientInstance,
        ::OreUI::Library&                                          uiLibrary,
        ::ui::ScreenTechStackSelector const&                       screenTechStackSelector
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI
