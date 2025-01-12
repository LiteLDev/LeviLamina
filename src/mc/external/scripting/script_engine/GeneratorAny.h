#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/external/scripting/script_engine/ScriptValue.h"

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
    GeneratorAny();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GeneratorAny() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI GeneratorAny(::Scripting::GeneratorAny const& rhs);

    MCAPI GeneratorAny(::Scripting::GeneratorAny&& rhs);

    MCAPI GeneratorAny(
        ::Scripting::IRuntime*                                                  runtime,
        ::Scripting::ContextId                                                  contextId,
        ::Scripting::WeakLifetimeScope                                          scope,
        ::Scripting::StrongTypedObjectHandle<::Scripting::GeneratorType> const& generatorHandle
    );

    MCAPI ::Scripting::ResultAny nextGeneric(::entt::meta_any& argAny, ::entt::meta_type expectedReturnType) const;

    MCFOLD ::Scripting::GeneratorAny& operator=(::Scripting::GeneratorAny const& rhs);

    MCFOLD ::Scripting::GeneratorAny& operator=(::Scripting::GeneratorAny&& rhs);

    MCFOLD bool valid() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::Scripting::GeneratorAny const& rhs);

    MCFOLD void* $ctor(::Scripting::GeneratorAny&& rhs);

    MCFOLD void* $ctor(
        ::Scripting::IRuntime*                                                  runtime,
        ::Scripting::ContextId                                                  contextId,
        ::Scripting::WeakLifetimeScope                                          scope,
        ::Scripting::StrongTypedObjectHandle<::Scripting::GeneratorType> const& generatorHandle
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Scripting
