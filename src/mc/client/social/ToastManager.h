#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/social/IToastManager.h"
#include "mc/client/social/ToastMessageType.h"
#include "mc/deps/core/minecraft/threading/EnableQueueForMainThread.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/resources/ResourcePackListener.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class Option;
class PushNotificationMessage;
class ResourcePackManager;
class ToastMessage;
namespace Json { class Value; }
// clang-format on

class ToastManager : public ::IToastManager,
                     public ::Bedrock::Threading::EnableQueueForMainThread,
                     public ::ResourcePackListener,
                     public ::std::enable_shared_from_this<::ToastManager> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnke9d210;
    ::ll::UntypedStorage<4, 4>   mUnk358232;
    ::ll::UntypedStorage<8, 24>  mUnk90bfd0;
    ::ll::UntypedStorage<8, 376> mUnke9901d;
    ::ll::UntypedStorage<8, 24>  mUnkc7d542;
    ::ll::UntypedStorage<8, 24>  mUnk991dfa;
    ::ll::UntypedStorage<8, 24>  mUnkb3e856;
    ::ll::UntypedStorage<8, 8>   mUnk325e63;
    ::ll::UntypedStorage<8, 64>  mUnk88e1c9;
    ::ll::UntypedStorage<8, 64>  mUnk71b4c8;
    ::ll::UntypedStorage<1, 1>   mUnk5a71b2;
    ::ll::UntypedStorage<1, 1>   mUnke8ff1a;
    ::ll::UntypedStorage<1, 1>   mUnk731ea6;
    ::ll::UntypedStorage<1, 1>   mUnk1421ff;
    ::ll::UntypedStorage<8, 8>   mUnkea87b6;
    ::ll::UntypedStorage<8, 8>   mUnk734cad;
    ::ll::UntypedStorage<4, 4>   mUnka694e6;
    ::ll::UntypedStorage<8, 8>   mUnk6b8fd9;
    ::ll::UntypedStorage<8, 8>   mUnkef29e2;
    // NOLINTEND

public:
    // prevent constructor by default
    ToastManager& operator=(ToastManager const&);
    ToastManager(ToastManager const&);
    ToastManager();

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~ToastManager() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~ToastManager() /*override*/;
#endif

    virtual void pushToast(::ToastMessage&& message) /*override*/;

    virtual bool isEditorModeEnabled() const /*override*/;

    virtual void onActiveResourcePacksChanged(::ResourcePackManager&) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ToastManager(
        ::IClientInstance&                                   client,
        ::Option*                                            enableDebugToastsOption,
        ::Bedrock::NotNullNonOwnerPtr<::ResourcePackManager> resourcePackManager
    );

    MCNAPI_C void _destroyToast();

    MCNAPI_C ::std::string _extractGameInviteDescription(::Json::Value const& propertyBag);

    MCNAPI_C ::std::string _extractGameInviteHandle(::Json::Value const& propertyBag);

    MCNAPI_C void _handleInvite(bool parseJSON);

    MCNAPI_C void _invitationTelemetry(::Json::Value const& data, ::ToastMessageType type);

    MCNAPI_C bool _isToastAllowed(::ToastMessageType messageType) const;

    MCNAPI_C void _playDefaultToastSound() const;

    MCNAPI_C void _playMobileInviteTTS() const;

    MCNAPI_C void _playRecipeUnlockingToastInSound() const;

    MCNAPI_C void _playRecipeUnlockingToastOutSound() const;

    MCNAPI_C void _reportClick();

    MCNAPI_C void _sendRemoveToast();

    MCNAPI_C void _sendShowToast(bool animateIn);

    MCNAPI_C void _sendTTS(bool useIndication, ::std::string const& message) const;

    MCNAPI_C void _setInitialToastValues();

    MCNAPI_C void _showNewToast();

    MCNAPI_C float getCurrentToastDisplaySeconds() const;

    MCNAPI_C ::ui::ViewRequest handleToastButton();

    MCNAPI_C void pushNotificationReceived(::PushNotificationMessage const& msg);

    MCNAPI_C void setCurrentToastsDuration(float timeInSec);

    MCNAPI_C void update();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(
        ::IClientInstance&                                   client,
        ::Option*                                            enableDebugToastsOption,
        ::Bedrock::NotNullNonOwnerPtr<::ResourcePackManager> resourcePackManager
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $pushToast(::ToastMessage&& message);

    MCNAPI bool $isEditorModeEnabled() const;

    MCNAPI void $onActiveResourcePacksChanged(::ResourcePackManager&);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIToastManager();

    MCNAPI static void** $vftableForResourcePackListener();

    MCNAPI static void** $vftableForEnableQueueForMainThread();
    // NOLINTEND
};
