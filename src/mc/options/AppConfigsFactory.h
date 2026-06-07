#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class AppConfigs;
struct AppConfigsDependencies;
// clang-format on

class AppConfigsFactory {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::unique_ptr<::AppConfigs> createAppConfigs(::AppConfigsDependencies&& dependencies);
    // NOLINTEND
};
