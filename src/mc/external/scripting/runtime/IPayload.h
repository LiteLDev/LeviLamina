#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/reflection/Privilege.h"

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
    // prevent constructor by default
    IPayload& operator=(IPayload const&);
    IPayload(IPayload const&);
    IPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IPayload();

    // vIndex: 2
    virtual ::Scripting::ResultAny
    runOn(::Scripting::ContextId, ::Scripting::NativeRuntime&, ::std::optional<::Scripting::Privilege>);

    // vIndex: 1
    virtual ::Scripting::ResultAny
    runOn(::Scripting::ContextId, ::Scripting::StringBasedRuntime&, ::std::optional<::Scripting::Privilege>);
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
    $runOn(::Scripting::ContextId, ::Scripting::NativeRuntime&, ::std::optional<::Scripting::Privilege>);

    MCAPI ::Scripting::ResultAny
    $runOn(::Scripting::ContextId, ::Scripting::StringBasedRuntime&, ::std::optional<::Scripting::Privilege>);
    // NOLINTEND
};

} // namespace Scripting
