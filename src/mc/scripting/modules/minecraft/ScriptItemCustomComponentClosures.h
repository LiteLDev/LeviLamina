#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/Closure.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptItemCustomComponentClosureFlags; }
namespace ScriptModuleMinecraft { struct ScriptItemCustomComponentUseEvent; }
namespace Scripting { struct InterfaceBinding; }
namespace Scripting { struct Version; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemCustomComponentClosures {
public:
    // prevent constructor by default
    ScriptItemCustomComponentClosures& operator=(ScriptItemCustomComponentClosures const&);
    ScriptItemCustomComponentClosures(ScriptItemCustomComponentClosures const&);
    ScriptItemCustomComponentClosures();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ScriptItemCustomComponentClosures@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptItemCustomComponentClosures() = default;

    // vIndex: 1, symbol:
    // ?getVersion@?$ScriptItemCustomComponentClosuresBinding@UScriptItemCustomComponentClosures@ScriptModuleMinecraft@@@ScriptModuleMinecraft@@UEBA?AUVersion@Scripting@@XZ
    virtual struct Scripting::Version getVersion() const;

    // vIndex: 2, symbol:
    // ?toFlags@?$ScriptItemCustomComponentClosuresBinding@UScriptItemCustomComponentClosures@ScriptModuleMinecraft@@@ScriptModuleMinecraft@@UEBA?AUScriptItemCustomComponentClosureFlags@2@XZ
    virtual struct ScriptModuleMinecraft::ScriptItemCustomComponentClosureFlags toFlags() const;

    // vIndex: 3, symbol:
    // ?onUse@ScriptItemCustomComponentClosures@ScriptModuleMinecraft@@UEBA?AV?$optional@V?$Closure@$$A6AXV?$StrongTypedObjectHandle@UScriptItemCustomComponentUseEvent@ScriptModuleMinecraft@@@Scripting@@@Z$$V@Scripting@@@std@@XZ
    virtual std::optional<
        class Scripting::Closure<void(class Scripting::StrongTypedObjectHandle<
                                      struct ScriptModuleMinecraft::ScriptItemCustomComponentUseEvent>)>>
    onUse() const;

    // symbol: ?bind@ScriptItemCustomComponentClosures@ScriptModuleMinecraft@@SA?AUInterfaceBinding@Scripting@@XZ
    MCAPI static struct Scripting::InterfaceBinding bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
