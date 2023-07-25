#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ScriptResourceStats {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTRESOURCESTATS
public:
    ScriptResourceStats& operator=(ScriptResourceStats const&) = delete;
    ScriptResourceStats(ScriptResourceStats const&)            = delete;
    ScriptResourceStats()                                      = delete;
#endif

public:
    /**
     * @symbol
     * ?serialize\@ScriptResourceStats\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string serialize() const;
    /**
     * @symbol ??1ScriptResourceStats\@\@QEAA\@XZ
     */
    MCAPI ~ScriptResourceStats();
    /**
     * @symbol ?bindType\@ScriptResourceStats\@\@SAXXZ
     */
    MCAPI static void bindType();
};
