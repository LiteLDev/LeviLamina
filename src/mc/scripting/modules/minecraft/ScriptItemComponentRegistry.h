#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/Result.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class IScriptItemCustomComponentRegistry; }
namespace ScriptModuleMinecraft { struct ScriptItemCustomComponentAlreadyRegisteredError; }
namespace ScriptModuleMinecraft { struct ScriptItemCustomComponentClosures; }
namespace ScriptModuleMinecraft { struct ScriptItemCustomComponentNameError; }
namespace ScriptModuleMinecraft { struct ScriptItemCustomComponentReloadNewComponentError; }
namespace ScriptModuleMinecraft { struct ScriptItemCustomComponentReloadNewEventError; }
namespace ScriptModuleMinecraft { struct ScriptItemCustomComponentReloadVersionError; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptItemComponentRegistry {
public:
    // prevent constructor by default
    ScriptItemComponentRegistry& operator=(ScriptItemComponentRegistry const&);
    ScriptItemComponentRegistry(ScriptItemComponentRegistry const&);
    ScriptItemComponentRegistry();

public:
    // NOLINTBEGIN
    // symbol: ??0ScriptItemComponentRegistry@ScriptModuleMinecraft@@QEAA@AEAVIScriptItemCustomComponentRegistry@1@@Z
    MCAPI explicit ScriptItemComponentRegistry(class ScriptModuleMinecraft::IScriptItemCustomComponentRegistry&);

    // symbol:
    // ?registerCustomComponent@ScriptItemComponentRegistry@ScriptModuleMinecraft@@QEAA?AV?$Result@XUScriptItemCustomComponentNameError@ScriptModuleMinecraft@@UScriptItemCustomComponentAlreadyRegisteredError@2@UScriptItemCustomComponentReloadVersionError@2@UScriptItemCustomComponentReloadNewEventError@2@UScriptItemCustomComponentReloadNewComponentError@2@@Scripting@@AEAVWeakLifetimeScope@4@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAUScriptItemCustomComponentClosures@2@@Z
    MCAPI class Scripting::Result<
        void,
        struct ScriptModuleMinecraft::ScriptItemCustomComponentNameError,
        struct ScriptModuleMinecraft::ScriptItemCustomComponentAlreadyRegisteredError,
        struct ScriptModuleMinecraft::ScriptItemCustomComponentReloadVersionError,
        struct ScriptModuleMinecraft::ScriptItemCustomComponentReloadNewEventError,
        struct ScriptModuleMinecraft::ScriptItemCustomComponentReloadNewComponentError>
    registerCustomComponent(class Scripting::WeakLifetimeScope&, std::string const&, struct ScriptModuleMinecraft::ScriptItemCustomComponentClosures&);

    // symbol: ?bind@ScriptItemComponentRegistry@ScriptModuleMinecraft@@SA?AUClassBinding@Scripting@@XZ
    MCAPI static struct Scripting::ClassBinding bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
