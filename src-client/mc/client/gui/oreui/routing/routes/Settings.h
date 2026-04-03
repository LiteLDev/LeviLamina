#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/SettingsModalType.h"
#include "mc/client/gui/SettingsTabIndex.h"
#include "mc/client/gui/oreui/routing/IEntryPoint.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ILevelListCache;
class ISceneStack;
class RealmsAPI;
class SceneFactory;
class ServerInstance;
class TaskGroup;
namespace OreUI { class RouteMatcher; }
namespace OreUI { struct RouteAction; }
namespace ui { class ScreenTechStackSelector; }
// clang-format on

namespace OreUI::EntryPoints {

class Settings : public ::OreUI::IEntryPoint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<::ILevelListCache&()>> mGetLevelListCache;
    ::ll::TypedStorage<8, 64, ::std::function<::ServerInstance*()>>  mGetServerInstance;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>               mIsInGame;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>               mIsInServer;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>               mIsInRealms;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TaskGroup>>         mAsyncTaskGroup;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::RealmsAPI>>          mRealms;
    ::ll::TypedStorage<8, 8, ::ui::ScreenTechStackSelector&>         mScreenTechStackSelector;
    // NOLINTEND

public:
    // prevent constructor by default
    Settings& operator=(Settings const&);
    Settings(Settings const&);
    Settings();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool shouldAddToConfiguration() const /*override*/;

    virtual void addToMatcher(
        ::OreUI::RouteMatcher&                              routeMatcher,
        ::SceneFactory&                                     sceneFactory,
        ::Bedrock::NotNullNonOwnerPtr<::ISceneStack> const& sceneStack
    ) const /*override*/;

    virtual ~Settings() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Settings(
        ::std::function<::ILevelListCache&()> getLevelListCache,
        ::std::function<::ServerInstance*()>  getServerInstance,
        ::std::function<bool()>               isInGame,
        ::std::function<bool()>               isInServer,
        ::std::function<bool()>               isInRealms,
        ::std::weak_ptr<::RealmsAPI>          realms,
        ::ui::ScreenTechStackSelector&        screenTechStackSelector
    );

    MCAPI void _navigateToScreen(
        ::SettingsTabIndex                                  tabIndex,
        ::std::string const&                                path,
        ::SceneFactory&                                     sceneFactory,
        ::Bedrock::NotNullNonOwnerPtr<::ISceneStack> const& sceneStack,
        ::OreUI::RouteAction const&                         routeAction,
        bool                                                fullscreen,
        bool                                                skipLegacyProgress
    ) const;

    MCAPI bool _tryToPushRealmsManageTab(
        ::std::string const&                                path,
        ::SceneFactory&                                     sceneFactory,
        ::Bedrock::NotNullNonOwnerPtr<::ISceneStack> const& sceneStack,
        ::SettingsTabIndex                                  settingsTabIndex
    ) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::optional<::std::string> composeRoute(::SettingsTabIndex tabIndex);

    MCAPI static ::std::optional<::std::string>
    getRouteFromTabAndModal(::SettingsTabIndex tabIndex, ::SettingsModalType modalType);

    MCAPI static ::std::optional<::SettingsTabIndex> getTabFromPath(::std::string const& path);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> BASE_SCREEN_ID();

    MCAPI static ::std::add_lvalue_reference_t<char const[]> OREUI_ROUTE();

    MCAPI static ::std::add_lvalue_reference_t<char const[]> ROUTE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::function<::ILevelListCache&()> getLevelListCache,
        ::std::function<::ServerInstance*()>  getServerInstance,
        ::std::function<bool()>               isInGame,
        ::std::function<bool()>               isInServer,
        ::std::function<bool()>               isInRealms,
        ::std::weak_ptr<::RealmsAPI>          realms,
        ::ui::ScreenTechStackSelector&        screenTechStackSelector
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
    MCFOLD bool $shouldAddToConfiguration() const;

    MCAPI void $addToMatcher(
        ::OreUI::RouteMatcher&                              routeMatcher,
        ::SceneFactory&                                     sceneFactory,
        ::Bedrock::NotNullNonOwnerPtr<::ISceneStack> const& sceneStack
    ) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI::EntryPoints
