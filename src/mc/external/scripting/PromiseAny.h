#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ScriptValue.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"
#include "mc/external/scripting/TypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class IRuntime; }
namespace Scripting { class ResultAny; }
namespace Scripting { class ScriptValue; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ContextId; }
namespace Scripting { struct PromiseType; }
// clang-format on

namespace Scripting {

class PromiseAny : public ::Scripting::ScriptValue {
public:
    // prevent constructor by default
    PromiseAny();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PromiseAny() = default;

    MCAPI PromiseAny(class Scripting::PromiseAny&& rhs);

    MCAPI PromiseAny(class Scripting::PromiseAny const& rhs);

    MCAPI
    PromiseAny(class Scripting::IRuntime* runtime, struct Scripting::ContextId, class Scripting::WeakLifetimeScope scope, class Scripting::StrongTypedObjectHandle<struct Scripting::PromiseType> const&);

    MCAPI std::optional<struct Scripting::TypedObjectHandle<struct Scripting::PromiseType>> getPromiseHandle() const;

    MCAPI class Scripting::PromiseAny& operator=(class Scripting::PromiseAny&& rhs);

    MCAPI class Scripting::PromiseAny& operator=(class Scripting::PromiseAny const& rhs);

    MCAPI bool valid() const;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI class Scripting::ResultAny rejectGeneric(entt::meta_any& any) const;

    MCAPI class Scripting::ResultAny resolveGeneric(entt::meta_any& any) const;

    // NOLINTEND
};

}; // namespace Scripting
