#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/reflection/Privilege.h"
#include "mc/external/scripting/runtime/IPayload.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class IDependencyLoader; }
namespace Scripting { class IPrinter; }
namespace Scripting { class NativeRuntime; }
namespace Scripting { class ResultAny; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ContextId; }
namespace Scripting { struct ModuleBindingBundle; }
// clang-format on

namespace Scripting {

class NativeFunctionPayload : public ::Scripting::IPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk79f943;
    // NOLINTEND

public:
    // prevent constructor by default
    NativeFunctionPayload& operator=(NativeFunctionPayload const&);
    NativeFunctionPayload(NativeFunctionPayload const&);
    NativeFunctionPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NativeFunctionPayload() /*override*/;

    // vIndex: 2
    virtual ::Scripting::ResultAny
    runOn(::Scripting::ContextId contextId, ::Scripting::NativeRuntime& runtime, ::std::optional<::Scripting::Privilege>) /*override*/
        ;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit NativeFunctionPayload(
        ::std::function<
            ::Scripting::
                ResultAny(::Scripting::NativeRuntime&, ::Scripting::ContextId, ::Scripting::WeakLifetimeScope, ::Scripting::ModuleBindingBundle const&, ::Scripting::IDependencyLoader*, ::Scripting::IPrinter*)>
            func
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::std::function<
          ::Scripting::
              ResultAny(::Scripting::NativeRuntime&, ::Scripting::ContextId, ::Scripting::WeakLifetimeScope, ::Scripting::ModuleBindingBundle const&, ::Scripting::IDependencyLoader*, ::Scripting::IPrinter*)>
              func);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Scripting::ResultAny
    $runOn(::Scripting::ContextId contextId, ::Scripting::NativeRuntime& runtime, ::std::optional<::Scripting::Privilege>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Scripting
