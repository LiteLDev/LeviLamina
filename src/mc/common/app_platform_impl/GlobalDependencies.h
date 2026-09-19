#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/app_platform_impl/IDependencies.h"
#include "mc/deps/core/utility/ServiceReference.h"

// auto generated forward declare list
// clang-format off
class FeatureToggles;
class I18n;
// clang-format on

namespace AppPlatformImpl {

class GlobalDependencies : public ::AppPlatformImpl::IDependencies {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::ServiceReference<::FeatureToggles> getFeatureToggles() /*override*/;

    virtual ::I18n& getI18n() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ServiceReference<::FeatureToggles> $getFeatureToggles();

    MCNAPI ::I18n& $getI18n();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace AppPlatformImpl
