#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/screens/controllers/MultiplayerLockState.h"
#include "mc/client/gui/screens/controllers/SettingsScreenControllerBase.h"
#include "mc/client/social/ProfileImageOptions.h"
#include "mc/client/sound/SoundOptions.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class GeneralSettingsScreenControllerProxy;
class IContentManager;
class IContentManagerContext;
class MainMenuScreenModel;
class StorageManagementScreenController;
class SubscriptionsScreenController;
class TaskGroup;
struct PackManagerContentSourceImpl;
namespace Json { class Value; }
namespace MSGraph::Models { struct GraphError; }
// clang-format on

class GeneralSettingsScreenController : public ::SettingsScreenControllerBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>           mIsGlobalSettings;
    ::ll::TypedStorage<1, 1, bool>           mReloadTexturePacksOnExit;
    ::ll::TypedStorage<1, 1, bool>           mGlobalResourcePacksVisible;
    ::ll::TypedStorage<1, 1, bool>           mLegacySyncOnly;
    ::ll::TypedStorage<1, 1, bool>           mHasLoadedCloudInfo;
    ::ll::TypedStorage<1, 1, bool>           mCloudConnectionError;
    ::ll::TypedStorage<8, 32, ::std::string> mCloudUploadUrl;
    ::ll::TypedStorage<
        8,
        16,
        ::Bedrock::Threading::Async<::Bedrock::Result<::std::string, ::MSGraph::Models::GraphError>>>
                                                                                        mCloudFolderUrlHandle;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<::std::string, ::std::string>>> mLanguages;
    ::ll::TypedStorage<8, 8, uint64>                                                    mCurrentlySelectedIndex;
    ::ll::TypedStorage<4, 4, int>                                                       mLanguageFocusFrameCountdown;
    ::ll::TypedStorage<8, 8, ::MultiplayerLockState>                                    mMultiplayerState;
    ::ll::TypedStorage<8, 8, ::IContentManager&>                                        mContentManager;
    ::ll::TypedStorage<8, 8, ::PackManagerContentSourceImpl*>                           mResourceContentSource;
    ::ll::TypedStorage<4, 36, ::tm>                                                     mLastRefreshTime;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>            mScreenAnimationsOptionSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>            mGraphicsQualityPresetOptionSubscription;
    ::ll::TypedStorage<8, 32, ::std::string>                              mOverrideMajorVersion;
    ::ll::TypedStorage<8, 32, ::std::string>                              mOverrideMinorVersion;
    ::ll::TypedStorage<8, 32, ::std::string>                              mOverridePatchVersion;
    ::ll::TypedStorage<8, 32, ::std::string>                              mOverrideBetaVersion;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IContentManagerContext>> mContentManagerContext;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::GeneralSettingsScreenControllerProxy>> mProxy;
    ::ll::TypedStorage<8, 72, ::Social::ProfileImageOptions>                            mProfileImage;
    ::ll::TypedStorage<8, 32, ::std::string>                                            mUserDisplayName;
    ::ll::TypedStorage<1, 1, bool>                                                      mDirty;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::StorageManagementScreenController>>
                                                                                  mStorageManagementScreenController;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::SubscriptionsScreenController>> mSubscriptionsScreenController;
    ::ll::TypedStorage<8, 88, ::SoundOptions>                                     mSoundOptions;
    ::ll::TypedStorage<8, 32, ::std::string>                                      mLeakMemoryMB;
    ::ll::TypedStorage<1, 1, bool>                                                mNeedsOfflineTokenAuthorization;
    ::ll::TypedStorage<1, 1, bool>                                                mEnableGameTipsDisplay;
    ::ll::TypedStorage<1, 1, bool>                                                mAdvancedGraphicsExpanded;
    ::ll::TypedStorage<1, 1, bool>                                                mGraphicsApiSwitchingEnabled;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TaskGroup>>                      mTaskGroup;
    // NOLINTEND

public:
    // prevent constructor by default
    GeneralSettingsScreenController& operator=(GeneralSettingsScreenController const&);
    GeneralSettingsScreenController(GeneralSettingsScreenController const&);
    GeneralSettingsScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GeneralSettingsScreenController() /*override*/ = default;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual ::ui::DirtyFlag handleGameEventNotification(::ui::GameEventNotification notification) /*override*/;

    virtual bool canExit() /*override*/;

    virtual void onOpen() /*override*/;

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI GeneralSettingsScreenController(
        ::std::shared_ptr<::MainMenuScreenModel> model,
        bool                                     isGlobalSettings,
        bool                                     reloadTexturePacksOnExit,
        ::std::string const&                     initialPackId,
        bool                                     legacySyncOnly
    );

    MCAPI void _processPendingImports();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void
    addStaticScreenVars(::Json::Value& globalVars, bool isTexturePackRequired, bool showFeedbackButton);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::MainMenuScreenModel> model,
        bool                                     isGlobalSettings,
        bool                                     reloadTexturePacksOnExit,
        ::std::string const&                     initialPackId,
        bool                                     legacySyncOnly
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
