#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/external/scripting/script_engine/ScriptValue.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class IObjectInspector; }
namespace Scripting { class IRuntime; }
namespace Scripting { class ResultAny; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ContextId; }
namespace Scripting { struct FutureType; }
// clang-format on

namespace Scripting {

class FutureAny : public ::Scripting::ScriptValue {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk3829c0;
    ::ll::UntypedStorage<8, 8>  mUnkf04544;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FutureAny() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FutureAny();

    MCAPI FutureAny(::Scripting::FutureAny const& rhs);

    MCAPI FutureAny(
        ::Scripting::IRuntime*                                        runtime,
        ::Scripting::ContextId                                        contextId,
        ::Scripting::WeakLifetimeScope                                scope,
        ::Scripting::StrongTypedObjectHandle<::Scripting::FutureType> futureHandle,
        ::Scripting::IObjectInspector*                                inspector
    );

    MCAPI ::Scripting::ResultAny getResult() const;

    MCAPI bool isPending() const;

    MCAPI bool isRejected() const;

    MCFOLD ::Scripting::FutureAny& operator=(::Scripting::FutureAny const& rhs);

    MCFOLD ::Scripting::FutureAny& operator=(::Scripting::FutureAny&& rhs);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor();

    MCFOLD void* $ctor(::Scripting::FutureAny const& rhs);

    MCFOLD void* $ctor(
        ::Scripting::IRuntime*                                        runtime,
        ::Scripting::ContextId                                        contextId,
        ::Scripting::WeakLifetimeScope                                scope,
        ::Scripting::StrongTypedObjectHandle<::Scripting::FutureType> futureHandle,
        ::Scripting::IObjectInspector*                                inspector
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
