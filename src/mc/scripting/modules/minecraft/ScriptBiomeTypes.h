#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class BiomeRegistry;
namespace ScriptModuleMinecraft { class ScriptBiomeType; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBiomeTypes {
public:
    // prevent constructor by default
    ScriptBiomeTypes& operator=(ScriptBiomeTypes const&);
    ScriptBiomeTypes(ScriptBiomeTypes const&);
    ScriptBiomeTypes();

public:
    // NOLINTBEGIN
    // symbol:
    // ?get@ScriptBiomeTypes@ScriptModuleMinecraft@@QEAA?AV?$optional@V?$StrongTypedObjectHandle@VScriptBiomeType@ScriptModuleMinecraft@@@Scripting@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@AEAVWeakLifetimeScope@Scripting@@@Z
    MCAPI std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBiomeType>>
          get(std::string const&, class Scripting::WeakLifetimeScope&);

    // symbol:
    // ?bind@ScriptBiomeTypes@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptBiomeTypes@ScriptModuleMinecraft@@@Scripting@@V?$NonOwnerPointer@VBiomeRegistry@@@Bedrock@@@Z
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptBiomeTypes>
        bind(class Bedrock::NonOwnerPointer<class BiomeRegistry>);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_generateAllBiomeTypeHandles@ScriptBiomeTypes@ScriptModuleMinecraft@@AEAAXAEAVWeakLifetimeScope@Scripting@@@Z
    MCAPI void _generateAllBiomeTypeHandles(class Scripting::WeakLifetimeScope&);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
