#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class Dimension;
class ItemStackBase;
class Vec3;
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPlayerPlaceBlockBeforeEvent {
public:
    // prevent constructor by default
    ScriptPlayerPlaceBlockBeforeEvent& operator=(ScriptPlayerPlaceBlockBeforeEvent const&);
    ScriptPlayerPlaceBlockBeforeEvent();

public:
    // NOLINTBEGIN
    // symbol: ??0ScriptPlayerPlaceBlockBeforeEvent@ScriptModuleMinecraft@@QEAA@AEBU01@@Z
    MCAPI ScriptPlayerPlaceBlockBeforeEvent(struct ScriptModuleMinecraft::ScriptPlayerPlaceBlockBeforeEvent const&);

    // symbol:
    // ??0ScriptPlayerPlaceBlockBeforeEvent@ScriptModuleMinecraft@@QEAA@V?$StrongTypedObjectHandle@VScriptPlayer@ScriptModuleMinecraft@@@Scripting@@AEAVDimension@@AEBVBlockPos@@EAEBVVec3@@AEBVItemStackBase@@AEBVWeakLifetimeScope@3@@Z
    MCAPI
    ScriptPlayerPlaceBlockBeforeEvent(class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptPlayer>, class Dimension&, class BlockPos const&, uchar, class Vec3 const&, class ItemStackBase const&, class Scripting::WeakLifetimeScope const&);

    // symbol: ??4ScriptPlayerPlaceBlockBeforeEvent@ScriptModuleMinecraft@@QEAAAEAU01@$$QEAU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptPlayerPlaceBlockBeforeEvent&
    operator=(struct ScriptModuleMinecraft::ScriptPlayerPlaceBlockBeforeEvent&&);

    // symbol:
    // ?bind@ScriptPlayerPlaceBlockBeforeEvent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@UScriptPlayerPlaceBlockBeforeEvent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptPlayerPlaceBlockBeforeEvent>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
