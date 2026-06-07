#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/resources/TemporaryTextureHolder.h"
#include "mc/client/gui/oreui/routing/RouterConfiguration.h"
#include "mc/common/SubClientId.h"
#include "mc/deps/core/file/Path.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class IFileAccess;
class IGamefaceTextInputProxy;
class IOptionRegistry;
class ISceneStack;
class SceneFactory;
class TaskGroup;
struct TextBoxStateChange;
namespace Core { class FileSystem; }
namespace Gameface { class ResourceHandlerBroker; }
namespace OreUI { class DevServerListener; }
namespace OreUI { class FacetRegistryFactory; }
namespace OreUI { class IResourceAllowList; }
namespace OreUI { class IRouteMatcher; }
namespace OreUI { class IRoutePrerequisiteHandler; }
namespace OreUI { class Library; }
namespace OreUI { class ResourceAllowList; }
namespace OreUI { class Router; }
namespace OreUI { class RouterEventing; }
namespace OreUI { class SceneProvider; }
namespace OreUI { struct DebugData; }
namespace OreUI { struct LibraryFactoryArguments; }
namespace OreUI { struct RegisterResourceHandlersArguments; }
namespace OreUI { struct ResourceHandlerFactory; }
namespace OreUI { struct ResourceHandlerFactoryArguments; }
namespace OreUI::Detail { class ViewContextFactory; }
namespace mce { class RenderContext; }
namespace mce { class ShaderGroup; }
namespace ui { class ScreenTechStackSelector; }
// clang-format on

namespace OreUI {

class OreUISystem {
public:
    // OreUISystem inner types declare
    // clang-format off
    struct OreUISystemDependencies;
    struct Impl;
    struct CallbackEntry;
    // clang-format on

    // OreUISystem inner types define
    struct OreUISystemDependencies {
    public:
        // OreUISystemDependencies inner types define
        using ResourceHandlerBrokerFactory = ::brstd::move_only_function<::std::unique_ptr<
            ::Gameface::ResourceHandlerBroker>(::OreUI::RegisterResourceHandlersArguments const&) const>;

        using LibraryFactory =
            ::brstd::move_only_function<::std::unique_ptr<::OreUI::Library>(::OreUI::LibraryFactoryArguments&&) const>;

        using ShowDebugToast = ::std::function<void(::std::string const&)>;

        using SceneProviderFactory = ::brstd::move_only_function<::std::unique_ptr<::OreUI::SceneProvider>(
            ::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const&,
            ::std::unique_ptr<::OreUI::FacetRegistryFactory>,
            ::std::unique_ptr<::OreUI::Detail::ViewContextFactory>,
            ::OreUI::Library&
        ) const>;

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<
            8,
            64,
            ::brstd::move_only_function<::std::unique_ptr<
                ::Gameface::ResourceHandlerBroker>(::OreUI::RegisterResourceHandlersArguments const&) const>>
            mCreateResourceHandlerBroker;
        ::ll::TypedStorage<
            8,
            64,
            ::brstd::move_only_function<::std::unique_ptr<::OreUI::Library>(::OreUI::LibraryFactoryArguments&&) const>>
            mCreateLibrary;
        ::ll::TypedStorage<
            8,
            64,
            ::brstd::move_only_function<::std::unique_ptr<::OreUI::SceneProvider>(
                ::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const&,
                ::std::unique_ptr<::OreUI::FacetRegistryFactory>,
                ::std::unique_ptr<::OreUI::Detail::ViewContextFactory>,
                ::OreUI::Library&
            ) const>>
                                                                                mSceneProviderFactory;
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::DebugData>>         mDebugData;
        ::ll::TypedStorage<8, 216, ::OreUI::RouterConfiguration>                mRouterConfiguration;
        ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&)>>  mShowDebugToast;
        ::ll::TypedStorage<8, 32, ::Core::Path>                                 mPackagePath;
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::ResourceAllowList>> mAllowList;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~OreUISystemDependencies();
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCAPI static ::brstd::move_only_function<::std::unique_ptr<::OreUI::Library>(::OreUI::LibraryFactoryArguments&&)
                                                     const>
        createLibraryFactory(
            ::Bedrock::NotNullNonOwnerPtr<::Core::FileSystem> fileSystem,
            ::Bedrock::NotNullNonOwnerPtr<::IFileAccess>      appPackageFileAccess
        );

        MCAPI static ::brstd::move_only_function<::std::unique_ptr<
            ::Gameface::ResourceHandlerBroker>(::OreUI::RegisterResourceHandlersArguments const&) const>
        createResourceHandlerBrokerFactory(::OreUI::ResourceHandlerFactoryArguments const& args);

        MCAPI static ::OreUI::ResourceHandlerFactory
        createResourceHandlerFactory(::OreUI::ResourceHandlerFactoryArguments const& args);

        MCAPI static ::brstd::move_only_function<::std::unique_ptr<::OreUI::SceneProvider>(
            ::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const&,
            ::std::unique_ptr<::OreUI::FacetRegistryFactory>,
            ::std::unique_ptr<::OreUI::Detail::ViewContextFactory>,
            ::OreUI::Library&
        ) const>
        createSceneProviderFactory(::ui::ScreenTechStackSelector& screenTechStackSelector);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    struct Impl {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::OreUI::DebugData>>>         mDebugData;
        ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::OreUI::ResourceAllowList>>> mResourceAllowList;
        ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&)>>                   mShowDebugToast;
        ::ll::TypedStorage<
            8,
            64,
            ::brstd::move_only_function<::std::unique_ptr<::OreUI::SceneProvider>(
                ::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const&,
                ::std::unique_ptr<::OreUI::FacetRegistryFactory>,
                ::std::unique_ptr<::OreUI::Detail::ViewContextFactory>,
                ::OreUI::Library&
            ) const>>
                                                                       mCreateSceneProvider;
        ::ll::TypedStorage<8, 216, ::OreUI::RouterConfiguration>       mRouterConfiguration;
        ::ll::TypedStorage<8, 104, ::Gameface::TemporaryTextureHolder> mTemporaryTextureHolder;
        // NOLINTEND

    public:
        // prevent constructor by default
        Impl();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI explicit Impl(::OreUI::OreUISystem::OreUISystemDependencies& deps);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::OreUI::OreUISystem::OreUISystemDependencies& deps);
        // NOLINTEND
    };

    struct CallbackEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, void*>                    token;
        ::ll::TypedStorage<8, 64, ::std::function<void()>> callback;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::OreUI::OreUISystem::Impl>>> mImpl;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::Library>>                            mLibrary;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::DevServerListener>>                  mDevServerListener;
    ::ll::TypedStorage<1, 1, bool>                                                           mAppWillRestart;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::OreUISystem::CallbackEntry>> mRouteConfigurationChangeCallbacks;
    ::ll::TypedStorage<8, 24, ::std::vector<::Bedrock::PubSub::Subscription>>     mOptionSubscriptions;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                    mFlightingTogglesTrialMode;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mFlightingTogglesFriendsDrawerOnMultipleScreens;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mFlightingTogglesSettingsScreen;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mFlightingTogglesAccessibilitySettingsScreen;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mFlightingTogglesGameSettingsScreen;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mFlightingTogglesLanguageSettingsScreen;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mFlightingTogglesGeneralSettingsScreen;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mFlightingTogglesAudioSettingsScreen;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mFlightingTogglesAccountSettingsScreen;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mFlightingTogglesVideoSettingsScreen;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mFlightingTogglesKeyboardAndMouseSettingsScreen;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mFlightingTogglesMultiplayerScreen;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mFlightingTogglesPreviewSettingsScreen;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mFlightingTogglesStorageSettingsScreen;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mFlightingTogglesTouchSettingsScreen;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mFlightingTogglesCreatorSettingsScreen;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mFlightingTogglesNewSettingsInGame;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mFlightingTogglesNewSettingsOnThirdPartyServers;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mFlightingTogglesControllerScreen;
    // NOLINTEND

public:
    // prevent constructor by default
    OreUISystem();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit OreUISystem(::OreUI::OreUISystem::OreUISystemDependencies&& deps);

    MCAPI void _registerToggleObservers();

    MCAPI bool assetsInitialized() const;

    MCAPI void clearUnusedCachedViews(::SubClientId subClientId);

    MCAPI ::std::unique_ptr<::OreUI::IRouteMatcher> createInGameRouteMatcher(
        ::SceneFactory&                                     sceneFactory,
        ::Bedrock::NotNullNonOwnerPtr<::ISceneStack> const& sceneStack
    ) const;

    MCAPI ::std::unique_ptr<::OreUI::Router> createInGameRouter(
        ::std::unique_ptr<::OreUI::IRoutePrerequisiteHandler> prerequisiteHandler,
        ::std::unique_ptr<::OreUI::RouterEventing>            routerEventing,
        ::SceneFactory&                                       sceneFactory,
        ::Bedrock::NotNullNonOwnerPtr<::ISceneStack> const&   sceneStack
    ) const;

    MCAPI ::std::unique_ptr<::OreUI::IRouteMatcher> createOutOfGameRouteMatcher(
        ::SceneFactory&                                     sceneFactory,
        ::Bedrock::NotNullNonOwnerPtr<::ISceneStack> const& sceneStack
    ) const;

    MCAPI ::std::unique_ptr<::OreUI::Router> createOutOfGameRouter(
        ::std::unique_ptr<::OreUI::IRoutePrerequisiteHandler> prerequisiteHandler,
        ::std::unique_ptr<::OreUI::RouterEventing>            routerEventing,
        ::SceneFactory&                                       sceneFactory,
        ::Bedrock::NotNullNonOwnerPtr<::ISceneStack> const&   sceneStack
    ) const;

    MCAPI ::std::unique_ptr<::OreUI::SceneProvider> createSceneProvider(
        ::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const& clientInstance,
        ::std::unique_ptr<::OreUI::FacetRegistryFactory>        facetRegistryFactory,
        ::std::unique_ptr<::OreUI::Detail::ViewContextFactory>  contextFactory
    ) const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> getResourceAllowList();

    MCAPI ::std::unique_ptr<::IGamefaceTextInputProxy> getTextInputProxy();

    MCAPI void initializeAssetsAsynchronously(::TaskGroup& taskGroup, ::Core::Path const& packagePath);

    MCAPI void initializeRendering(
        ::Bedrock::NonOwnerPointer<::mce::ShaderGroup> const& shaderGroup,
        ::mce::RenderContext&                                 renderContext
    );

    MCAPI void initializeViewsCoordinator();

    MCAPI void onActiveResourcePacksChanged();

    MCAPI void onAppPreSuspended(::mce::RenderContext& renderContext);

    MCAPI void onAppResumed(::Bedrock::NonOwnerPointer<::mce::ShaderGroup> const& shaderGroup);

    MCFOLD void onAppWillRestart();

    MCAPI void onKeyboardDismissed();

    MCAPI void onTrialModeChanged();

    MCAPI void registerOptionObservers(::IOptionRegistry& options);

    MCAPI void registerRouteConfigurationChangeCallback(void* token, ::std::function<void()> const& callback);

    MCAPI void reloadAllViews();

    MCAPI void setTextBoxState(::TextBoxStateChange const& stateChange);

    MCAPI void unregisterRouteConfigurationChangeCallback(void* token);

    MCAPI void update(double time);

    MCAPI ~OreUISystem();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::OreUISystem::OreUISystemDependencies&& deps);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI
