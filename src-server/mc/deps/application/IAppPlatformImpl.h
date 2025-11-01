#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/platform/UIScalingRules.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/options/UIProfile.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class IPlatformScreenshots;
struct IntegrityTokenResult;
namespace Bedrock::PubSub { class Subscription; }
namespace Core { class DiskAccessTracker; }
namespace Core { class LoadTimeProfiler; }
// clang-format on

class IAppPlatformImpl {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IAppPlatformImpl() = default;

    // vIndex: 1
    virtual ::IPlatformScreenshots& getPlatformScreenshots() = 0;

    // vIndex: 2
    virtual void setServiceLocators(::AppPlatform&) = 0;

    // vIndex: 3
    virtual void resetServiceLocators() = 0;

    // vIndex: 4
    virtual void setDiskAccessEventing(::Core::DiskAccessTracker&) = 0;

    // vIndex: 5
    virtual bool isRealmsEnabled() const = 0;

    // vIndex: 6
    virtual ::Bedrock::PubSub::Subscription initializeLoadProfiler(::Core::LoadTimeProfiler&) = 0;

    // vIndex: 7
    virtual ::Bedrock::Threading::Async<::IntegrityTokenResult> requestIntegrityToken(::std::string const&) = 0;

    // vIndex: 8
    virtual ::std::string getFullLanguageCode() = 0;

    // vIndex: 9
    virtual bool mouseInputHandledByImGui() = 0;

    // vIndex: 10
    virtual bool keyboardInputHandledByImGui() = 0;

    // vIndex: 11
    virtual void updateImGuiMousePosition(float, float) = 0;

    // vIndex: 12
    virtual void updateImGuiMouseButton(uchar, bool) = 0;

    // vIndex: 13
    virtual void updateImGuiMouseScrollBar(float) = 0;

    // vIndex: 14
    virtual void imGuiAddInputChar(ushort) = 0;

    // vIndex: 15
    virtual bool updateImGuiKeyboard(uchar, bool) = 0;

    // vIndex: 16
    virtual ::UIProfile getDefaultUIProfile(::UIScalingRules) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};
