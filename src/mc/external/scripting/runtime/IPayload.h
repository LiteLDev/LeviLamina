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
    // NOLINTBEGIN
    MCVAPI class Scripting::ResultAny
    runOn(struct Scripting::ContextId, class Scripting::StringBasedRuntime&, std::optional<::Scripting::Privilege>);

    MCVAPI class Scripting::ResultAny
    runOn(struct Scripting::ContextId, class Scripting::NativeRuntime&, std::optional<::Scripting::Privilege>);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI class Scripting::ResultAny
    runOn$(struct Scripting::ContextId, class Scripting::StringBasedRuntime&, std::optional<::Scripting::Privilege>);

    MCAPI class Scripting::ResultAny
    runOn$(struct Scripting::ContextId, class Scripting::NativeRuntime&, std::optional<::Scripting::Privilege>);

    // NOLINTEND
};

}; // namespace Scripting
