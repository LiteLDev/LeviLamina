#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AppConfigsFactory {
public:
    // prevent constructor by default
    AppConfigsFactory& operator=(AppConfigsFactory const&);
    AppConfigsFactory(AppConfigsFactory const&);
    AppConfigsFactory();

public:
    // NOLINTBEGIN
    MCAPI static std::unique_ptr<class AppConfigs> createAppConfigs();

    // NOLINTEND
};
