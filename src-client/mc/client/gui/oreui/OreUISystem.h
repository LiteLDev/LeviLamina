#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/debug/MemoryTracker.h"
#include "mc/client/gui/oreui/resources/ResourceAllowList.h"
#include "mc/client/gui/oreui/resources/TemporaryTextureHolder.h"
#include "mc/client/gui/oreui/routing/RouterConfiguration.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class IFileAccess;
class IOptions;
class ISceneStack;
class ResourcePackManager;
class SceneFactory;
namespace Core { class FileSystem; }
namespace Core { class Path; }
namespace OreUI { class DevServerListener; }
namespace OreUI { class IRoutePrerequisiteHandler; }
namespace OreUI { class Library; }
namespace OreUI { class Router; }
namespace OreUI { class RouterEventing; }
namespace OreUI { struct DebugData; }
namespace Social { class IUserManager; }
namespace mce { class RenderContext; }
namespace ui { class ScreenTechStackSelector; }
// clang-format on

namespace OreUI {

class OreUISystem {
public:
    // OreUISystem inner types declare
    // clang-format off
    struct CallbackEntry;
    // clang-format on

    // OreUISystem inner types define
    struct CallbackEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, void*>                    token;
        ::ll::TypedStorage<8, 64, ::std::function<void()>> callback;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~CallbackEntry();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

    using ShowDebugToast = ::std::function<void(::std::string const&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::DebugData>>                  mDebugData;
    ::ll::TypedStorage<1, 1, ::OreUI::MemoryTracker>                                 mMemoryTracker;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&)>>           mShowDebugToast;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Core::FileSystem>>     mFileSystem;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IFileAccess>>          mAppPackageFileAccess;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IFileAccess>>          mRawFileAccess;
    ::ll::TypedStorage<8, 8, ::ResourcePackManager const&>                           mPackManager;
    ::ll::TypedStorage<8, 8, ::ui::ScreenTechStackSelector&>                         mScreenTechStackSelector;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager>> mUserManager;
    ::ll::TypedStorage<8, 216, ::OreUI::RouterConfiguration>                         mRouterConfiguration;
    ::ll::TypedStorage<8, 320, ::OreUI::ResourceAllowList>                           mResourceAllowList;
    ::ll::TypedStorage<8, 104, ::OreUI::TemporaryTextureHolder>                      mTemporaryTextureHolder;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::Library>>                    mLibrary;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::DevServerListener>>          mDevServerListener;
    ::ll::TypedStorage<1, 1, bool>                                                   mAppWillRestart;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::OreUISystem::CallbackEntry>>    mRouteConfigurationChangeCallbacks;
    ::ll::TypedStorage<8, 24, ::std::vector<::Bedrock::PubSub::Subscription>>        mOptionSubscriptions;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                       mFlightingTogglesNewFriendsDrawer;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                       mFlightingTogglesTrialMode;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mFlightingTogglesFriendsDrawerOnMultipleScreens;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mFlightingTogglesSettingsScreen;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mFlightingTogglesAccessibilitySettingsScreen;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mFlightingTogglesGeneralSettingsScreen;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mFlightingTogglesAudioSettingsScreen;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mFlightingTogglesAccountSettingsScreen;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mFlightingTogglesVideoSettingsScreen;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mFlightingTogglesKeyboardAndMouseSettingsScreen;
    // NOLINTEND

public:
    // prevent constructor by default
    OreUISystem& operator=(OreUISystem const&);
    OreUISystem(OreUISystem const&);
    OreUISystem();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI OreUISystem(
        ::std::unique_ptr<::OreUI::DebugData>                    debugData,
        ::OreUI::RouterConfiguration                             routerConfiguration,
        ::std::function<void(::std::string const&)>              showDebugToast,
        ::Bedrock::NotNullNonOwnerPtr<::Core::FileSystem> const& fileSystem,
        ::Bedrock::NotNullNonOwnerPtr<::IFileAccess> const&      appPackageFileAccess,
        ::Core::Path const&                                      packagePath,
        ::Bedrock::NotNullNonOwnerPtr<::IFileAccess> const&      rawFileAccess,
        ::ResourcePackManager const&                             packManager,
        ::ui::ScreenTechStackSelector&                           screenTechStackSelector,
        ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager>    userManager
    );

    MCAPI void _initializeLibrary(::Core::Path const& packagePath);

    MCAPI ::std::unique_ptr<::OreUI::Router> createInGameRouter(
        ::std::unique_ptr<::OreUI::IRoutePrerequisiteHandler> prerequisiteHandler,
        ::std::unique_ptr<::OreUI::RouterEventing>            routerEventing,
        ::SceneFactory&                                       sceneFactory,
        ::Bedrock::NotNullNonOwnerPtr<::ISceneStack> const&   sceneStack
    ) const;

    MCAPI ::std::unique_ptr<::OreUI::Router> createOutOfGameRouter(
        ::std::unique_ptr<::OreUI::IRoutePrerequisiteHandler> prerequisiteHandler,
        ::std::unique_ptr<::OreUI::RouterEventing>            routerEventing,
        ::SceneFactory&                                       sceneFactory,
        ::Bedrock::NotNullNonOwnerPtr<::ISceneStack> const&   sceneStack
    ) const;

    MCAPI void onAppPreSuspended(::mce::RenderContext& renderContext);

    MCAPI void registerOptionObservers(::IOptions& options);

    MCAPI void registerRouteConfigurationChangeCallback(void* token, ::std::function<void()> const& callback);

    MCAPI void unregisterRouteConfigurationChangeCallback(void* token);

    MCAPI void update(double time);

    MCAPI ~OreUISystem();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::unique_ptr<::OreUI::DebugData>                    debugData,
        ::OreUI::RouterConfiguration                             routerConfiguration,
        ::std::function<void(::std::string const&)>              showDebugToast,
        ::Bedrock::NotNullNonOwnerPtr<::Core::FileSystem> const& fileSystem,
        ::Bedrock::NotNullNonOwnerPtr<::IFileAccess> const&      appPackageFileAccess,
        ::Core::Path const&                                      packagePath,
        ::Bedrock::NotNullNonOwnerPtr<::IFileAccess> const&      rawFileAccess,
        ::ResourcePackManager const&                             packManager,
        ::ui::ScreenTechStackSelector&                           screenTechStackSelector,
        ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager>    userManager
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI
