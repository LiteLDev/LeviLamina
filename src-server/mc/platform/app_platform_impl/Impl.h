#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/IAppPlatformImpl.h"
#include "mc/deps/application/IPlatformScreenshots.h"
#include "mc/deps/core/platform/UIScalingRules.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/options/UIProfile.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
struct IntegrityTokenResult;
struct ScreenshotOptions;
namespace AppPlatformImpl { class IDependencies; }
namespace Bedrock::PubSub { class Subscription; }
namespace Core { class DiskAccessTracker; }
namespace Core { class LoadTimeProfiler; }
// clang-format on

namespace AppPlatformImpl {

class Impl : public ::IAppPlatformImpl, public ::IPlatformScreenshots {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk1f9a34;
    ::ll::UntypedStorage<8, 16> mUnk17ea4f;
    ::ll::UntypedStorage<8, 16> mUnk922e4c;
    ::ll::UntypedStorage<8, 8> mUnkc6ea0c;
    ::ll::UntypedStorage<8, 8> mUnk5f48bd;
    ::ll::UntypedStorage<8, 8> mUnkf07172;
    // NOLINTEND

public:
    // prevent constructor by default
    Impl& operator=(Impl const&);
    Impl(Impl const&);
    Impl();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Impl() /*override*/;

    // vIndex: 1
    virtual ::IPlatformScreenshots& getPlatformScreenshots() /*override*/;

    // vIndex: 9
    virtual bool mouseInputHandledByImGui() /*override*/;

    // vIndex: 10
    virtual bool keyboardInputHandledByImGui() /*override*/;

    // vIndex: 11
    virtual void updateImGuiMousePosition(float x, float y) /*override*/;

    // vIndex: 12
    virtual void updateImGuiMouseButton(uchar button, bool isDown) /*override*/;

    // vIndex: 13
    virtual void updateImGuiMouseScrollBar(float value) /*override*/;

    // vIndex: 14
    virtual void imGuiAddInputChar(ushort c) /*override*/;

    // vIndex: 15
    virtual bool updateImGuiKeyboard(uchar param, bool isDown) /*override*/;

    // vIndex: 2
    virtual void setServiceLocators(::AppPlatform& platform) /*override*/;

    // vIndex: 3
    virtual void resetServiceLocators() /*override*/;

    // vIndex: 4
    virtual void setDiskAccessEventing(::Core::DiskAccessTracker& diskAccessTracker) /*override*/;

    // vIndex: 5
    virtual bool isRealmsEnabled() const /*override*/;

    // vIndex: 6
    virtual ::Bedrock::PubSub::Subscription initializeLoadProfiler(::Core::LoadTimeProfiler& profiler) /*override*/;

    // vIndex: 7
    virtual ::Bedrock::Threading::Async<::IntegrityTokenResult> requestIntegrityToken(::std::string const&) /*override*/;

    // vIndex: 8
    virtual ::std::string getFullLanguageCode() /*override*/;

    // vIndex: 16
    virtual ::UIProfile getDefaultUIProfile(::UIScalingRules) const /*override*/;

    // vIndex: 1
    virtual ::std::optional<::ScreenshotOptions> getExtraLevelSaveDataIconParams(::std::string const&) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit Impl(::std::unique_ptr<::AppPlatformImpl::IDependencies> deps);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::unique_ptr<::AppPlatformImpl::IDependencies> deps);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::IPlatformScreenshots& $getPlatformScreenshots();

    MCNAPI bool $mouseInputHandledByImGui();

    MCNAPI bool $keyboardInputHandledByImGui();

    MCNAPI void $updateImGuiMousePosition(float x, float y);

    MCNAPI void $updateImGuiMouseButton(uchar button, bool isDown);

    MCNAPI void $updateImGuiMouseScrollBar(float value);

    MCNAPI void $imGuiAddInputChar(ushort c);

    MCNAPI bool $updateImGuiKeyboard(uchar param, bool isDown);

    MCNAPI void $setServiceLocators(::AppPlatform& platform);

    MCNAPI void $resetServiceLocators();

    MCNAPI void $setDiskAccessEventing(::Core::DiskAccessTracker& diskAccessTracker);

    MCNAPI bool $isRealmsEnabled() const;

    MCNAPI ::Bedrock::PubSub::Subscription $initializeLoadProfiler(::Core::LoadTimeProfiler& profiler);

    MCNAPI ::Bedrock::Threading::Async<::IntegrityTokenResult> $requestIntegrityToken(::std::string const&);

    MCNAPI ::std::string $getFullLanguageCode();

    MCNAPI ::std::optional<::ScreenshotOptions> $getExtraLevelSaveDataIconParams(::std::string const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIPlatformScreenshots();

    MCNAPI static void** $vftableForIAppPlatformImpl();
    // NOLINTEND

};

}
