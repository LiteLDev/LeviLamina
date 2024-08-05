#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ScriptValue.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"

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

    MCAPI GeneratorAny(class Scripting::GeneratorAny&&);

    MCAPI GeneratorAny(class Scripting::GeneratorAny const&);

    MCAPI
    GeneratorAny(class Scripting::IRuntime*, struct Scripting::ContextId, class Scripting::WeakLifetimeScope, class Scripting::StrongTypedObjectHandle<struct Scripting::GeneratorType> const&);

    MCAPI class Scripting::GeneratorAny& operator=(class Scripting::GeneratorAny&&);

    MCAPI class Scripting::GeneratorAny& operator=(class Scripting::GeneratorAny const&);

    MCAPI bool valid() const;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI class Scripting::ResultAny nextGeneric(entt::meta_any&, entt::meta_type) const;

    // NOLINTEND
};

}; // namespace Scripting
