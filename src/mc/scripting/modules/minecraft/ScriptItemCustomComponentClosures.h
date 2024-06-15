#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/Closure.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptItemCustomComponentBeforeDurabilityDamageEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemCustomComponentClosureFlags; }
namespace ScriptModuleMinecraft { struct ScriptItemCustomComponentCompleteUseEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemCustomComponentConsumeEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemCustomComponentHitEntityEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemCustomComponentMineBlockEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemCustomComponentUseEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemCustomComponentUseOnEvent; }
namespace Scripting { struct InterfaceBinding; }
namespace Scripting { struct Version; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemCustomComponentClosures {
public:
    // prevent constructor by default
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

    // vIndex: 4, symbol:
    // ?onUseOn@ScriptItemCustomComponentClosures@ScriptModuleMinecraft@@UEBA?AV?$optional@V?$Closure@$$A6AXV?$StrongTypedObjectHandle@UScriptItemCustomComponentUseOnEvent@ScriptModuleMinecraft@@@Scripting@@@Z$$V@Scripting@@@std@@XZ
    virtual std::optional<
        class Scripting::Closure<void(class Scripting::StrongTypedObjectHandle<
                                      struct ScriptModuleMinecraft::ScriptItemCustomComponentUseOnEvent>)>>
    onUseOn() const;

    // vIndex: 5, symbol:
    // ?onCompleteUse@ScriptItemCustomComponentClosures@ScriptModuleMinecraft@@UEBA?AV?$optional@V?$Closure@$$A6AXV?$StrongTypedObjectHandle@UScriptItemCustomComponentCompleteUseEvent@ScriptModuleMinecraft@@@Scripting@@@Z$$V@Scripting@@@std@@XZ
    virtual std::optional<
        class Scripting::Closure<void(class Scripting::StrongTypedObjectHandle<
                                      struct ScriptModuleMinecraft::ScriptItemCustomComponentCompleteUseEvent>)>>
    onCompleteUse() const;

    // vIndex: 6, symbol:
    // ?onConsume@ScriptItemCustomComponentClosures@ScriptModuleMinecraft@@UEBA?AV?$optional@V?$Closure@$$A6AXV?$StrongTypedObjectHandle@UScriptItemCustomComponentConsumeEvent@ScriptModuleMinecraft@@@Scripting@@@Z$$V@Scripting@@@std@@XZ
    virtual std::optional<
        class Scripting::Closure<void(class Scripting::StrongTypedObjectHandle<
                                      struct ScriptModuleMinecraft::ScriptItemCustomComponentConsumeEvent>)>>
    onConsume() const;

    // vIndex: 7, symbol:
    // ?onBeforeDurabilityDamage@ScriptItemCustomComponentClosures@ScriptModuleMinecraft@@UEBA?AV?$optional@V?$Closure@$$A6AXV?$StrongTypedObjectHandle@UScriptItemCustomComponentBeforeDurabilityDamageEvent@ScriptModuleMinecraft@@@Scripting@@@Z$$V@Scripting@@@std@@XZ
    virtual std::optional<class Scripting::Closure<
        void(class Scripting::StrongTypedObjectHandle<
             struct ScriptModuleMinecraft::ScriptItemCustomComponentBeforeDurabilityDamageEvent>)>>
    onBeforeDurabilityDamage() const;

    // vIndex: 8, symbol:
    // ?onHitEntity@ScriptItemCustomComponentClosures@ScriptModuleMinecraft@@UEBA?AV?$optional@V?$Closure@$$A6AXV?$StrongTypedObjectHandle@UScriptItemCustomComponentHitEntityEvent@ScriptModuleMinecraft@@@Scripting@@@Z$$V@Scripting@@@std@@XZ
    virtual std::optional<
        class Scripting::Closure<void(class Scripting::StrongTypedObjectHandle<
                                      struct ScriptModuleMinecraft::ScriptItemCustomComponentHitEntityEvent>)>>
    onHitEntity() const;

    // vIndex: 9, symbol:
    // ?onMineBlock@ScriptItemCustomComponentClosures@ScriptModuleMinecraft@@UEBA?AV?$optional@V?$Closure@$$A6AXV?$StrongTypedObjectHandle@UScriptItemCustomComponentMineBlockEvent@ScriptModuleMinecraft@@@Scripting@@@Z$$V@Scripting@@@std@@XZ
    virtual std::optional<
        class Scripting::Closure<void(class Scripting::StrongTypedObjectHandle<
                                      struct ScriptModuleMinecraft::ScriptItemCustomComponentMineBlockEvent>)>>
    onMineBlock() const;

    // symbol: ??0ScriptItemCustomComponentClosures@ScriptModuleMinecraft@@QEAA@AEBU01@@Z
    MCAPI ScriptItemCustomComponentClosures(struct ScriptModuleMinecraft::ScriptItemCustomComponentClosures const&);

    // symbol: ??4ScriptItemCustomComponentClosures@ScriptModuleMinecraft@@QEAAAEAU01@$$QEAU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptItemCustomComponentClosures&
    operator=(struct ScriptModuleMinecraft::ScriptItemCustomComponentClosures&&);

    // symbol: ??4ScriptItemCustomComponentClosures@ScriptModuleMinecraft@@QEAAAEAU01@AEBU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptItemCustomComponentClosures&
    operator=(struct ScriptModuleMinecraft::ScriptItemCustomComponentClosures const&);

    // symbol: ?bind@ScriptItemCustomComponentClosures@ScriptModuleMinecraft@@SA?AUInterfaceBinding@Scripting@@XZ
    MCAPI static struct Scripting::InterfaceBinding bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
