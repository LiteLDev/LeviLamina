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
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk673a09;
    ::ll::UntypedStorage<1, 1>  mUnkac9107;
    ::ll::UntypedStorage<8, 8>  mUnk374a26;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptContext& operator=(ScriptContext const&);
    ScriptContext(ScriptContext const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptContext();

    MCAPI ScriptContext(::Scripting::ScriptContext&& rhs);

    MCAPI ScriptContext(
        ::std::shared_ptr<::Scripting::IRuntime>         runtime,
        ::Scripting::ContextId                           contextId,
        ::std::unique_ptr<::Scripting::LifetimeRegistry> registry
    );

    MCAPI void _destroy();

    MCFOLD ::Scripting::ContextId getContextId() const;

    MCFOLD ::Scripting::IRuntime* getRuntime();

    MCAPI ::Scripting::WeakLifetimeScope getWeakLifetimeScope() const;

    MCAPI ::Scripting::ScriptContext& operator=(::Scripting::ScriptContext&& rhs);

    MCAPI ::Scripting::ResultAny run(::Scripting::IPayload& payload, ::std::optional<::Scripting::Privilege> privilege);

    MCAPI ~ScriptContext();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::Scripting::ScriptContext&& rhs);

    MCAPI void* $ctor(
        ::std::shared_ptr<::Scripting::IRuntime>         runtime,
        ::Scripting::ContextId                           contextId,
        ::std::unique_ptr<::Scripting::LifetimeRegistry> registry
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
