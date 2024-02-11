#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class Biome;
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBiomeType {
public:
    // prevent constructor by default
    ScriptBiomeType& operator=(ScriptBiomeType const&);
    ScriptBiomeType();

public:
    // NOLINTBEGIN
    // symbol: ??0ScriptBiomeType@ScriptModuleMinecraft@@QEAA@AEBV01@@Z
    MCAPI ScriptBiomeType(class ScriptModuleMinecraft::ScriptBiomeType const&);

    // symbol:
    // ?getId@ScriptBiomeType@ScriptModuleMinecraft@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getId() const;

    // symbol: ??4ScriptBiomeType@ScriptModuleMinecraft@@QEAAAEAV01@$$QEAV01@@Z
    MCAPI class ScriptModuleMinecraft::ScriptBiomeType& operator=(class ScriptModuleMinecraft::ScriptBiomeType&&);

    // symbol: ??1ScriptBiomeType@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ~ScriptBiomeType();

    // symbol:
    // ?bind@ScriptBiomeType@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptBiomeType@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptBiomeType> bind();

    // symbol:
    // ?getOrCreateHandle@ScriptBiomeType@ScriptModuleMinecraft@@SA?AV?$StrongTypedObjectHandle@VScriptBiomeType@ScriptModuleMinecraft@@@Scripting@@AEBVBiome@@AEBVWeakLifetimeScope@4@@Z
    MCAPI static class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBiomeType>
    getOrCreateHandle(class Biome const&, class Scripting::WeakLifetimeScope const&);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
