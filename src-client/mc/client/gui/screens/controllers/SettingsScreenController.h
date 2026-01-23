#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/SceneType.h"
#include "mc/client/gui/SettingsTabIndex.h"
#include "mc/client/gui/screens/controllers/SettingsScreenControllerBase.h"
#include "mc/client/gui/screens/controllers/SettingsScreenMode.h"
#include "mc/client/network/realms/InviteLink.h"
#include "mc/client/network/realms/World.h"
#include "mc/client/options/OptionSaveDeferral.h"
#include "mc/deps/core/platform/BuildPlatform.h"
#include "mc/world/level/storage/LevelSummary.h"

// auto generated forward declare list
// clang-format off
struct GeneralSettingsScreenController;
struct MainMenuScreenModel;
struct RealmsInviteLinkSettingsScreenController;
struct RealmsSettingsScreenController;
struct SettingsScreenCapabilities;
struct SocialSettingsScreenController;
struct WorldSettingsScreenController;
namespace Json { class Value; }
namespace ui { struct ScreenTechStackSelector; }
// clang-format on

class SettingsScreenController : public ::SettingsScreenControllerBase {
public:
    // SettingsScreenController inner types declare
    // clang-format off
    struct SettingsScreenTabInfo;
    // clang-format on

    // SettingsScreenController inner types define
    struct SettingsScreenTabInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnkd0c649;
        ::ll::UntypedStorage<4, 4>  mUnk62d07f;
        // NOLINTEND

    public:
        // prevent constructor by default
        SettingsScreenTabInfo& operator=(SettingsScreenTabInfo const&);
        SettingsScreenTabInfo(SettingsScreenTabInfo const&);
        SettingsScreenTabInfo();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI SettingsScreenTabInfo(::std::string tabName, int tabVersion);

        MCNAPI ~SettingsScreenTabInfo();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::std::string tabName, int tabVersion);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::SettingsTabIndex>                                   mCurrentTab;
    ::ll::TypedStorage<1, 1, bool>                                                 mInitialTabSelected;
    ::ll::TypedStorage<4, 4, ::SettingsTabIndex>                                   mInitialTab;
    ::ll::TypedStorage<8, 32, ::std::string>                                       mCurrentTabTitle;
    ::ll::TypedStorage<8, 32, ::std::string>                                       mInitialPack;
    ::ll::TypedStorage<4, 4, ::SettingsScreenMode>                                 mSettingsMode;
    ::ll::TypedStorage<1, 1, bool>                                                 mShowRealmsSettings;
    ::ll::TypedStorage<8, 656, ::Realms::World>                                    mWorld;
    ::ll::TypedStorage<1, 1, bool>                                                 mNavigateToMenuOnExit;
    ::ll::TypedStorage<1, 1, bool>                                                 mIsGlobalSettingsScreen;
    ::ll::TypedStorage<1, 1, bool>                                                 mReloadTexturePacksOnExit;
    ::ll::TypedStorage<1, 1, bool const>                                           mMaintainOldFocusOnOpen;
    ::ll::TypedStorage<8, 32, ::std::string>                                       mTTSSettingsScreenName;
    ::ll::TypedStorage<1, 1, bool>                                                 mShowInviteLinkSettings;
    ::ll::TypedStorage<8, 152, ::Realms::InviteLink>                               mInviteLink;
    ::ll::TypedStorage<8, 16, ::OptionSaveDeferral>                                mOptionsSaveDeferral;
    ::ll::TypedStorage<8, 32, ::std::string>                                       mCurrentFocus;
    ::ll::TypedStorage<8, 840, ::LevelSummary>                                     mProvidedLevelSummary;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::RealmsSettingsScreenController>> mRealmsSettingsScreenController;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::RealmsInviteLinkSettingsScreenController>>
        mRealmsInviteLinkSettingsScreenController;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::GeneralSettingsScreenController>> mGeneralSettingsScreenController;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::WorldSettingsScreenController>>   mWorldSettingsScreenController;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::SocialSettingsScreenController>>  mSocialSettingsScreenController;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>                              mOnOpenCallback;
    // NOLINTEND

public:
    // prevent constructor by default
    SettingsScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SettingsScreenController() /*override*/;

    virtual void onOpen() /*override*/;

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;

    virtual ::std::string getAdditionalScreenInfo() const /*override*/;

    virtual void addEventProperties(::std::unordered_map<::std::string, ::std::string>& eventProperties) const
        /*override*/;

    virtual int getScreenVersion() const /*override*/;

    virtual ::ui::SceneType getSceneType() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SettingsScreenController(
        ::std::shared_ptr<::MainMenuScreenModel> model,
        bool                                     createWorld,
        ::SettingsTabIndex                       tabIndex,
        bool                                     maintainOldFocus
    );

    MCAPI SettingsScreenController(
        ::std::shared_ptr<::MainMenuScreenModel> model,
        ::Realms::World const&                   world,
        ::Realms::InviteLink const&              link,
        ::SettingsTabIndex                       tabIndex,
        bool                                     maintainOldFocus
    );

    MCAPI SettingsScreenController(
        ::std::shared_ptr<::MainMenuScreenModel> model,
        ::Realms::World const&                   world,
        ::SettingsTabIndex                       tabIndex,
        bool                                     maintainOldFocus,
        ::std::string                            packId
    );

    MCAPI SettingsScreenController(
        ::std::shared_ptr<::MainMenuScreenModel> model,
        ::LevelSummary const&                    levelSummary,
        ::SettingsTabIndex                       tabIndex,
        bool                                     navToMenuOnExit,
        bool                                     maintainOldFocus,
        ::std::string const&                     initialPackId
    );

    MCAPI SettingsScreenController(
        ::std::shared_ptr<::MainMenuScreenModel> model,
        ::LevelSummary const&                    levelSummary,
        bool                                     createFromTemplate,
        ::std::string                            packId,
        ::std::function<void()>                  onOpenCallback,
        ::SettingsTabIndex                       tabIndex,
        bool                                     maintainOldFocus
    );

    MCAPI ::std::string
    _getGamepadHelperLabelText(::std::string_view localizationKey, ::std::string_view noGamePadKey) const;

    MCAPI void _init();

    MCAPI void _registerBindings();

    MCAPI void _registerEventHandlers();

    MCAPI void _registerSubControllers();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::unordered_map<int, ::SettingsScreenController::SettingsScreenTabInfo> _createScreenInfo();

    MCAPI static void addStaticScreenVars(
        ::Json::Value&                       globalVars,
        bool                                 isWorldCreate,
        bool                                 isWorldEdit,
        bool                                 isTemplateCreate,
        bool                                 isRealmsEdit,
        bool                                 isRealmsSlot,
        bool                                 isMultiplayerHost,
        bool                                 isMultiplayerClient,
        bool                                 isNonConfigRealmsEnv,
        bool                                 supportsGamepad,
        bool                                 supportsKeyboardMouse,
        bool                                 supportsTouch,
        bool                                 supportsFliteTTS,
        bool                                 platformTTSExists,
        bool                                 isEditorModeEnabled,
        bool                                 isTrial,
        bool                                 isPartySystemAvailable,
        ::SettingsScreenCapabilities const&  capabilities,
        ::BuildPlatform const&               buildPlatform,
        ::ui::ScreenTechStackSelector const& screenTechStackSelector
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::unordered_map<int, ::SettingsScreenController::SettingsScreenTabInfo> const& mScreenInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::MainMenuScreenModel> model,
        bool                                     createWorld,
        ::SettingsTabIndex                       tabIndex,
        bool                                     maintainOldFocus
    );

    MCAPI void* $ctor(
        ::std::shared_ptr<::MainMenuScreenModel> model,
        ::Realms::World const&                   world,
        ::Realms::InviteLink const&              link,
        ::SettingsTabIndex                       tabIndex,
        bool                                     maintainOldFocus
    );

    MCAPI void* $ctor(
        ::std::shared_ptr<::MainMenuScreenModel> model,
        ::Realms::World const&                   world,
        ::SettingsTabIndex                       tabIndex,
        bool                                     maintainOldFocus,
        ::std::string                            packId
    );

    MCAPI void* $ctor(
        ::std::shared_ptr<::MainMenuScreenModel> model,
        ::LevelSummary const&                    levelSummary,
        ::SettingsTabIndex                       tabIndex,
        bool                                     navToMenuOnExit,
        bool                                     maintainOldFocus,
        ::std::string const&                     initialPackId
    );

    MCAPI void* $ctor(
        ::std::shared_ptr<::MainMenuScreenModel> model,
        ::LevelSummary const&                    levelSummary,
        bool                                     createFromTemplate,
        ::std::string                            packId,
        ::std::function<void()>                  onOpenCallback,
        ::SettingsTabIndex                       tabIndex,
        bool                                     maintainOldFocus
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
    MCAPI void $onOpen();

    MCAPI void $addStaticScreenVars(::Json::Value& globalVars);

    MCAPI ::std::string $getAdditionalScreenInfo() const;

    MCAPI void $addEventProperties(::std::unordered_map<::std::string, ::std::string>& eventProperties) const;

    MCAPI int $getScreenVersion() const;

    MCFOLD ::ui::SceneType $getSceneType() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForScreenController();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};
