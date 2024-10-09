#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/reflection/Privilege.h"

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
    MCAPI ScriptContext();

    MCAPI ScriptContext(class Scripting::ScriptContext&& rhs);

    MCAPI ScriptContext(
        class Scripting::IRuntime*                         runtime,
        struct Scripting::ContextId                        contextId,
        std::unique_ptr<class Scripting::LifetimeRegistry> registry
    );

    MCAPI struct Scripting::ContextId getContextId() const;

    MCAPI class Scripting::IRuntime* getRuntime();

    MCAPI class Scripting::WeakLifetimeScope getWeakLifetimeScope() const;

    MCAPI class Scripting::ScriptContext& operator=(class Scripting::ScriptContext&& rhs);

    MCAPI class Scripting::ResultAny
    run(class Scripting::IPayload& payload, std::optional<::Scripting::Privilege> privilege);

    MCAPI ~ScriptContext();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _destroy();

    // NOLINTEND
};

}; // namespace Scripting
