#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/quickjs/ParseContext.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class IPrinter; }
namespace Scripting { class ScriptObjectFactory; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct ContextId; }
namespace Scripting { struct ModuleBinding; }
namespace Scripting::QuickJS { class ClassRegistry; }
namespace Scripting::QuickJS { class ObjectInspector; }
namespace Scripting::QuickJS { struct ResolvedTypes; }
// clang-format on

namespace Scripting::QuickJS {

class ContextUserData {
public:
    // prevent constructor by default
    ContextUserData& operator=(ContextUserData const&);
    ContextUserData(ContextUserData const&);
    ContextUserData();

public:
    // NOLINTBEGIN
    // symbol:
    // ??0ContextUserData@QuickJS@Scripting@@QEAA@UContextId@2@VWeakLifetimeScope@2@AEAVClassRegistry@12@AEAUResolvedTypes@12@AEAVScriptObjectFactory@2@AEAVObjectInspector@12@PEAVIPrinter@2@AEBV?$vector@UModuleBinding@Scripting@@V?$allocator@UModuleBinding@Scripting@@@std@@@std@@UContextConfig@2@@Z
    MCAPI ContextUserData(
        struct Scripting::ContextId,
        class Scripting::WeakLifetimeScope,
        class Scripting::QuickJS::ClassRegistry&,
        struct Scripting::QuickJS::ResolvedTypes&,
        class Scripting::ScriptObjectFactory&,
        class Scripting::QuickJS::ObjectInspector&,
        class Scripting::IPrinter*,
        std::vector<struct Scripting::ModuleBinding> const& modules,
        struct Scripting::ContextConfig
    );

    // symbol: ?PopParseContext@ContextUserData@QuickJS@Scripting@@QEAAXXZ
    MCAPI void PopParseContext();

    // symbol:
    // ?PushParseContext@ContextUserData@QuickJS@Scripting@@QEAAXW4ParseContext@23@AEBVmeta_type@entt@@V?$variant@V?$basic_string_view@DU?$char_traits@D@std@@@std@@I@std@@@Z
    MCAPI void
    PushParseContext(::Scripting::QuickJS::ParseContext, entt::meta_type const&, std::variant<std::string_view, uint>);

    // symbol: ?ResetParseContext@ContextUserData@QuickJS@Scripting@@QEAAXXZ
    MCAPI void ResetParseContext();

    // symbol:
    // ?getParseContextErrorMessage@ContextUserData@QuickJS@Scripting@@QEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getParseContextErrorMessage();

    // NOLINTEND
};

}; // namespace Scripting::QuickJS
