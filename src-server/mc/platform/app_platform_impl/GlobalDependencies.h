#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/ServiceReference.h"
#include "mc/platform/app_platform_impl/IDependencies.h"

// auto generated forward declare list
// clang-format off
class FeatureToggles;
class I18n;
class IMinecraftEventing;
class ThrottledFileWriteManager;
namespace flighting { class IFlightReader; }
// clang-format on

namespace AppPlatformImpl {

class GlobalDependencies : public ::AppPlatformImpl::IDependencies {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnkac6d56;
    // NOLINTEND

public:
    // prevent constructor by default
    GlobalDependencies& operator=(GlobalDependencies const&);
    GlobalDependencies(GlobalDependencies const&);
    GlobalDependencies();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::ServiceReference<::IMinecraftEventing> getEventing() /*override*/;

    // vIndex: 2
    virtual ::ServiceReference<::FeatureToggles> getFeatureToggles() /*override*/;

    // vIndex: 3
    virtual ::Bedrock::NonOwnerPointer<::ThrottledFileWriteManager> getFileWriteManager() /*override*/;

    // vIndex: 4
    virtual ::ServiceReference<::flighting::IFlightReader> getTreatmentToggles() /*override*/;

    // vIndex: 5
    virtual ::I18n& getI18n() /*override*/;

    // vIndex: 6
    virtual bool& getUseSuspendHandler() /*override*/;

    // vIndex: 0
    virtual ~GlobalDependencies() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ServiceReference<::IMinecraftEventing> $getEventing();

    MCNAPI ::ServiceReference<::FeatureToggles> $getFeatureToggles();

    MCNAPI ::Bedrock::NonOwnerPointer<::ThrottledFileWriteManager> $getFileWriteManager();

    MCNAPI ::ServiceReference<::flighting::IFlightReader> $getTreatmentToggles();

    MCNAPI ::I18n& $getI18n();

    MCNAPI bool& $getUseSuspendHandler();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}
