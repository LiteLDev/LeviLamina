#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/Privilege.h"

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
    // symbol:
    // ?runOn@IPayload@Scripting@@UEAA?AVResultAny@2@UContextId@2@AEAVStringBasedRuntime@2@V?$optional@W4Privilege@Scripting@@@std@@@Z
    MCVAPI class Scripting::ResultAny
    runOn(struct Scripting::ContextId, class Scripting::StringBasedRuntime&, std::optional<::Scripting::Privilege>);

    // symbol:
    // ?runOn@IPayload@Scripting@@UEAA?AVResultAny@2@UContextId@2@AEAVNativeRuntime@2@V?$optional@W4Privilege@Scripting@@@std@@@Z
    MCVAPI class Scripting::ResultAny
    runOn(struct Scripting::ContextId, class Scripting::NativeRuntime&, std::optional<::Scripting::Privilege>);

    // NOLINTEND
};

}; // namespace Scripting
