#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/script_engine/ScriptValue.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class IRuntime; }
namespace Scripting { class ResultAny; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ContextId; }
namespace Scripting { struct GeneratorType; }
// clang-format on

namespace Scripting {

class GeneratorAny : public ::Scripting::ScriptValue {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk3dab5e;
    // NOLINTEND

public:
    // prevent constructor by default
    GeneratorAny& operator=(GeneratorAny const&);
    GeneratorAny();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GeneratorAny() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI GeneratorAny(::Scripting::GeneratorAny const& rhs);

    MCNAPI GeneratorAny(
        ::Scripting::IRuntime*                                                  runtime,
        ::Scripting::ContextId                                                  contextId,
        ::Scripting::WeakLifetimeScope                                          scope,
        ::Scripting::StrongTypedObjectHandle<::Scripting::GeneratorType> const& generatorHandle
    );

    MCNAPI ::Scripting::ResultAny
    nextGeneric(::entt::meta_any& argAny, ::entt::meta_type const& expectedReturnType) const;

    MCNAPI ::Scripting::GeneratorAny& operator=(::Scripting::GeneratorAny&& rhs);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Scripting::GeneratorAny const& rhs);

    MCNAPI void* $ctor(
        ::Scripting::IRuntime*                                                  runtime,
        ::Scripting::ContextId                                                  contextId,
        ::Scripting::WeakLifetimeScope                                          scope,
        ::Scripting::StrongTypedObjectHandle<::Scripting::GeneratorType> const& generatorHandle
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Scripting
