#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/IPayload.h"
#include "mc/external/scripting/Privilege.h"

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
    // vIndex: 0, symbol: ??1NativeFunctionPayload@Scripting@@UEAA@XZ
    virtual ~NativeFunctionPayload();

    // vIndex: 1, symbol:
    // ?runOn@NativeFunctionPayload@Scripting@@UEAA?AVResultAny@2@UContextId@2@AEAVNativeRuntime@2@V?$optional@W4Privilege@Scripting@@@std@@@Z
    virtual class Scripting::ResultAny
    runOn(struct Scripting::ContextId, class Scripting::NativeRuntime& runtime, std::optional<::Scripting::Privilege>);

    // vIndex: 2, symbol:
    // ?runOn@IPayload@Scripting@@UEAA?AVResultAny@2@UContextId@2@AEAVStringBasedRuntime@2@V?$optional@W4Privilege@Scripting@@@std@@@Z
    virtual class Scripting::ResultAny
    runOn(struct Scripting::ContextId, class Scripting::StringBasedRuntime&, std::optional<::Scripting::Privilege>);

    // symbol:
    // ??0NativeFunctionPayload@Scripting@@QEAA@V?$function@$$A6A?AVResultAny@Scripting@@AEAVNativeRuntime@2@UContextId@2@VWeakLifetimeScope@2@AEBUModuleBindingBundle@2@PEAVIDependencyLoader@2@PEAVIPrinter@2@@Z@std@@@Z
    MCAPI explicit NativeFunctionPayload(
        std::function<
            class Scripting::
                ResultAny(class Scripting::NativeRuntime&, struct Scripting::ContextId, class Scripting::WeakLifetimeScope, struct Scripting::ModuleBindingBundle const&, class Scripting::IDependencyLoader*, class Scripting::IPrinter*)>
            func
    );

    // NOLINTEND
};

}; // namespace Scripting
