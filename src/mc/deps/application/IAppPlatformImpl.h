#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
namespace Bedrock::PubSub { class Subscription; }
namespace Core { class LoadTimeProfiler; }
class IClientAppPlatformImpl;
// clang-format on

class IAppPlatformImpl {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IAppPlatformImpl() = default;

    virtual ::IClientAppPlatformImpl* getClient() = 0;

    virtual void setServiceLocators(::AppPlatform& platform) = 0;

    virtual void resetServiceLocators() = 0;

    virtual ::Bedrock::PubSub::Subscription initializeLoadProfiler(::Core::LoadTimeProfiler& profiler) = 0;

    virtual ::std::string getFullLanguageCode() = 0;
    // NOLINTEND
};
