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
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ContextId; }
namespace Scripting { struct ModuleBindingBundle; }
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

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    NativeFunctionPayload();

#else // LL_PLAT_C
#endif
public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~NativeFunctionPayload() /*override*/;
#else // LL_PLAT_C
    virtual ~NativeFunctionPayload() /*override*/ = default;
#endif

#ifdef LL_PLAT_S
    virtual ::Scripting::ResultAny runOn(
        ::Scripting::ContextId      contextId,
        ::Scripting::NativeRuntime& runtime,
        ::std::optional<::Scripting::Privilege>
    ) /*override*/;
#else // LL_PLAT_C
    virtual ::Scripting::ResultAny
    runOn(::Scripting::ContextId, ::Scripting::NativeRuntime&, ::std::optional<::Scripting::Privilege>) /*override*/;
#endif

    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCAPI explicit NativeFunctionPayload(
        ::std::function<::Scripting::ResultAny(
            ::Scripting::NativeRuntime&,
            ::Scripting::ContextId,
            ::Scripting::WeakLifetimeScope,
            ::Scripting::ModuleBindingBundle const&,
            ::Scripting::IDependencyLoader*,
            ::Scripting::IPrinter*
        )> func
    );
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCAPI void* $ctor(
        ::std::function<::Scripting::ResultAny(
            ::Scripting::NativeRuntime&,
            ::Scripting::ContextId,
            ::Scripting::WeakLifetimeScope,
            ::Scripting::ModuleBindingBundle const&,
            ::Scripting::IDependencyLoader*,
            ::Scripting::IPrinter*
        )> func
    );
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCAPI ::Scripting::ResultAny $runOn(
        ::Scripting::ContextId      contextId,
        ::Scripting::NativeRuntime& runtime,
        ::std::optional<::Scripting::Privilege>
    );
#endif


    // NOLINTEND
};

} // namespace Scripting
