#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class IRuntime; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ContextId; }
// clang-format on

namespace Scripting {

class ScriptValue {
public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ScriptValue@Scripting@@UEAA@XZ
    virtual ~ScriptValue();

    // symbol: ??0ScriptValue@Scripting@@QEAA@XZ
    MCAPI ScriptValue();

    // symbol: ??0ScriptValue@Scripting@@QEAA@$$QEAV01@@Z
    MCAPI ScriptValue(class Scripting::ScriptValue&& rhs);

    // symbol: ??0ScriptValue@Scripting@@QEAA@AEBV01@@Z
    MCAPI ScriptValue(class Scripting::ScriptValue const& rhs);

    // symbol: ??0ScriptValue@Scripting@@QEAA@PEAVIRuntime@1@UContextId@1@VWeakLifetimeScope@1@@Z
    MCAPI ScriptValue(
        class Scripting::IRuntime* runtime,
        struct Scripting::ContextId,
        class Scripting::WeakLifetimeScope scope
    );

    // symbol: ?getContextId@ScriptValue@Scripting@@QEBA?AUContextId@2@XZ
    MCAPI struct Scripting::ContextId getContextId() const;

    // symbol: ?getWeakLifetimeScope@ScriptValue@Scripting@@QEBA?AVWeakLifetimeScope@2@XZ
    MCAPI class Scripting::WeakLifetimeScope getWeakLifetimeScope() const;

    // symbol: ??4ScriptValue@Scripting@@QEAAAEAV01@$$QEAV01@@Z
    MCAPI class Scripting::ScriptValue& operator=(class Scripting::ScriptValue&& rhs);

    // symbol: ??4ScriptValue@Scripting@@QEAAAEAV01@AEBV01@@Z
    MCAPI class Scripting::ScriptValue& operator=(class Scripting::ScriptValue const& rhs);

    // NOLINTEND
};

}; // namespace Scripting
