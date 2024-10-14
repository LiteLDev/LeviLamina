#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/quickjs/context/ParseContext.h"

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
        struct Scripting::ContextId                         contextId_,
        class Scripting::WeakLifetimeScope                  scope_,
        class Scripting::QuickJS::ClassRegistry&            classReg_,
        struct Scripting::QuickJS::ResolvedTypes&           resolvedTypes_,
        class Scripting::ScriptObjectFactory&               objectFactory_,
        class Scripting::QuickJS::ObjectInspector&          objectInspector_,
        class Scripting::IPrinter*                          printer_,
        std::vector<struct Scripting::ModuleBinding> const& modules,
        struct Scripting::ContextConfig                     contextConfig
    );

    MCAPI void PopParseContext();

    MCAPI void PushParseContext(
        ::Scripting::QuickJS::ParseContext   context,
        entt::meta_type const&               type,
        std::variant<std::string_view, uint> arg
    );

    MCAPI void ResetParseContext();

    MCAPI std::string getParseContextErrorMessage();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};

}; // namespace Scripting::QuickJS
