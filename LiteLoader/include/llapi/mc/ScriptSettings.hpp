/**
 * @file  MC/ScriptSettings.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure ScriptSettings.
 *
 */
struct ScriptSettings {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTSETTINGS
public:
    struct ScriptSettings& operator=(struct ScriptSettings const &) = delete;
    ScriptSettings(struct ScriptSettings const &) = delete;
    ScriptSettings() = delete;
#endif

public:
    /**
     * @hash   -418352951
     * @symbol ??0ScriptSettings@@QEAA@$$QEAU0@@Z
     */
    MCAPI ScriptSettings(struct ScriptSettings &&);
    /**
     * @hash   1856771272
     * @symbol ??1ScriptSettings@@QEAA@XZ
     */
    MCAPI ~ScriptSettings();

};