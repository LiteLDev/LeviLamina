#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptBlockVolumeBase.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace ScriptModuleMinecraft { class ScriptBlockLocationIterator; }
namespace ScriptModuleMinecraft { class ScriptBlockVolumeBase; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptListBlockVolume : public ::ScriptModuleMinecraft::ScriptBlockVolumeBase {
public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ScriptListBlockVolume@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptListBlockVolume();

    // vIndex: 1, symbol:
    // ?getBlockLocationIterator@ScriptListBlockVolume@ScriptModuleMinecraft@@UEAA?AV?$StrongTypedObjectHandle@VScriptBlockLocationIterator@ScriptModuleMinecraft@@@Scripting@@VWeakLifetimeScope@4@@Z
    virtual class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockLocationIterator>
        getBlockLocationIterator(class Scripting::WeakLifetimeScope);

    // symbol: ??0ScriptListBlockVolume@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ScriptListBlockVolume();

    // symbol: ??0ScriptListBlockVolume@ScriptModuleMinecraft@@QEAA@AEBV01@@Z
    MCAPI ScriptListBlockVolume(class ScriptModuleMinecraft::ScriptListBlockVolume const&);

    // symbol:
    // ??0ScriptListBlockVolume@ScriptModuleMinecraft@@QEAA@AEBV?$vector@VVec3@@V?$allocator@VVec3@@@std@@@std@@@Z
    MCAPI explicit ScriptListBlockVolume(std::vector<class Vec3> const&);

    // symbol:
    // ?add@ScriptListBlockVolume@ScriptModuleMinecraft@@QEAAXAEBV?$vector@VVec3@@V?$allocator@VVec3@@@std@@@std@@@Z
    MCAPI void add(std::vector<class Vec3> const&);

    // symbol: ??4ScriptListBlockVolume@ScriptModuleMinecraft@@QEAAAEAV01@AEBV01@@Z
    MCAPI class ScriptModuleMinecraft::ScriptListBlockVolume&
    operator=(class ScriptModuleMinecraft::ScriptListBlockVolume const&);

    // symbol:
    // ?remove@ScriptListBlockVolume@ScriptModuleMinecraft@@QEAAXAEBV?$vector@VVec3@@V?$allocator@VVec3@@@std@@@std@@@Z
    MCAPI void remove(std::vector<class Vec3> const&);

    // symbol:
    // ?bind@ScriptListBlockVolume@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptListBlockVolume@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptListBlockVolume> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
