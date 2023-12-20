#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class IDebuggerController; }
// clang-format on

class ScriptDebugger {
public:
    // prevent constructor by default
    ScriptDebugger& operator=(ScriptDebugger const&);
    ScriptDebugger(ScriptDebugger const&);
    ScriptDebugger();

public:
    // NOLINTBEGIN
    // symbol: ?close@ScriptDebugger@@UEAAXXZ
    MCVAPI void close();

    // symbol: ?connect@ScriptDebugger@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@Z
    MCVAPI bool connect(std::string const&, ushort);

    // symbol: ?getResourceStats@ScriptDebugger@@UEBA?AUScriptResourceStats@@XZ
    MCVAPI struct ScriptResourceStats getResourceStats() const;

    // symbol: ?isStatPublisherEnabled@ScriptDebugger@@UEBA_NXZ
    MCVAPI bool isStatPublisherEnabled() const;

    // symbol: ?listen@ScriptDebugger@@UEAA_NGV?$duration@_JU?$ratio@$00$00@std@@@chrono@std@@@Z
    MCVAPI bool listen(ushort, std::chrono::seconds);

    // symbol: ?publishStats@ScriptDebugger@@UEAAXAEBV?$vector@UScriptStat@@V?$allocator@UScriptStat@@@std@@@std@@@Z
    MCVAPI void publishStats(std::vector<struct ScriptStat> const&);

    // symbol: ?startProfiler@ScriptDebugger@@UEAAXXZ
    MCVAPI void startProfiler();

    // symbol: ?stopProfiler@ScriptDebugger@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI void stopProfiler(std::string const&);

    // symbol: ?checkConnections@ScriptDebugger@@QEAA_NXZ
    MCAPI bool checkConnections();

    // symbol: ?isConnected@ScriptDebugger@@QEBA_NXZ
    MCAPI bool isConnected() const;

    // symbol: ?waitAutoAttach@ScriptDebugger@@QEAAXV?$duration@_JU?$ratio@$00$00@std@@@chrono@std@@0@Z
    MCAPI void waitAutoAttach(std::chrono::seconds, std::chrono::seconds);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_createController@ScriptDebugger@@AEAAPEAVIDebuggerController@Scripting@@XZ
    MCAPI class Scripting::IDebuggerController* _createController();

    // symbol: ?_releaseController@ScriptDebugger@@AEAAXXZ
    MCAPI void _releaseController();

    // NOLINTEND
};
