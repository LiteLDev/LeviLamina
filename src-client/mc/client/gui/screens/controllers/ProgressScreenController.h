#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/ProgressContentType.h"
#include "mc/client/gui/SceneType.h"
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"
#include "mc/deps/application/common/utility/ScopedCPUBoost.h"
#include "mc/deps/core/utility/BasicTimer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/network/packet/ResourcePackResponse.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
class ContentView;
class IContentManagerContext;
class MinecraftScreenModel;
struct ProgressHandler;
namespace Json { class Value; }
namespace Progress { struct ProgressTips; }
// clang-format on

class ProgressScreenController : public ::MinecraftScreenController {
public:
    // ProgressScreenController inner types define
    using ProgressDurationPair = ::std::pair<::std::string, float>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool const>                                          mSendProgressTelem;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>             mProgressHandlerStartTime;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<::std::string, float>>>   mProgressHandlerTimes;
    ::ll::TypedStorage<1, 1, bool>                                                mInitiated;
    ::ll::TypedStorage<1, 1, bool>                                                mNext;
    ::ll::TypedStorage<1, 1, bool>                                                mForceRenderBelow;
    ::ll::TypedStorage<4, 4, float>                                               mBackgroundFillAlpha;
    ::ll::TypedStorage<8, 8, int64>                                               mLocatingStartTime;
    ::ll::TypedStorage<8, 32, ::std::string>                                      mCalledFrom;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ProgressHandler>>                mProgressHandler;
    ::ll::TypedStorage<8, 40, ::std::deque<::std::unique_ptr<::ProgressHandler>>> mProgressHandlerList;
    ::ll::TypedStorage<4, 4, float>                                       mAccumulatedProgressPercentageForHandlers;
    ::ll::TypedStorage<4, 4, int>                                         mTotalNumberOfProgressHandlers;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IContentManagerContext>> mContentManagerContext;
    ::ll::TypedStorage<8, 8, ::ContentView*>                              mRealmsContentView;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Progress::ProgressTips>> mProgressTips;
    ::ll::TypedStorage<8, 80, ::BasicTimer>                                            mLoadingTitleTimer;
    ::ll::TypedStorage<4, 4, int>                                                      mLoadingTitleSuffixIndex;
    ::ll::TypedStorage<1, 1, bool>                                                     mUseLoadingTipMessage;
    ::ll::TypedStorage<1, 1, bool>                                                     mRealmsPlusExpired;
    ::ll::TypedStorage<1, 1, bool>                                                     mHasLoadedProgressMessages;
    ::ll::TypedStorage<1, 1, bool>                                                     mCurrentMessageIsRealms;
    ::ll::TypedStorage<1, 1, bool>                                                     mIsRealmsScreen;
    ::ll::TypedStorage<8, 32, ::std::string>                                           mCurrentProgressMessage;
    ::ll::TypedStorage<4, 4, float>                                                    mCustomObfuscateTime;
    ::ll::TypedStorage<8, 8, int64>                                                    mLastProgressMessageUpdate;
    ::ll::TypedStorage<8, 8, int64 const>                                              mProgressMessageInterval;
    ::ll::TypedStorage<8, 8, int64>                         mLastAudioProgressNotificationUpdate;
    ::ll::TypedStorage<1, 1, bool>                          mResourcePackPacketReceived;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mRequiredPackList;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mOptionalPackList;
    ::ll::TypedStorage<8, 32, ::std::vector<bool>>          mOptionalPackSelected;
    ::ll::TypedStorage<8, 32, ::ScopedCPUBoost>             mCPUBoost;
    ::ll::TypedStorage<1, 1, bool>                          mHasTicked;
    ::ll::TypedStorage<1, 1, bool>                          mIsCancellable;
    ::ll::TypedStorage<1, 1, bool>                          mAllowSmallDownloads;
    ::ll::TypedStorage<1, 1, bool>                          mPrecachedGameplayScreens;
    ::ll::TypedStorage<1, 1, bool>                          mDisconnectScreenDisplayed;
    ::ll::TypedStorage<4, 4, ::ProgressContentType>         mProgressContentType;
    ::ll::TypedStorage<4, 4, ::GameType>                    mGameType;
    ::ll::TypedStorage<1, 1, ::ResourcePackResponse>        mLastUserChoiceDownloadResponse;
    ::ll::TypedStorage<1, 1, bool>                          mLastUserChoiceOptionalPacks;
    ::ll::TypedStorage<1, 1, bool>                          mLastUserChoiceForceServerPacks;
    ::ll::TypedStorage<1, 1, bool>                          mDownloadAlreadyConfirmedByUser;
    ::ll::TypedStorage<1, 1, bool>                          mCurrentlyShowAddonWarning;
    ::ll::TypedStorage<1, 1, bool>                          mServerJoined;
    // NOLINTEND

public:
    // prevent constructor by default
    ProgressScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ProgressScreenController() /*override*/;

    virtual void onCreation() /*override*/;

    virtual void onOpen() /*override*/;

    virtual ::ui::DirtyFlag handleGameEventNotification(::ui::GameEventNotification) /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual ::std::string getAdditionalScreenInfo() const /*override*/;

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;

    virtual void addEventProperties(::std::unordered_map<::std::string, ::std::string>& eventProperties) const
        /*override*/;

    virtual ::ui::SceneType getSceneType() const /*override*/;

    virtual bool _getGamepadHelperVisible() const /*override*/;

    virtual ::std::string _getButtonADescription() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ProgressScreenController(
        ::std::shared_ptr<::MinecraftScreenModel>               model,
        ::std::string const&                                    calledFrom,
        ::std::unique_ptr<::ProgressHandler>                    progressInterface,
        ::Bedrock::NotNullNonOwnerPtr<::Progress::ProgressTips> progressTips,
        bool                                                    sendsProgressTelemetry,
        bool                                                    loadAssets,
        bool                                                    forceRenderBelow,
        bool                                                    isCancellable,
        float                                                   backgroundFillAlpha
    );

    MCAPI ProgressScreenController(
        ::std::shared_ptr<::MinecraftScreenModel>               model,
        ::std::string const&                                    calledFrom,
        ::std::deque<::std::unique_ptr<::ProgressHandler>>      progressInterfaces,
        ::Bedrock::NotNullNonOwnerPtr<::Progress::ProgressTips> progressTips,
        bool                                                    sendsProgressTelemetry,
        bool                                                    loadAssets,
        bool                                                    useLoadingTipMessage,
        bool                                                    realmsPlusExpired,
        bool                                                    allowSmallDownloads,
        bool                                                    realmsProgressScreen,
        ::ProgressContentType                                   contentType,
        ::GameType                                              gameType,
        bool                                                    isCancellable
    );

    MCAPI void _confirmSpaceAvailable();

    MCAPI ::std::string const _getErrorCode() const;

    MCAPI float _getLoadingBarProgress() const;

    MCAPI ::std::string const _getProgressTitle() const;

    MCAPI bool _isInCancellableState() const;

    MCAPI void _openConfirmationDialog();

    MCAPI void _registerEventHandlers();

    MCAPI void _registerProgressBindings();

    MCAPI void _setupProgressScreen(bool loadAssets);

    MCAPI void _updateProgressMessage(int64 const& timeNow, bool force);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::MinecraftScreenModel>               model,
        ::std::string const&                                    calledFrom,
        ::std::unique_ptr<::ProgressHandler>                    progressInterface,
        ::Bedrock::NotNullNonOwnerPtr<::Progress::ProgressTips> progressTips,
        bool                                                    sendsProgressTelemetry,
        bool                                                    loadAssets,
        bool                                                    forceRenderBelow,
        bool                                                    isCancellable,
        float                                                   backgroundFillAlpha
    );

    MCAPI void* $ctor(
        ::std::shared_ptr<::MinecraftScreenModel>               model,
        ::std::string const&                                    calledFrom,
        ::std::deque<::std::unique_ptr<::ProgressHandler>>      progressInterfaces,
        ::Bedrock::NotNullNonOwnerPtr<::Progress::ProgressTips> progressTips,
        bool                                                    sendsProgressTelemetry,
        bool                                                    loadAssets,
        bool                                                    useLoadingTipMessage,
        bool                                                    realmsPlusExpired,
        bool                                                    allowSmallDownloads,
        bool                                                    realmsProgressScreen,
        ::ProgressContentType                                   contentType,
        ::GameType                                              gameType,
        bool                                                    isCancellable
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
    MCAPI void $onCreation();

    MCAPI void $onOpen();

    MCAPI ::ui::DirtyFlag $tick();

    MCFOLD ::std::string $getAdditionalScreenInfo() const;

    MCAPI void $addStaticScreenVars(::Json::Value& globalVars);

    MCAPI void $addEventProperties(::std::unordered_map<::std::string, ::std::string>& eventProperties) const;

    MCFOLD ::ui::SceneType $getSceneType() const;

    MCAPI bool $_getGamepadHelperVisible() const;

    MCFOLD ::std::string $_getButtonADescription();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForScreenController();
    // NOLINTEND
};
