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
namespace Scripting { struct DataBufferHandleType; }
// clang-format on

namespace Scripting {

class DataBufferAny : public ::Scripting::ScriptValue {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk8ed6c8;
    ::ll::UntypedStorage<8, 40> mUnk6d65c6;
    ::ll::UntypedStorage<8, 8> mUnke78ba3;
    ::ll::UntypedStorage<8, 8> mUnka48647;
    // NOLINTEND

public:
    // prevent constructor by default
    DataBufferAny& operator=(DataBufferAny const&);
    DataBufferAny(DataBufferAny const&);
    DataBufferAny();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DataBufferAny() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DataBufferAny(::Scripting::IRuntime* runtime, ::Scripting::ContextId contextId, ::Scripting::WeakLifetimeScope scope, ::Scripting::IObjectInspector* inspector, ::Scripting::StrongTypedObjectHandle<::Scripting::DataBufferHandleType> dataBufferHandle);

    MCNAPI ::Scripting::DataBufferAny& operator=(::Scripting::DataBufferAny&& rhs);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Scripting::IRuntime* runtime, ::Scripting::ContextId contextId, ::Scripting::WeakLifetimeScope scope, ::Scripting::IObjectInspector* inspector, ::Scripting::StrongTypedObjectHandle<::Scripting::DataBufferHandleType> dataBufferHandle);
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
