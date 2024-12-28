#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/platform/DisplayOrientation.h"
#include "mc/deps/core/platform/FileStorageDirectory.h"

// auto generated forward declare list
// clang-format off
class ActivationUri;
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
    // vIndex: 0
    virtual ~CommonPlatform();

    // vIndex: 1
    virtual bool updatePlatformInfo() = 0;

    // vIndex: 2
    virtual bool updatePlatformGraphicsInfo() = 0;

    // vIndex: 3
    virtual void issueShutdown();

    // vIndex: 4
    virtual void issueSuspend();

    // vIndex: 5
    virtual void issueResume();

    // vIndex: 6
    virtual void issueBack();

    // vIndex: 7
    virtual void issueLowMemory();

    // vIndex: 8
    virtual void issueFocusLost();

    // vIndex: 9
    virtual void issueFocusGained();

    // vIndex: 10
    virtual void issueInputPaneVisible();

    // vIndex: 11
    virtual void issueInputPaneHidden();

    // vIndex: 12
    virtual void issueSuspendWarning();

    // vIndex: 13
    virtual void issueVisibilityChange(bool);

    // vIndex: 14
    virtual void issueWindowSizeChange(int, int);

    // vIndex: 15
    virtual void issueDPIChange(float);

    // vIndex: 16
    virtual void issueOrientationChange(::DisplayOrientation const&);

    // vIndex: 17
    virtual void feedButtonPress(int const&);

    // vIndex: 18
    virtual void feedKeyPress(char const);

    // vIndex: 19
    virtual void setTextboxText(::std::string const&);

    // vIndex: 20
    virtual void setStorageDirectory(::FileStorageDirectory, bool, ::PropertyBag const&, ::std::function<void(bool)>);

    // vIndex: 21
    virtual ::FileStorageDirectory setInitialStorageDirectory(::FileStorageDirectory);

    // vIndex: 22
    virtual ::FileStorageDirectory getStorageDirectory() const;

    // vIndex: 23
    virtual bool _preAppCreation(::Bedrock::ActivationArguments const&) = 0;

    // vIndex: 24
    virtual bool _postAppCreation(::Bedrock::ActivationArguments const&) = 0;

    // vIndex: 25
    virtual void _processActivationArguments(::Bedrock::ActivationArguments const&) = 0;

    // vIndex: 26
    virtual bool _update(bool) = 0;

    // vIndex: 27
    virtual bool _isShuttingDown() = 0;

    // vIndex: 28
    virtual bool _isShutdown() = 0;

    // vIndex: 29
    virtual void pushNotificationReceived_Shim(::PushNotificationMessage const&) = 0;

    // vIndex: 30
    virtual void notifyUriListeners_Shim(::ActivationUri const&) = 0;

    // vIndex: 31
    virtual ::std::string getDeviceId_Shim() const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $issueShutdown();

    MCAPI void $issueSuspend();

    MCAPI void $issueResume();

    MCAPI void $issueBack();

    MCAPI void $issueLowMemory();

    MCAPI void $issueFocusLost();

    MCAPI void $issueFocusGained();

    MCAPI void $issueInputPaneVisible();

    MCAPI void $issueInputPaneHidden();

    MCAPI void $issueSuspendWarning();

    MCAPI void $issueVisibilityChange(bool);

    MCAPI void $issueWindowSizeChange(int, int);

    MCAPI void $issueDPIChange(float);

    MCAPI void $issueOrientationChange(::DisplayOrientation const&);

    MCAPI void $feedButtonPress(int const&);

    MCAPI void $feedKeyPress(char const);

    MCAPI void $setTextboxText(::std::string const&);

    MCAPI void $setStorageDirectory(::FileStorageDirectory, bool, ::PropertyBag const&, ::std::function<void(bool)>);

    MCAPI ::FileStorageDirectory $setInitialStorageDirectory(::FileStorageDirectory);

    MCAPI ::FileStorageDirectory $getStorageDirectory() const;
    // NOLINTEND
};

} // namespace Bedrock
