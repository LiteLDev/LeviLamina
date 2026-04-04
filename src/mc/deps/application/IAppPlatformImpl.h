#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/platform/UIScalingRules.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/options/UIProfile.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class BatteryMonitorInterface;
class IPlatformScreenshots;
class SuspendHandler;
class ThermalMonitorInterface;
struct IntegrityTokenResult;
namespace Bedrock::PubSub { class Subscription; }
namespace Core { class DiskAccessTracker; }
namespace Core { class LoadTimeProfiler; }
// clang-format on

class IAppPlatformImpl {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IAppPlatformImpl() = default;

#ifdef LL_PLAT_C
    virtual ::Bedrock::NonOwnerPointer<::SuspendHandler>
    getSuspendHandler(bool updateCachedValue, ::AppPlatform& appPlatform) = 0;

    virtual ::BatteryMonitorInterface const& getBatteryMonitorInterface() const = 0;

    virtual ::ThermalMonitorInterface const& getThermalMonitorInterface() const = 0;

#endif
    virtual ::IPlatformScreenshots& getPlatformScreenshots() = 0;

    virtual void setServiceLocators(::AppPlatform& platform) = 0;

    virtual void resetServiceLocators() = 0;

    virtual void setDiskAccessEventing(::Core::DiskAccessTracker& diskAccessTracker) = 0;

    virtual bool isRealmsEnabled() const = 0;

    virtual ::Bedrock::PubSub::Subscription initializeLoadProfiler(::Core::LoadTimeProfiler& profiler) = 0;

    virtual ::Bedrock::Threading::Async<::IntegrityTokenResult> requestIntegrityToken(::std::string const&) = 0;

    virtual ::std::string getFullLanguageCode() = 0;

    virtual bool mouseInputHandledByImGui() = 0;

    virtual bool keyboardInputHandledByImGui() = 0;

    virtual void updateImGuiMousePosition(float x, float y) = 0;

    virtual void updateImGuiMouseButton(uchar button, bool isDown) = 0;

    virtual void updateImGuiMouseScrollBar(float value) = 0;

    virtual void imGuiAddInputChar(ushort c) = 0;

    virtual bool updateImGuiKeyboard(uchar param, bool isDown) = 0;

    virtual ::UIProfile getDefaultUIProfile(::UIScalingRules uiScalingRules) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
