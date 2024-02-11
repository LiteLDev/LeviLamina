#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/Privilege.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class IPayload; }
namespace Scripting { class IRuntime; }
namespace Scripting { class LifetimeRegistry; }
namespace Scripting { class ResultAny; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ContextId; }
// clang-format on

namespace Scripting {

class ScriptContext {
public:
    // prevent constructor by default
    ScriptContext& operator=(ScriptContext const&);
    ScriptContext(ScriptContext const&);

public:
    // NOLINTBEGIN
    // symbol: ??0ScriptContext@Scripting@@QEAA@XZ
    MCAPI ScriptContext();

    // symbol: ??0ScriptContext@Scripting@@QEAA@$$QEAV01@@Z
    MCAPI ScriptContext(class Scripting::ScriptContext&& rhs);

    // symbol:
    // ??0ScriptContext@Scripting@@QEAA@PEAVIRuntime@1@UContextId@1@V?$unique_ptr@VLifetimeRegistry@Scripting@@U?$default_delete@VLifetimeRegistry@Scripting@@@std@@@std@@@Z
    MCAPI
    ScriptContext(class Scripting::IRuntime*, struct Scripting::ContextId, std::unique_ptr<class Scripting::LifetimeRegistry>);

    // symbol: ?getContextId@ScriptContext@Scripting@@QEBA?AUContextId@2@XZ
    MCAPI struct Scripting::ContextId getContextId() const;

    // symbol: ?getRuntime@ScriptContext@Scripting@@QEAAPEAVIRuntime@2@XZ
    MCAPI class Scripting::IRuntime* getRuntime();

    // symbol: ?getWeakLifetimeScope@ScriptContext@Scripting@@QEBA?AVWeakLifetimeScope@2@XZ
    MCAPI class Scripting::WeakLifetimeScope getWeakLifetimeScope() const;

    // symbol: ??4ScriptContext@Scripting@@QEAAAEAV01@$$QEAV01@@Z
    MCAPI class Scripting::ScriptContext& operator=(class Scripting::ScriptContext&& rhs);

    // symbol:
    // ?run@ScriptContext@Scripting@@QEAA?AVResultAny@2@AEAVIPayload@2@V?$optional@W4Privilege@Scripting@@@std@@@Z
    MCAPI class Scripting::ResultAny run(class Scripting::IPayload& payload, std::optional<::Scripting::Privilege>);

    // symbol: ??1ScriptContext@Scripting@@QEAA@XZ
    MCAPI ~ScriptContext();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_destroy@ScriptContext@Scripting@@AEAAXXZ
    MCAPI void _destroy();

    // NOLINTEND
};

}; // namespace Scripting
