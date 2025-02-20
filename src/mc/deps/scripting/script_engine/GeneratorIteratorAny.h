#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/script_engine/ScriptValue.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class IObjectInspector; }
namespace Scripting { class IRuntime; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ContextId; }
namespace Scripting { struct GeneratorIteratorType; }
// clang-format on

namespace Scripting {

class GeneratorIteratorAny : public ::Scripting::ScriptValue {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnkbb8819;
    ::ll::UntypedStorage<8, 8>  mUnk6eb472;
    // NOLINTEND

public:
    // prevent constructor by default
    GeneratorIteratorAny& operator=(GeneratorIteratorAny const&);
    GeneratorIteratorAny(GeneratorIteratorAny const&);
    GeneratorIteratorAny();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GeneratorIteratorAny() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI GeneratorIteratorAny(
        ::Scripting::IRuntime*                                                          runtime,
        ::Scripting::ContextId                                                          contextId,
        ::Scripting::WeakLifetimeScope                                                  scope,
        ::Scripting::StrongTypedObjectHandle<::Scripting::GeneratorIteratorType> const& generatorIteratorHandle,
        ::Scripting::IObjectInspector*                                                  inspector
    );

    MCFOLD ::Scripting::GeneratorIteratorAny& operator=(::Scripting::GeneratorIteratorAny&& rhs);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Scripting::IRuntime*                                                          runtime,
        ::Scripting::ContextId                                                          contextId,
        ::Scripting::WeakLifetimeScope                                                  scope,
        ::Scripting::StrongTypedObjectHandle<::Scripting::GeneratorIteratorType> const& generatorIteratorHandle,
        ::Scripting::IObjectInspector*                                                  inspector
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Scripting
