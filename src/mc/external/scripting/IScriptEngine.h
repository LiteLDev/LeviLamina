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
    virtual struct Scripting::ScriptContextResult
    createScriptingContext(std::string const&, struct Scripting::ModuleDescriptor const&, std::vector<struct Scripting::ModuleDescriptor> const&, class Scripting::IDependencyLoader*, class Scripting::IPrinter*, struct Scripting::ContextConfig const&) = 0;

    // vIndex: 2
    virtual class Scripting::RegistryManager& getRegistryManager() = 0;

    // NOLINTEND
};

}; // namespace Scripting
