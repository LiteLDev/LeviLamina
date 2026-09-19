#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/reflection/scripting/Privilege.h"
#include "mc/deps/script_core/runtime/scripting/ContextId.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class IPayload; }
namespace Scripting { class IRuntime; }
namespace Scripting { class LifetimeRegistry; }
namespace Scripting { class ResultAny; }
// clang-format on

namespace Scripting {

class ScriptContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Scripting::IRuntime>>        mRuntime;
    ::ll::TypedStorage<1, 1, ::Scripting::ContextId>                           mContextId;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Scripting::LifetimeRegistry>> mRegistry;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptContext& operator=(ScriptContext const&);
    ScriptContext(ScriptContext const&);
    ScriptContext();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _destroy();

    MCAPI ::Scripting::ScriptContext& operator=(::Scripting::ScriptContext&& rhs);

    MCAPI ::Scripting::ResultAny run(::Scripting::IPayload& payload, ::std::optional<::Scripting::Privilege> privilege);
    // NOLINTEND
};

} // namespace Scripting
