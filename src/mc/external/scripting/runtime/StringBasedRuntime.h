#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/reflection/Privilege.h"
#include "mc/external/scripting/runtime/IRuntime.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class IPayload; }
namespace Scripting { class IRuntime; }
namespace Scripting { class ResultAny; }
namespace Scripting { struct ContextId; }
// clang-format on

namespace Scripting {

class StringBasedRuntime : public ::Scripting::IRuntime {
public:
    // prevent constructor by default
    StringBasedRuntime& operator=(StringBasedRuntime const&);
    StringBasedRuntime(StringBasedRuntime const&);
    StringBasedRuntime();

public:
    // NOLINTBEGIN
    MCVAPI class Scripting::ResultAny
    run(struct Scripting::ContextId           contextId,
        class Scripting::IPayload*            payload,
        std::optional<::Scripting::Privilege> privilege);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI class Scripting::ResultAny run$(
        struct Scripting::ContextId           contextId,
        class Scripting::IPayload*            payload,
        std::optional<::Scripting::Privilege> privilege
    );

    // NOLINTEND
};

}; // namespace Scripting
