#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class IDependencyLoader; }
namespace Scripting { class IPrinter; }
namespace Scripting { class RegistryManager; }
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct ModuleDescriptor; }
namespace Scripting { struct ScriptContextResult; }
// clang-format on

namespace Scripting {

class IScriptEngine {
public:
    // prevent constructor by default
    IScriptEngine& operator=(IScriptEngine const&);
    IScriptEngine(IScriptEngine const&);
    IScriptEngine();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IScriptEngine();

    // vIndex: 1
    virtual struct Scripting::ScriptContextResult createScriptingContext(
        std::string const&                                     runtimeName,
        struct Scripting::ModuleDescriptor const&              forModule,
        std::vector<struct Scripting::ModuleDescriptor> const& dependencies,
        class Scripting::IDependencyLoader*                    loader,
        class Scripting::IPrinter*                             printer,
        struct Scripting::ContextConfig const&                 config
    ) = 0;

    // vIndex: 2
    virtual class Scripting::RegistryManager& getRegistryManager() = 0;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace Scripting
