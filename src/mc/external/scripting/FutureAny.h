#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ScriptValue.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class IObjectInspector; }
namespace Scripting { class IRuntime; }
namespace Scripting { class ResultAny; }
namespace Scripting { class ScriptValue; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ContextId; }
namespace Scripting { struct FutureType; }
// clang-format on

namespace Scripting {

class FutureAny : public ::Scripting::ScriptValue {
public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1FutureAny@Scripting@@UEAA@XZ
    virtual ~FutureAny();

    // symbol: ??0FutureAny@Scripting@@QEAA@XZ
    MCAPI FutureAny();

    // symbol: ??0FutureAny@Scripting@@QEAA@AEBV01@@Z
    MCAPI FutureAny(class Scripting::FutureAny const& rhs);

    // symbol:
    // ??0FutureAny@Scripting@@QEAA@PEAVIRuntime@1@UContextId@1@VWeakLifetimeScope@1@V?$StrongTypedObjectHandle@UFutureType@Scripting@@@1@PEAVIObjectInspector@1@@Z
    MCAPI
    FutureAny(class Scripting::IRuntime* runtime, struct Scripting::ContextId, class Scripting::WeakLifetimeScope scope, class Scripting::StrongTypedObjectHandle<struct Scripting::FutureType>, class Scripting::IObjectInspector*);

    // symbol: ?getResult@FutureAny@Scripting@@QEBA?AVResultAny@2@XZ
    MCAPI class Scripting::ResultAny getResult() const;

    // symbol: ?isPending@FutureAny@Scripting@@QEBA_NXZ
    MCAPI bool isPending() const;

    // symbol: ?isRejected@FutureAny@Scripting@@QEBA_NXZ
    MCAPI bool isRejected() const;

    // symbol: ??4FutureAny@Scripting@@QEAAAEAV01@$$QEAV01@@Z
    MCAPI class Scripting::FutureAny& operator=(class Scripting::FutureAny&& rhs);

    // symbol: ??4FutureAny@Scripting@@QEAAAEAV01@AEBV01@@Z
    MCAPI class Scripting::FutureAny& operator=(class Scripting::FutureAny const& rhs);

    // NOLINTEND
};

}; // namespace Scripting
