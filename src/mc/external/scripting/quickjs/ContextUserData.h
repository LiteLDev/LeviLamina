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

    MCAPI void PopParseContext();

    MCAPI void
    PushParseContext(::Scripting::QuickJS::ParseContext, entt::meta_type const&, std::variant<std::string_view, uint>);

    MCAPI void ResetParseContext();

    MCAPI std::string getParseContextErrorMessage();

    // NOLINTEND
};

}; // namespace Scripting::QuickJS
