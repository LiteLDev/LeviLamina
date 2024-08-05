#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ScriptValue.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"

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

    MCAPI GeneratorIteratorAny(class Scripting::GeneratorIteratorAny const&);

    MCAPI
    GeneratorIteratorAny(class Scripting::IRuntime*, struct Scripting::ContextId, class Scripting::WeakLifetimeScope, class Scripting::StrongTypedObjectHandle<struct Scripting::GeneratorIteratorType> const&, class Scripting::IObjectInspector*);

    MCAPI class Scripting::GeneratorIteratorAny& operator=(class Scripting::GeneratorIteratorAny&&);

    MCAPI class Scripting::GeneratorIteratorAny& operator=(class Scripting::GeneratorIteratorAny const&);

    // NOLINTEND
};

}; // namespace Scripting
