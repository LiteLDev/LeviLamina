#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/InterfaceBindingBuilder.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class Vec3;
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockRaycastHit {
public:
    // prevent constructor by default
    ScriptBlockRaycastHit(ScriptBlockRaycastHit const&);
    ScriptBlockRaycastHit();

public:
    // NOLINTBEGIN
    // symbol:
    // ??0ScriptBlockRaycastHit@ScriptModuleMinecraft@@QEAA@AEAVBlockSource@@AEBVBlockPos@@EAEBVVec3@@AEBVWeakLifetimeScope@Scripting@@@Z
    MCAPI
    ScriptBlockRaycastHit(class BlockSource&, class BlockPos const&, uchar, class Vec3 const&, class Scripting::WeakLifetimeScope const&);

    // symbol: ??4ScriptBlockRaycastHit@ScriptModuleMinecraft@@QEAAAEAV01@$$QEAV01@@Z
    MCAPI class ScriptModuleMinecraft::ScriptBlockRaycastHit&
    operator=(class ScriptModuleMinecraft::ScriptBlockRaycastHit&&);

    // symbol: ??4ScriptBlockRaycastHit@ScriptModuleMinecraft@@QEAAAEAV01@AEBV01@@Z
    MCAPI class ScriptModuleMinecraft::ScriptBlockRaycastHit&
    operator=(class ScriptModuleMinecraft::ScriptBlockRaycastHit const&);

    // symbol: ??1ScriptBlockRaycastHit@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ~ScriptBlockRaycastHit();

    // symbol:
    // ?bind@ScriptBlockRaycastHit@ScriptModuleMinecraft@@SA?AV?$InterfaceBindingBuilder@VScriptBlockRaycastHit@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::InterfaceBindingBuilder<class ScriptModuleMinecraft::ScriptBlockRaycastHit> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
