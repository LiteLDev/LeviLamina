#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/ServiceReference.h"

// auto generated forward declare list
// clang-format off
class FeatureToggles;
class I18n;
// clang-format on

namespace AppPlatformImpl {

class IDependencies {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IDependencies() = default;

    virtual ::ServiceReference<::FeatureToggles> getFeatureToggles() = 0;

    virtual ::I18n& getI18n() = 0;
    // NOLINTEND
};

} // namespace AppPlatformImpl
