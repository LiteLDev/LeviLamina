#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/reflection/Privilege.h"
#include "mc/deps/scripting/runtime/IPayload.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class IDependencyLoader; }
namespace Scripting { class IPrinter; }
namespace Scripting { class NativeRuntime; }
namespace Scripting { class ResultAny; }
namespace Scripting { struct ContextId; }
namespace Scripting { struct ModuleBindingBundle; }
namespace Scripting { struct WeakLifetimeScope; }
// clang-format on

namespace Scripting {

class NativeFunctionPayload : public ::Scripting::IPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        64,
        ::std::function<::Scripting::ResultAny(
            ::Scripting::NativeRuntime&,
            ::Scripting::ContextId,
            ::Scripting::WeakLifetimeScope,
            ::Scripting::ModuleBindingBundle const&,
            ::Scripting::IDependencyLoader*,
            ::Scripting::IPrinter*
        )>>
        mFunction;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NativeFunctionPayload() /*override*/ = default;

    // vIndex: 2
    virtual ::Scripting::ResultAny
    runOn(::Scripting::ContextId, ::Scripting::NativeRuntime&, ::std::optional<::Scripting::Privilege>) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Scripting
