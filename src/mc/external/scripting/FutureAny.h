#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ScriptValue.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class IObjectInspector; }
namespace Scripting { class IRuntime; }
namespace Scripting { class ResultAny; }
namespace Scripting { class ScriptValue; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ContextId; }
namespace Scripting { struct FutureType; }
// clang-format on

namespace Scripting {

class FutureAny : public ::Scripting::ScriptValue {
public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FutureAny();

    MCAPI FutureAny();

    MCAPI FutureAny(class Scripting::FutureAny const& rhs);

    MCAPI
    FutureAny(class Scripting::IRuntime* runtime, struct Scripting::ContextId, class Scripting::WeakLifetimeScope scope, class Scripting::StrongTypedObjectHandle<struct Scripting::FutureType>, class Scripting::IObjectInspector*);

    MCAPI class Scripting::ResultAny getResult() const;

    MCAPI bool isPending() const;

    MCAPI bool isRejected() const;

    MCAPI class Scripting::FutureAny& operator=(class Scripting::FutureAny&& rhs);

    MCAPI class Scripting::FutureAny& operator=(class Scripting::FutureAny const& rhs);

    MCAPI bool valid() const;

    // NOLINTEND
};

}; // namespace Scripting
