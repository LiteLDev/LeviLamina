#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/external/scripting/script_engine/ScriptValue.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class IObjectInspector; }
namespace Scripting { class IRuntime; }
namespace Scripting { class ScriptValue; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ContextId; }
namespace Scripting { struct GeneratorIteratorType; }
// clang-format on

namespace Scripting {

class GeneratorIteratorAny : public ::Scripting::ScriptValue {
public:
    // prevent constructor by default
    GeneratorIteratorAny();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GeneratorIteratorAny();

    MCAPI GeneratorIteratorAny(class Scripting::GeneratorIteratorAny const& rhs);

    MCAPI GeneratorIteratorAny(
        class Scripting::IRuntime*         runtime,
        struct Scripting::ContextId        contextId,
        class Scripting::WeakLifetimeScope scope,
        class Scripting::StrongTypedObjectHandle<struct Scripting::GeneratorIteratorType> const&
                                           generatorIteratorHandle,
        class Scripting::IObjectInspector* inspector
    );

    MCAPI class Scripting::GeneratorIteratorAny& operator=(class Scripting::GeneratorIteratorAny&& rhs);

    MCAPI class Scripting::GeneratorIteratorAny& operator=(class Scripting::GeneratorIteratorAny const& rhs);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(class Scripting::GeneratorIteratorAny const& rhs);

    MCAPI void* ctor$(
        class Scripting::IRuntime*         runtime,
        struct Scripting::ContextId        contextId,
        class Scripting::WeakLifetimeScope scope,
        class Scripting::StrongTypedObjectHandle<struct Scripting::GeneratorIteratorType> const&
                                           generatorIteratorHandle,
        class Scripting::IObjectInspector* inspector
    );

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace Scripting
