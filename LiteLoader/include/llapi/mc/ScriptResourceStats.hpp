/**
 * @file  ScriptResourceStats.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "cereal.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure ScriptResourceStats.
 *
 */
struct ScriptResourceStats {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTRESOURCESTATS
public:
    struct ScriptResourceStats& operator=(struct ScriptResourceStats const &) = delete;
    ScriptResourceStats(struct ScriptResourceStats const &) = delete;
    ScriptResourceStats() = delete;
#endif

public:
    /**
     * @symbol ?serialize\@ScriptResourceStats\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAUReflectionCtx\@cereal\@\@\@Z
     */
    MCAPI std::string serialize(struct cereal::ReflectionCtx &) const;
    /**
     * @symbol ??1ScriptResourceStats\@\@QEAA\@XZ
     */
    MCAPI ~ScriptResourceStats();
    /**
     * @symbol ?bindType\@ScriptResourceStats\@\@SAXAEAUReflectionCtx\@cereal\@\@\@Z
     */
    MCAPI static void bindType(struct cereal::ReflectionCtx &);

};