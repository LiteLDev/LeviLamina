#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class AppConfigs;
// clang-format on

class AppConfigsFactory {
public:
    // prevent constructor by default
    AppConfigsFactory& operator=(AppConfigsFactory const&);
    AppConfigsFactory(AppConfigsFactory const&);
    AppConfigsFactory();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::unique_ptr<::AppConfigs> createAppConfigs();
    // NOLINTEND
};
