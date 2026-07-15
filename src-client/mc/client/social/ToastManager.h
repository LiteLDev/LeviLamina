#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/social/IToastManager.h"
#include "mc/client/social/ToastChannel.h"
#include "mc/client/social/ToastMessage.h"
#include "mc/client/social/ToastMessageType.h"
#include "mc/client/social/ToastState.h"
#include "mc/deps/core/minecraft/threading/EnableQueueForMainThread.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/resources/ResourcePackListener.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class IToastEventListener;
class IToastListener;
class Option;
class PushNotificationMessage;
class RecipeToastDataViewer;
class ResourcePackManager;
// clang-format on

class ToastManager : public ::IToastManager,
                     public ::Bedrock::Threading::EnableQueueForMainThread,
                     public ::ResourcePackListener,
                     public ::std::enable_shared_from_this<::ToastManager> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IClientInstance&>                                             mClient;
    ::ll::TypedStorage<4, 4, ::ToastState>                                                   mState;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ResourcePackManager>>          mResourcePackManager;
    ::ll::TypedStorage<8, 376, ::std::optional<::ToastMessage>>                              mCurrentMessage;
    ::ll::TypedStorage<8, 24, ::std::vector<::ToastMessage>>                                 mQueuedToastMessages;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<::ToastChannel, ::IToastListener*>>> mListeners;
    ::ll::TypedStorage<8, 24, ::std::vector<::gsl::not_null<::IToastEventListener*>>>        mEventListeners;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::RecipeToastDataViewer>>                     mIconsViewer;
    ::ll::TypedStorage<1, 1, bool>                                                           mToastClicked;
    ::ll::TypedStorage<1, 1, bool>                                                           mToastsEnabled;
    ::ll::TypedStorage<1, 1, bool>                                                           mRefreshPendingInvites;
    ::ll::TypedStorage<1, 1, bool>                                                           mDestroyToast;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>                        mToastStartTime;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>                        mToastEndTime;
    ::ll::TypedStorage<4, 4, float>                                                          mDeltaTime;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>                        mLastUpdateTimePoint;
    ::ll::TypedStorage<8, 8, ::Option*>                                                      mEnableDebugToastsOption;
    ::ll::TypedStorage<8, 32, ::std::string>                                                 mLongestRecipeText;
    // NOLINTEND

public:
    // prevent constructor by default
    ToastManager& operator=(ToastManager const&);
    ToastManager(ToastManager const&);
    ToastManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ToastManager() /*override*/ = default;

    virtual void pushToast(::ToastMessage&&) /*override*/;

    virtual bool isEditorModeEnabled() const /*override*/;

    virtual void onActiveResourcePacksChanged(::ResourcePackManager&) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ToastManager(
        ::IClientInstance&                                   client,
        ::Option*                                            enableDebugToastsOption,
        ::Bedrock::NotNullNonOwnerPtr<::ResourcePackManager> resourcePackManager
    );

    MCAPI ::std::string _getNewRecipesText() const;

    MCAPI bool _isToastAllowed(::ToastMessageType messageType) const;

    MCAPI ::std::string getMoreRecipesTitle() const;

    MCAPI ::std::string getRecipeTranslationText();

    MCAPI ::ui::ViewRequest handleToastButton();

    MCAPI void pushNotificationReceived(::PushNotificationMessage const& msg);

    MCAPI void unregisterListener(::IToastListener* listener);

    MCAPI void update();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::IClientInstance&                                   client,
        ::Option*                                            enableDebugToastsOption,
        ::Bedrock::NotNullNonOwnerPtr<::ResourcePackManager> resourcePackManager
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
