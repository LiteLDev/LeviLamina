#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ScriptValue.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"
#include "mc/external/scripting/TypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class IRuntime; }
namespace Scripting { class ResultAny; }
namespace Scripting { class ScriptValue; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ContextId; }
namespace Scripting { struct PromiseType; }
// clang-format on

namespace Scripting {

class PromiseAny : public ::Scripting::ScriptValue {
public:
    // prevent constructor by default
    PromiseAny();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1PromiseAny@Scripting@@UEAA@XZ
    virtual ~PromiseAny() = default;

    // symbol: ??0PromiseAny@Scripting@@QEAA@$$QEAV01@@Z
    MCAPI PromiseAny(class Scripting::PromiseAny&& rhs);

    // symbol: ??0PromiseAny@Scripting@@QEAA@AEBV01@@Z
    MCAPI PromiseAny(class Scripting::PromiseAny const& rhs);

    // symbol:
    // ??0PromiseAny@Scripting@@QEAA@PEAVIRuntime@1@UContextId@1@VWeakLifetimeScope@1@AEBV?$StrongTypedObjectHandle@UPromiseType@Scripting@@@1@@Z
    MCAPI
    PromiseAny(class Scripting::IRuntime* runtime, struct Scripting::ContextId, class Scripting::WeakLifetimeScope scope, class Scripting::StrongTypedObjectHandle<struct Scripting::PromiseType> const&);

    // symbol:
    // ?getPromiseHandle@PromiseAny@Scripting@@QEBA?AV?$optional@U?$TypedObjectHandle@UPromiseType@Scripting@@@Scripting@@@std@@XZ
    MCAPI std::optional<struct Scripting::TypedObjectHandle<struct Scripting::PromiseType>> getPromiseHandle() const;

    // symbol: ??4PromiseAny@Scripting@@QEAAAEAV01@$$QEAV01@@Z
    MCAPI class Scripting::PromiseAny& operator=(class Scripting::PromiseAny&& rhs);

    // symbol: ??4PromiseAny@Scripting@@QEAAAEAV01@AEBV01@@Z
    MCAPI class Scripting::PromiseAny& operator=(class Scripting::PromiseAny const& rhs);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?rejectGeneric@PromiseAny@Scripting@@IEBA?AVResultAny@2@AEAVmeta_any@entt@@@Z
    MCAPI class Scripting::ResultAny rejectGeneric(entt::meta_any& any) const;

    // symbol: ?resolveGeneric@PromiseAny@Scripting@@IEBA?AVResultAny@2@AEAVmeta_any@entt@@@Z
    MCAPI class Scripting::ResultAny resolveGeneric(entt::meta_any& any) const;

    // NOLINTEND
};

}; // namespace Scripting
