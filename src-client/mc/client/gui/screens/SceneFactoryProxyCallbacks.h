#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/CraftingType.h"
#include "mc/client/gui/SettingsTabIndex.h"
#include "mc/client/gui/screens/models/PlayScreenDefaultTab.h"

// auto generated forward declare list
// clang-format off
class AbstractScene;
class MainMenuScreenModel;
struct LevelSummary;
struct StoreDataDrivenScreenParams;
// clang-format on

struct SceneFactoryProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<::std::shared_ptr<::AbstractScene>()>> mCreateAddEditExternalServerScreen;
    ::ll::TypedStorage<8, 64, ::std::function<::std::shared_ptr<::AbstractScene>(::LevelSummary const&)>>
                                                                                     mCreateEditWorldScreen;
    ::ll::TypedStorage<8, 64, ::std::function<::std::shared_ptr<::AbstractScene>()>> mCreateHowToPlayScreen;
    ::ll::TypedStorage<8, 64, ::std::function<::std::shared_ptr<::AbstractScene>(::CraftingType)>>
                                                                                     mCreateInventoryScreen;
    ::ll::TypedStorage<8, 64, ::std::function<::std::shared_ptr<::AbstractScene>()>> mCreateNewRealmScreen;
    ::ll::TypedStorage<8, 64, ::std::function<::std::shared_ptr<::AbstractScene>()>> mCreateNXSignInScreen;
    ::ll::TypedStorage<8, 64, ::std::function<::std::shared_ptr<::AbstractScene>(::SettingsTabIndex)>>
        mCreateOptionsScreen;
    ::ll::TypedStorage<8, 64, ::std::function<::std::shared_ptr<::AbstractScene>(::PlayScreenDefaultTab)>>
                                                                                         mCreatePlayScreen;
    ::ll::TypedStorage<8, 64, ::std::function<::std::shared_ptr<::AbstractScene>()>>     mCreateSkinPickerScreen;
    ::ll::TypedStorage<8, 64, ::std::function<::std::shared_ptr<::AbstractScene>(bool)>> mCreateStartMenuScreen;
    ::ll::TypedStorage<8, 64, ::std::function<::std::shared_ptr<::AbstractScene>(::StoreDataDrivenScreenParams const&)>>
                                                                                           mCreateStoreHomeScreen;
    ::ll::TypedStorage<8, 64, ::std::function<::std::shared_ptr<::AbstractScene>()>>       mCreatePauseScreen;
    ::ll::TypedStorage<8, 64, ::std::function<::std::shared_ptr<::AbstractScene>()>>       mCreateWorldTemplateScreen;
    ::ll::TypedStorage<8, 64, ::std::function<::std::shared_ptr<::AbstractScene>()>>       mCreateWorldUpsellScreen;
    ::ll::TypedStorage<8, 64, ::std::function<::std::shared_ptr<::AbstractScene>()>>       mCreateChatScreen;
    ::ll::TypedStorage<8, 64, ::std::function<::std::shared_ptr<::AbstractScene>()>>       mCreatePortfolioScreen;
    ::ll::TypedStorage<8, 64, ::std::function<::std::shared_ptr<::AbstractScene>()>>       mCreateDeathScreen;
    ::ll::TypedStorage<8, 64, ::std::function<::std::shared_ptr<::AbstractScene>()>>       mCreateCreditsScreen;
    ::ll::TypedStorage<8, 64, ::std::function<::std::shared_ptr<::AbstractScene>()>>       mCreateGlobalPauseScreen;
    ::ll::TypedStorage<8, 64, ::std::function<::std::shared_ptr<::MainMenuScreenModel>()>> mCreateMainMenuScreenModel;
    ::ll::TypedStorage<8, 64, ::std::function<::std::shared_ptr<::AbstractScene>(uint, ::std::string const&)>>
        mCreateServerForm;
    // NOLINTEND

public:
    // prevent constructor by default
    SceneFactoryProxyCallbacks& operator=(SceneFactoryProxyCallbacks const&);
    SceneFactoryProxyCallbacks();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SceneFactoryProxyCallbacks(::SceneFactoryProxyCallbacks const&);

    MCAPI ~SceneFactoryProxyCallbacks();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SceneFactoryProxyCallbacks const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
