#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/platform/DisplayOrientation.h"
#include "mc/deps/core/platform/FileStorageDirectory.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class ActivationUri;
class PropertyBag;
class PushNotificationMessage;
namespace Bedrock { class ActivationArguments; }
namespace Bedrock { class IIslandCore; }
namespace Bedrock { class IIslandManager; }
namespace Bedrock { struct PlatformBuildInfo; }
namespace Bedrock { struct PlatformRuntimeInfo; }
class IMinecraftGame;
// clang-format on

namespace Bedrock {

class CommonPlatform {
public:
    // CommonPlatform inner types define
    using MCGameFactory = ::brstd::move_only_function<::std::unique_ptr<::IMinecraftGame>()>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Bedrock::PlatformRuntimeInfo>>                   mPlatformRuntimeInfo;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Bedrock::PlatformBuildInfo>>                     mPlatformBuildInfo;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Bedrock::IIslandManager>>                        mIslandMgr;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Bedrock::IIslandCore>>                           mApp;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::IMinecraftGame>>                       mMinecraftGame_Shim;
    ::ll::TypedStorage<8, 64, ::brstd::move_only_function<::std::unique_ptr<::IMinecraftGame>()>> mCreateGame;
    ::ll::TypedStorage<1, 1, ::std::atomic<bool>> mbQueueRenderParameterSignal;
    ::ll::TypedStorage<1, 1, ::std::atomic<bool>> mHasInitialized;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~CommonPlatform() = default;
#else // LL_PLAT_C
    virtual ~CommonPlatform();
#endif

    virtual bool updatePlatformInfo() = 0;

    virtual bool updatePlatformGraphicsInfo() = 0;

    virtual void issueShutdown();

    virtual void issueSuspend();

    virtual void issueResume();

    virtual void issueBack();

    virtual void issueLowMemory();

    virtual void issueFocusLost();

    virtual void issueFocusGained();

    virtual void issueInputPaneVisible();

    virtual void issueInputPaneHidden();

    virtual void issueSuspendWarning();

    virtual void issueVisibilityChange(bool visible);

    virtual void issueWindowSizeChange(int width, int height);

    virtual void issueDPIChange(float dpi);

    virtual void issueOrientationChange(::DisplayOrientation const&);

    virtual void feedButtonPress(int const& button);

    virtual void feedKeyPress(char const key);

    virtual void setTextboxText(::std::string const& text);

    virtual void setStorageDirectory(
        ::FileStorageDirectory dir,
        bool                   isCallback,
        ::PropertyBag const&   extraData,
        ::std::function<void(bool)>
    );

    virtual ::FileStorageDirectory setInitialStorageDirectory(::FileStorageDirectory dir);

    virtual ::FileStorageDirectory getStorageDirectory() const;

    virtual bool _preAppCreation(::Bedrock::ActivationArguments const&) = 0;

    virtual bool _postAppCreation(::Bedrock::ActivationArguments const&) = 0;

    virtual void _processActivationArguments(::Bedrock::ActivationArguments const&) = 0;

    virtual bool _update(bool) = 0;

    virtual bool _isShuttingDown() = 0;

    virtual bool _isShutdown() = 0;

    virtual void pushNotificationReceived_Shim(::PushNotificationMessage const&) = 0;

    virtual void notifyUriListeners_Shim(::ActivationUri const&) = 0;

    virtual ::std::string getDeviceId_Shim() const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI_C bool _createApp();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCFOLD void $issueShutdown();

    MCFOLD void $issueSuspend();

    MCFOLD void $issueResume();

    MCFOLD void $issueBack();

    MCFOLD void $issueLowMemory();

    MCFOLD void $issueFocusLost();

    MCFOLD void $issueFocusGained();

    MCFOLD void $issueInputPaneVisible();

    MCFOLD void $issueInputPaneHidden();

    MCFOLD void $issueSuspendWarning();

    MCFOLD void $issueVisibilityChange(bool visible);

    MCFOLD void $issueWindowSizeChange(int width, int height);

    MCFOLD void $issueDPIChange(float dpi);

    MCFOLD void $issueOrientationChange(::DisplayOrientation const&);

    MCAPI void $feedButtonPress(int const& button);

    MCAPI void $feedKeyPress(char const key);

    MCFOLD void $setTextboxText(::std::string const& text);

    MCFOLD void $setStorageDirectory(
        ::FileStorageDirectory dir,
        bool                   isCallback,
        ::PropertyBag const&   extraData,
        ::std::function<void(bool)>
    );

    MCFOLD ::FileStorageDirectory $setInitialStorageDirectory(::FileStorageDirectory dir);

    MCFOLD ::FileStorageDirectory $getStorageDirectory() const;
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock
