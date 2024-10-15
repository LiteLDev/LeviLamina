#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/reflection/Privilege.h"
#include "mc/external/scripting/runtime/IPayload.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class IDependencyLoader; }
namespace Scripting { class IPayload; }
namespace Scripting { class IPrinter; }
namespace Scripting { class NativeRuntime; }
namespace Scripting { class ResultAny; }
namespace Scripting { class StringBasedRuntime; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ContextId; }
namespace Scripting { struct ModuleBindingBundle; }
// clang-format on

namespace Scripting {

class NativeFunctionPayload : public ::Scripting::IPayload {
public:
    // prevent constructor by default
    NativeFunctionPayload& operator=(NativeFunctionPayload const&);
    NativeFunctionPayload(NativeFunctionPayload const&);
    NativeFunctionPayload();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NativeFunctionPayload();

    // vIndex: 1
    virtual class Scripting::ResultAny
    runOn(struct Scripting::ContextId contextId, class Scripting::NativeRuntime& runtime, std::optional<::Scripting::Privilege>);

    // vIndex: 2
    virtual class Scripting::ResultAny
    runOn(struct Scripting::ContextId, class Scripting::StringBasedRuntime&, std::optional<::Scripting::Privilege>);

    MCAPI explicit NativeFunctionPayload(
        std::function<
            class Scripting::
                ResultAny(class Scripting::NativeRuntime&, struct Scripting::ContextId, class Scripting::WeakLifetimeScope, struct Scripting::ModuleBindingBundle const&, class Scripting::IDependencyLoader*, class Scripting::IPrinter*)>
            func
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void*
    ctor$(std::function<
          class Scripting::
              ResultAny(class Scripting::NativeRuntime&, struct Scripting::ContextId, class Scripting::WeakLifetimeScope, struct Scripting::ModuleBindingBundle const&, class Scripting::IDependencyLoader*, class Scripting::IPrinter*)>
              func);

    MCAPI void dtor$();

    MCAPI class Scripting::ResultAny
    runOn$(struct Scripting::ContextId contextId, class Scripting::NativeRuntime& runtime, std::optional<::Scripting::Privilege>);

    MCAPI class Scripting::ResultAny
    runOn$(struct Scripting::ContextId, class Scripting::StringBasedRuntime&, std::optional<::Scripting::Privilege>);

    // NOLINTEND
};

}; // namespace Scripting
