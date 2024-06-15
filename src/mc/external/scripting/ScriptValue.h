#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ContextId; }
// clang-format on

namespace Scripting {

class ScriptValue {
public:
    // prevent constructor by default
    ScriptValue& operator=(ScriptValue const&);
    ScriptValue(ScriptValue const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ScriptValue@Scripting@@UEAA@XZ
    virtual ~ScriptValue();

    // symbol: ??0ScriptValue@Scripting@@QEAA@XZ
    MCAPI ScriptValue();

    // symbol: ?getContextId@ScriptValue@Scripting@@QEBA?AUContextId@2@XZ
    MCAPI struct Scripting::ContextId getContextId() const;

    // symbol: ?getWeakLifetimeScope@ScriptValue@Scripting@@QEBA?AVWeakLifetimeScope@2@XZ
    MCAPI class Scripting::WeakLifetimeScope getWeakLifetimeScope() const;

    // NOLINTEND
};

}; // namespace Scripting
