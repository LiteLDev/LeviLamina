/**
 * @file  AppConfigsFactory.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class AppConfigsFactory.
 *
 */
class AppConfigsFactory {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_APPCONFIGSFACTORY
public:
    class AppConfigsFactory& operator=(class AppConfigsFactory const &) = delete;
    AppConfigsFactory(class AppConfigsFactory const &) = delete;
    AppConfigsFactory() = delete;
#endif

public:
    /**
     * @symbol  ?createAppConfigs\@AppConfigsFactory\@\@SA?AV?$unique_ptr\@VAppConfigs\@\@U?$default_delete\@VAppConfigs\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI static std::unique_ptr<class AppConfigs> createAppConfigs();

};