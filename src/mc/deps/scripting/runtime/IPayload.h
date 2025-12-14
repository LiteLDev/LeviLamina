#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/reflection/Privilege.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class NativeRuntime; }
namespace Scripting { class ResultAny; }
namespace Scripting { class StringBasedRuntime; }
namespace Scripting { struct ContextId; }
// clang-format on

namespace Scripting {

class IPayload {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IPayload() = default;

    virtual ::Scripting::ResultAny
    runOn(::Scripting::ContextId, ::Scripting::NativeRuntime&, ::std::optional<::Scripting::Privilege>);

    virtual ::Scripting::ResultAny
    runOn(::Scripting::ContextId, ::Scripting::StringBasedRuntime&, ::std::optional<::Scripting::Privilege>);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Scripting::ResultAny
    $runOn(::Scripting::ContextId, ::Scripting::NativeRuntime&, ::std::optional<::Scripting::Privilege>);

#ifdef LL_PLAT_S
    MCAPI ::Scripting::ResultAny
    $runOn(::Scripting::ContextId, ::Scripting::StringBasedRuntime&, ::std::optional<::Scripting::Privilege>);
#endif


    // NOLINTEND
};

} // namespace Scripting
