#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/IAppPlatformImpl.h"
#include "mc/deps/application/IPlatformScreenshots.h"
#include "mc/deps/core/platform/UIScalingRules.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/options/UIProfile.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class BatteryMonitorInterface;
class ThermalMonitorInterface;
struct IntegrityTokenResult;
struct ScreenshotOptions;
namespace AppPlatformImpl { class IDependencies; }
namespace Bedrock::PubSub { class Subscription; }
namespace Core { class DiskAccessTracker; }
namespace Core { class LoadTimeProfiler; }
class SuspendHandler;
// clang-format on

namespace AppPlatformImpl {

class Impl : public ::IAppPlatformImpl, public ::IPlatformScreenshots {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk1f9a34;
    ::ll::UntypedStorage<8, 16> mUnk17ea4f;
    ::ll::UntypedStorage<8, 16> mUnk922e4c;
    ::ll::UntypedStorage<8, 8>  mUnk7740d6;
    ::ll::UntypedStorage<8, 8>  mUnk962aed;
    ::ll::UntypedStorage<8, 8>  mUnkbe6aab;
    // NOLINTEND

public:
    // prevent constructor by default
    Impl& operator=(Impl const&);
    Impl(Impl const&);
    Impl();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Impl() /*override*/;

    virtual ::IPlatformScreenshots& getPlatformScreenshots() /*override*/;

    virtual bool mouseInputHandledByImGui() /*override*/;

    virtual bool keyboardInputHandledByImGui() /*override*/;

    virtual void updateImGuiMousePosition(float, float) /*override*/;

    virtual void updateImGuiMouseButton(uchar, bool) /*override*/;

    virtual void updateImGuiMouseScrollBar(float) /*override*/;

    virtual void imGuiAddInputChar(ushort) /*override*/;

    virtual bool updateImGuiKeyboard(uchar, bool) /*override*/;

    virtual void setServiceLocators(::AppPlatform& platform) /*override*/;

    virtual void resetServiceLocators() /*override*/;

    virtual void setDiskAccessEventing(::Core::DiskAccessTracker& diskAccessTracker) /*override*/;

    virtual bool isRealmsEnabled() const /*override*/;

    virtual ::Bedrock::PubSub::Subscription initializeLoadProfiler(::Core::LoadTimeProfiler& profiler) /*override*/;

    virtual ::Bedrock::Threading::Async<::IntegrityTokenResult>
    requestIntegrityToken(::std::string const&) /*override*/;

    virtual ::std::string getFullLanguageCode() /*override*/;

    virtual ::UIProfile getDefaultUIProfile(::UIScalingRules uiScalingRules) const /*override*/;

#ifdef LL_PLAT_S
    virtual ::std::optional<::ScreenshotOptions> getExtraLevelSaveDataIconParams(::std::string const&) const
        /*override*/;
#else // LL_PLAT_C
    virtual ::std::optional<::ScreenshotOptions> getExtraLevelSaveDataIconParams(::std::string const&) const
        /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::SuspendHandler>
    getSuspendHandler(bool updateCachedValue, ::AppPlatform& appPlatform) /*override*/;

    virtual ::BatteryMonitorInterface const& getBatteryMonitorInterface() const /*override*/;

    virtual ::ThermalMonitorInterface const& getThermalMonitorInterface() const /*override*/;
#endif

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

    MCNAPI void $updateImGuiMousePosition(float, float);

    MCNAPI void $updateImGuiMouseButton(uchar, bool);

    MCNAPI void $updateImGuiMouseScrollBar(float);

    MCNAPI void $imGuiAddInputChar(ushort);

    MCNAPI bool $updateImGuiKeyboard(uchar, bool);

    MCNAPI void $setServiceLocators(::AppPlatform& platform);

    MCNAPI void $resetServiceLocators();

    MCNAPI void $setDiskAccessEventing(::Core::DiskAccessTracker& diskAccessTracker);

    MCNAPI bool $isRealmsEnabled() const;

    MCNAPI ::Bedrock::PubSub::Subscription $initializeLoadProfiler(::Core::LoadTimeProfiler& profiler);

    MCNAPI ::Bedrock::Threading::Async<::IntegrityTokenResult> $requestIntegrityToken(::std::string const&);

    MCNAPI ::std::string $getFullLanguageCode();

    MCNAPI ::UIProfile $getDefaultUIProfile(::UIScalingRules uiScalingRules) const;

    MCNAPI ::std::optional<::ScreenshotOptions> $getExtraLevelSaveDataIconParams(::std::string const&) const;

#ifdef LL_PLAT_C
    MCNAPI ::Bedrock::NonOwnerPointer<::SuspendHandler>
    $getSuspendHandler(bool updateCachedValue, ::AppPlatform& appPlatform);

    MCNAPI ::BatteryMonitorInterface const& $getBatteryMonitorInterface() const;

    MCNAPI ::ThermalMonitorInterface const& $getThermalMonitorInterface() const;
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIPlatformScreenshots();

    MCNAPI static void** $vftableForIAppPlatformImpl();
    // NOLINTEND
};

} // namespace AppPlatformImpl
