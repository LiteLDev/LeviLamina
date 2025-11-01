#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/script_engine/ScriptValue.h"

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
    ::ll::UntypedStorage<8, 8> mUnkf04544;
    // NOLINTEND

public:
    // prevent constructor by default
    FutureAny& operator=(FutureAny const&);
    FutureAny();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FutureAny() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FutureAny(::Scripting::FutureAny const& rhs);

    MCNAPI FutureAny(::Scripting::IRuntime* runtime, ::Scripting::ContextId contextId, ::Scripting::WeakLifetimeScope scope, ::Scripting::StrongTypedObjectHandle<::Scripting::FutureType> futureHandle, ::Scripting::IObjectInspector* inspector);

    MCNAPI ::Scripting::ResultAny getResult() const;

    MCNAPI bool isPending() const;

    MCNAPI bool isRejected() const;

    MCNAPI ::Scripting::FutureAny& operator=(::Scripting::FutureAny&& rhs);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Scripting::FutureAny const& rhs);

    MCNAPI void* $ctor(::Scripting::IRuntime* runtime, ::Scripting::ContextId contextId, ::Scripting::WeakLifetimeScope scope, ::Scripting::StrongTypedObjectHandle<::Scripting::FutureType> futureHandle, ::Scripting::IObjectInspector* inspector);
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

}
