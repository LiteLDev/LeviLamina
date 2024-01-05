#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/IRuntime.h"
#include "mc/external/scripting/Privilege.h"

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
    // symbol:
    // ?run@StringBasedRuntime@Scripting@@UEAA?AVResultAny@2@UContextId@2@PEAVIPayload@2@V?$optional@W4Privilege@Scripting@@@std@@@Z
    MCVAPI class Scripting::ResultAny
    run(struct Scripting::ContextId           contextId,
        class Scripting::IPayload*            payload,
        std::optional<::Scripting::Privilege> privilege);

    // NOLINTEND
};

}; // namespace Scripting
