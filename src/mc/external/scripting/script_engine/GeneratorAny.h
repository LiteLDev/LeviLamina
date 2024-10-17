#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/external/scripting/script_engine/ScriptValue.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class IRuntime; }
namespace Scripting { class ResultAny; }
namespace Scripting { class ScriptValue; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ContextId; }
namespace Scripting { struct GeneratorType; }
// clang-format on

namespace Scripting {

class GeneratorAny : public ::Scripting::ScriptValue {
public:
    // prevent constructor by default
    GeneratorAny();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GeneratorAny() = default;

    MCAPI GeneratorAny(class Scripting::GeneratorAny&& rhs);

    MCAPI GeneratorAny(class Scripting::GeneratorAny const& rhs);

    MCAPI GeneratorAny(
        class Scripting::IRuntime*                                                       runtime,
        struct Scripting::ContextId                                                      contextId,
        class Scripting::WeakLifetimeScope                                               scope,
        class Scripting::StrongTypedObjectHandle<struct Scripting::GeneratorType> const& generatorHandle
    );

    MCAPI class Scripting::GeneratorAny& operator=(class Scripting::GeneratorAny&& rhs);

    MCAPI class Scripting::GeneratorAny& operator=(class Scripting::GeneratorAny const& rhs);

    MCAPI bool valid() const;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI class Scripting::ResultAny nextGeneric(entt::meta_any& argAny, entt::meta_type expectedReturnType) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(class Scripting::GeneratorAny const& rhs);

    MCAPI void* ctor$(class Scripting::GeneratorAny&& rhs);

    MCAPI void* ctor$(
        class Scripting::IRuntime*                                                       runtime,
        struct Scripting::ContextId                                                      contextId,
        class Scripting::WeakLifetimeScope                                               scope,
        class Scripting::StrongTypedObjectHandle<struct Scripting::GeneratorType> const& generatorHandle
    );

    // NOLINTEND
};

}; // namespace Scripting
