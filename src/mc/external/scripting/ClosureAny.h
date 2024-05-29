#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/Privilege.h"
#include "mc/external/scripting/ScriptValue.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"
#include "mc/external/scripting/TypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class IObjectInspector; }
namespace Scripting { class IRuntime; }
namespace Scripting { class ResultAny; }
namespace Scripting { class ScriptValue; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClosureType; }
namespace Scripting { struct ContextId; }
// clang-format on

namespace Scripting {

class ClosureAny : public ::Scripting::ScriptValue {
public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ClosureAny@Scripting@@UEAA@XZ
    virtual ~ClosureAny();

    // symbol: ??0ClosureAny@Scripting@@QEAA@XZ
    MCAPI ClosureAny();

    // symbol: ??0ClosureAny@Scripting@@QEAA@$$QEAV01@@Z
    MCAPI ClosureAny(class Scripting::ClosureAny&& rhs);

    // symbol: ??0ClosureAny@Scripting@@QEAA@AEBV01@@Z
    MCAPI ClosureAny(class Scripting::ClosureAny const& rhs);

    // symbol:
    // ??0ClosureAny@Scripting@@QEAA@PEAVIRuntime@1@UContextId@1@VWeakLifetimeScope@1@V?$StrongTypedObjectHandle@UClosureType@Scripting@@@1@PEAVIObjectInspector@1@@Z
    MCAPI
    ClosureAny(class Scripting::IRuntime* runtime, struct Scripting::ContextId, class Scripting::WeakLifetimeScope scope, class Scripting::StrongTypedObjectHandle<struct Scripting::ClosureType> handle, class Scripting::IObjectInspector*);

    // symbol:
    // ?callGeneric@ClosureAny@Scripting@@QEBA?AVResultAny@2@PEAVmeta_any@entt@@IVmeta_type@5@V?$optional@W4Privilege@Scripting@@@std@@@Z
    MCAPI class Scripting::ResultAny
    callGeneric(entt::meta_any* args, uint argc, entt::meta_type, std::optional<::Scripting::Privilege>) const;

    // symbol: ?compareTo@ClosureAny@Scripting@@QEBA_NAEBV12@@Z
    MCAPI bool compareTo(class Scripting::ClosureAny const& rhs) const;

    // symbol:
    // ?getClosureHandle@ClosureAny@Scripting@@QEBA?AV?$optional@U?$TypedObjectHandle@UClosureType@Scripting@@@Scripting@@@std@@XZ
    MCAPI std::optional<struct Scripting::TypedObjectHandle<struct Scripting::ClosureType>> getClosureHandle() const;

    // symbol: ??4ClosureAny@Scripting@@QEAAAEAV01@$$QEAV01@@Z
    MCAPI class Scripting::ClosureAny& operator=(class Scripting::ClosureAny&& rhs);

    // symbol: ??4ClosureAny@Scripting@@QEAAAEAV01@AEBV01@@Z
    MCAPI class Scripting::ClosureAny& operator=(class Scripting::ClosureAny const& rhs);

    // symbol: ?valid@ClosureAny@Scripting@@QEBA_NXZ
    MCAPI bool valid() const;

    // NOLINTEND
};

}; // namespace Scripting
