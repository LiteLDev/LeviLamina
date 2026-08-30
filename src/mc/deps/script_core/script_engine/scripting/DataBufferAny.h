#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/script_engine/scripting/ScriptValue.h"

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
    ::ll::UntypedStorage<8, 8>  mUnk8ed6c8;
    ::ll::UntypedStorage<8, 40> mUnk6d65c6;
    ::ll::UntypedStorage<8, 8>  mUnke78ba3;
    ::ll::UntypedStorage<8, 8>  mUnka48647;
    // NOLINTEND

public:
    // prevent constructor by default
    DataBufferAny();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DataBufferAny() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DataBufferAny(::Scripting::DataBufferAny const& rhs);

    MCNAPI DataBufferAny(
        ::Scripting::IRuntime*                                                  runtime,
        ::Scripting::ContextId                                                  contextId,
        ::Scripting::WeakLifetimeScope                                          scope,
        ::Scripting::IObjectInspector*                                          inspector,
        ::Scripting::StrongTypedObjectHandle<::Scripting::DataBufferHandleType> dataBufferHandle
    );

    MCNAPI ::Scripting::DataBufferAny& operator=(::Scripting::DataBufferAny&& rhs);

    MCNAPI ::Scripting::DataBufferAny& operator=(::Scripting::DataBufferAny const& rhs);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Scripting::DataBufferAny const& rhs);

    MCNAPI void* $ctor(
        ::Scripting::IRuntime*                                                  runtime,
        ::Scripting::ContextId                                                  contextId,
        ::Scripting::WeakLifetimeScope                                          scope,
        ::Scripting::IObjectInspector*                                          inspector,
        ::Scripting::StrongTypedObjectHandle<::Scripting::DataBufferHandleType> dataBufferHandle
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Scripting
