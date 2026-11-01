#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/LowMemorySeverity.h"
#include "mc/deps/core/platform/OperationMode.h"
#include "mc/deps/core/platform_info/RefreshRate.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class PushNotificationMessage;
// clang-format on

class AppPlatformListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mLowMemorySubscription;
    ::ll::TypedStorage<1, 1, bool>                             mListenerRegistered;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AppPlatformListener();

    virtual void onAppPaused();

    virtual void onAppUnpaused();

    virtual void onAppPreSuspended();

    virtual void onAppSuspended();

    virtual void onAppResumed();

    virtual void onAppFocusLost();

    virtual void onAppFocusGained();

    virtual void onAppTerminated();

    virtual void onOperationModeChanged(::OperationMode const operationMode);

    virtual void onPerformanceModeChanged(bool const boost);

    virtual void onPushNotificationReceived(::PushNotificationMessage const& msg);

    virtual void onRefreshRateChanged(::RefreshRate const refreshRate);

    virtual void onResizeBegin();

    virtual void onResizeEnd();

    virtual void onDeviceLost();

    virtual void onAppSurfaceCreated();

    virtual void onAppSurfaceDestroyed();

#ifdef LL_PLAT_S
    virtual void onClipboardCopy(::std::string const&);
#else // LL_PLAT_C
    virtual void onClipboardCopy(::std::string const& clipString);
#endif

#ifdef LL_PLAT_S
    virtual void onClipboardPaste(::std::string const&);
#else // LL_PLAT_C
    virtual void onClipboardPaste(::std::string const& clipString);
#endif

    virtual void onLowMemory(::LowMemorySeverity);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void initListener(float priority);

#ifdef LL_PLAT_C
    MCNAPI void terminate();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onAppPaused();

    MCNAPI void $onAppUnpaused();

    MCNAPI void $onAppPreSuspended();

    MCNAPI void $onAppSuspended();

    MCNAPI void $onAppResumed();

    MCNAPI void $onAppFocusLost();

    MCNAPI void $onAppFocusGained();

    MCNAPI void $onAppTerminated();

    MCNAPI void $onOperationModeChanged(::OperationMode const operationMode);

    MCNAPI void $onPerformanceModeChanged(bool const boost);

    MCNAPI void $onPushNotificationReceived(::PushNotificationMessage const& msg);

    MCNAPI void $onRefreshRateChanged(::RefreshRate const refreshRate);

    MCNAPI void $onResizeBegin();

    MCNAPI void $onResizeEnd();

    MCNAPI void $onDeviceLost();

    MCNAPI void $onAppSurfaceCreated();

    MCNAPI void $onAppSurfaceDestroyed();

#ifdef LL_PLAT_S
    MCNAPI void $onClipboardCopy(::std::string const&);
#else // LL_PLAT_C
    MCNAPI void $onClipboardCopy(::std::string const& clipString);
#endif

#ifdef LL_PLAT_S
    MCNAPI void $onClipboardPaste(::std::string const&);
#else // LL_PLAT_C
    MCNAPI void $onClipboardPaste(::std::string const& clipString);
#endif

    MCNAPI void $onLowMemory(::LowMemorySeverity);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
