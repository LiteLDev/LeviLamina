#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/standard/IScriptDebugger.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class IDebuggerController; }
// clang-format on

class ScriptDebugger : public ::IScriptDebugger {
public:
    // prevent constructor by default
    ScriptDebugger& operator=(ScriptDebugger const&);
    ScriptDebugger(ScriptDebugger const&);
    ScriptDebugger();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ?listen@ScriptDebugger@@UEAA_NG@Z
    virtual bool listen(ushort);

    // vIndex: 1, symbol:
    // ?connect@ScriptDebugger@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@Z
    virtual bool connect(std::string const&, ushort);

    // vIndex: 2, symbol: ?close@ScriptDebugger@@UEAAXXZ
    virtual void close();

    // vIndex: 3, symbol: ?startProfiler@ScriptDebugger@@UEAAXXZ
    virtual void startProfiler();

    // vIndex: 4, symbol:
    // ?stopProfiler@ScriptDebugger@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void stopProfiler(std::string const&);

    // vIndex: 5, symbol: ?getResourceStats@ScriptDebugger@@UEBA?AUScriptResourceStats@@XZ
    virtual struct ScriptResourceStats getResourceStats() const;

    // vIndex: 6, symbol: ??1@@UEAA@XZ
    virtual ~ScriptDebugger();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_createController@ScriptDebugger@@AEAAPEAVIDebuggerController@Scripting@@XZ
    MCAPI class Scripting::IDebuggerController* _createController();

    // symbol: ?_releaseController@ScriptDebugger@@AEAAXXZ
    MCAPI void _releaseController();

    // NOLINTEND
};
