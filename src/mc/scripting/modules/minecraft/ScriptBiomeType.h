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
    ScriptBiomeType(ScriptBiomeType const&);
    ScriptBiomeType();

public:
    // NOLINTBEGIN
    // symbol:
    // ?getId@ScriptBiomeType@ScriptModuleMinecraft@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getId() const;

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
