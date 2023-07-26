#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class IDebuggerController; }
// clang-format on

class ScriptDebugger {

public:
    // prevent constructor by default
    ScriptDebugger& operator=(ScriptDebugger const&) = delete;
    ScriptDebugger(ScriptDebugger const&)            = delete;
    ScriptDebugger()                                 = delete;

public:
    /**
     * @vftbl 0
     * @symbol ?listen\@ScriptDebugger\@\@UEAA_NG\@Z
     */
    virtual bool listen(unsigned short); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?connect\@ScriptDebugger\@\@UEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@G\@Z
     */
    virtual bool connect(std::string const&, unsigned short); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?close\@ScriptDebugger\@\@UEAAXXZ
     */
    virtual void close(); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?startProfiler\@ScriptDebugger\@\@UEAAXXZ
     */
    virtual void startProfiler(); // NOLINT
    /**
     * @vftbl 4
     * @symbol
     * ?stopProfiler\@ScriptDebugger\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void stopProfiler(std::string const&); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?getResourceStats\@ScriptDebugger\@\@UEBA?AUScriptResourceStats\@\@XZ
     */
    virtual struct ScriptResourceStats getResourceStats() const; // NOLINT

    // private:
    /**
     * @symbol ?_createController\@ScriptDebugger\@\@AEAAPEAVIDebuggerController\@Scripting\@\@XZ
     */
    MCAPI class Scripting::IDebuggerController* _createController(); // NOLINT
    /**
     * @symbol ?_releaseController\@ScriptDebugger\@\@AEAAXXZ
     */
    MCAPI void _releaseController(); // NOLINT

private:
};
