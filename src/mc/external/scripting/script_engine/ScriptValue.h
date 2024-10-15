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
    // vIndex: 0
    virtual ~ScriptValue();

    MCAPI ScriptValue();

    MCAPI struct Scripting::ContextId getContextId() const;

    MCAPI class Scripting::WeakLifetimeScope getWeakLifetimeScope() const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$();

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace Scripting
