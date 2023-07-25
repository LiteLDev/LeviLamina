#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AppConfigsFactory {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_APPCONFIGSFACTORY
public:
    AppConfigsFactory& operator=(AppConfigsFactory const&) = delete;
    AppConfigsFactory(AppConfigsFactory const&)            = delete;
    AppConfigsFactory()                                    = delete;
#endif

public:
    /**
     * @symbol
     * ?createAppConfigs\@AppConfigsFactory\@\@SA?AV?$unique_ptr\@VAppConfigs\@\@U?$default_delete\@VAppConfigs\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI static std::unique_ptr<class AppConfigs> createAppConfigs();
};
