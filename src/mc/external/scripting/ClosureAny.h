#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/Privilege.h"
#include "mc/external/scripting/ScriptValue.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"
#include "mc/external/scripting/TypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class IObjectInspector; }
namespace Scripting { class IRuntime; }
namespace Scripting { class ResultAny; }
namespace Scripting { class ScriptValue; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClosureType; }
namespace Scripting { struct ContextId; }
// clang-format on

namespace Scripting {

class ClosureAny : public ::Scripting::ScriptValue {
public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ClosureAny();

    MCAPI ClosureAny();

    MCAPI ClosureAny(class Scripting::ClosureAny&& rhs);

    MCAPI ClosureAny(class Scripting::ClosureAny const& rhs);

    MCAPI
    ClosureAny(class Scripting::IRuntime* runtime, struct Scripting::ContextId, class Scripting::WeakLifetimeScope scope, class Scripting::StrongTypedObjectHandle<struct Scripting::ClosureType> handle, class Scripting::IObjectInspector*);

    MCAPI class Scripting::ResultAny
    callGeneric(entt::meta_any* args, uint argc, entt::meta_type, std::optional<::Scripting::Privilege>) const;

    MCAPI bool compareTo(class Scripting::ClosureAny const& rhs) const;

    MCAPI std::optional<struct Scripting::TypedObjectHandle<struct Scripting::ClosureType>> getClosureHandle() const;

    MCAPI class Scripting::ClosureAny& operator=(class Scripting::ClosureAny&& rhs);

    MCAPI class Scripting::ClosureAny& operator=(class Scripting::ClosureAny const& rhs);

    MCAPI bool valid() const;

    // NOLINTEND
};

}; // namespace Scripting
