#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/platform/DisplayOrientation.h"
#include "mc/deps/core/platform/FileStorageDirectory.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class ActivationUri;
class IMinecraftGame;
class PropertyBag;
class PushNotificationMessage;
namespace Bedrock { class ActivationArguments; }
// clang-format on

namespace Bedrock {

class CommonPlatform {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnka12996;
    ::ll::UntypedStorage<8, 8>  mUnk3f8781;
    ::ll::UntypedStorage<8, 8>  mUnkdc7fc5;
    ::ll::UntypedStorage<8, 8>  mUnk47147a;
    ::ll::UntypedStorage<8, 24> mUnk162f42;
    ::ll::UntypedStorage<8, 64> mUnkae2910;
    ::ll::UntypedStorage<1, 1>  mUnk377acb;
    ::ll::UntypedStorage<1, 1>  mUnk850436;
    // NOLINTEND

public:
    // prevent constructor by default
    CommonPlatform& operator=(CommonPlatform const&);
    CommonPlatform(CommonPlatform const&);
    CommonPlatform();

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
    MCNAPI_C bool _createApp();
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
    MCNAPI void $issueShutdown();

    MCNAPI void $issueSuspend();

    MCNAPI void $issueResume();

    MCNAPI void $issueBack();

    MCNAPI void $issueLowMemory();

    MCNAPI void $issueFocusLost();

    MCNAPI void $issueFocusGained();

    MCNAPI void $issueInputPaneVisible();

    MCNAPI void $issueInputPaneHidden();

    MCNAPI void $issueSuspendWarning();

    MCNAPI void $issueVisibilityChange(bool visible);

    MCNAPI void $issueWindowSizeChange(int width, int height);

    MCNAPI void $issueDPIChange(float dpi);

    MCNAPI void $issueOrientationChange(::DisplayOrientation const&);

    MCNAPI void $feedButtonPress(int const& button);

    MCNAPI void $feedKeyPress(char const key);

    MCNAPI void $setTextboxText(::std::string const& text);

    MCNAPI void $setStorageDirectory(
        ::FileStorageDirectory dir,
        bool                   isCallback,
        ::PropertyBag const&   extraData,
        ::std::function<void(bool)>
    );

    MCNAPI ::FileStorageDirectory $setInitialStorageDirectory(::FileStorageDirectory dir);

    MCNAPI ::FileStorageDirectory $getStorageDirectory() const;
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock
