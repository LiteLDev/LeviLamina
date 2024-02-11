#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class BlockLegacy;
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockType {
public:
    // prevent constructor by default
    ScriptBlockType& operator=(ScriptBlockType const&);
    ScriptBlockType(ScriptBlockType const&);
    ScriptBlockType();

public:
    // NOLINTBEGIN
    // symbol:
    // ?createDefaultBlockPermutationV010@ScriptBlockType@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$StrongTypedObjectHandle@VScriptBlockPermutation@ScriptModuleMinecraft@@@Scripting@@$$V@Scripting@@XZ
    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockPermutation>>
    createDefaultBlockPermutationV010() const;

    // symbol: ?getBlock@ScriptBlockType@ScriptModuleMinecraft@@QEBAAEBVBlockLegacy@@XZ
    MCAPI class BlockLegacy const& getBlock() const;

    // symbol:
    // ?getId@ScriptBlockType@ScriptModuleMinecraft@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getId() const;

    // symbol:
    // ?bind@ScriptBlockType@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptBlockType@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptBlockType> bind();

    // symbol:
    // ?getOrCreateHandle@ScriptBlockType@ScriptModuleMinecraft@@SA?AV?$StrongTypedObjectHandle@VScriptBlockType@ScriptModuleMinecraft@@@Scripting@@AEBVWeakLifetimeScope@4@AEBVBlockLegacy@@@Z
    MCAPI static class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockType>
    getOrCreateHandle(class Scripting::WeakLifetimeScope const& scope, class BlockLegacy const& block);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
