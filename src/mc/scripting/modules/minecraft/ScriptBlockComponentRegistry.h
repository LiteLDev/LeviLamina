#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/Result.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptBlockCustomComponentInterface; }
namespace Scripting { class DependencyLocator; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct EngineError; }
namespace Scripting { struct Error; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockComponentRegistry {
public:
    // prevent constructor by default
    ScriptBlockComponentRegistry& operator=(ScriptBlockComponentRegistry const&);
    ScriptBlockComponentRegistry(ScriptBlockComponentRegistry const&);
    ScriptBlockComponentRegistry();

public:
    // NOLINTBEGIN
    // symbol:
    // ?registerCustomComponent@ScriptBlockComponentRegistry@ScriptModuleMinecraft@@QEAA?AV?$Result@XUEngineError@Scripting@@UError@2@@Scripting@@AEAVWeakLifetimeScope@4@AEAVDependencyLocator@4@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UScriptBlockCustomComponentInterface@2@@Z
    MCAPI class Scripting::Result<void, struct Scripting::EngineError, struct Scripting::Error> registerCustomComponent(
        class Scripting::WeakLifetimeScope&,
        class Scripting::DependencyLocator&,
        std::string const&,
        struct ScriptModuleMinecraft::ScriptBlockCustomComponentInterface
    );

    // symbol: ?bind@ScriptBlockComponentRegistry@ScriptModuleMinecraft@@SA?AUClassBinding@Scripting@@XZ
    MCAPI static struct Scripting::ClassBinding bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
