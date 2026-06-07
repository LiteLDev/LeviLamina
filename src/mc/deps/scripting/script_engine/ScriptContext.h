#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/reflection/Privilege.h"

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
    ::ll::UntypedStorage<8, 8>  mUnkabfb64;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptContext& operator=(ScriptContext const&);
    ScriptContext(ScriptContext const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptContext();

    MCNAPI ScriptContext(::Scripting::ScriptContext&& rhs);

    MCNAPI ScriptContext(
        ::std::shared_ptr<::Scripting::IRuntime>         runtime,
        ::Scripting::ContextId                           contextId,
        ::std::unique_ptr<::Scripting::LifetimeRegistry> registry
    );

    MCNAPI void _destroy();

    MCNAPI ::Scripting::ContextId getContextId() const;

    MCNAPI ::Scripting::LifetimeRegistry* getLifetimeRegistry() const;

    MCNAPI ::Scripting::IRuntime* getRuntime();

    MCNAPI ::Scripting::WeakLifetimeScope getWeakLifetimeScope() const;

    MCNAPI ::Scripting::ScriptContext& operator=(::Scripting::ScriptContext&& rhs);

    MCNAPI ::Scripting::ResultAny
    run(::Scripting::IPayload& payload, ::std::optional<::Scripting::Privilege> privilege);

    MCNAPI ~ScriptContext();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::Scripting::ScriptContext&& rhs);

    MCNAPI void* $ctor(
        ::std::shared_ptr<::Scripting::IRuntime>         runtime,
        ::Scripting::ContextId                           contextId,
        ::std::unique_ptr<::Scripting::LifetimeRegistry> registry
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
