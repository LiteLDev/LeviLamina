#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/IScriptEngine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class IDebuggerController; }
namespace Scripting { class IDebuggerTransport; }
namespace Scripting { class IDependencyLoader; }
namespace Scripting { class IModuleBindingFactory; }
namespace Scripting { class IPrinter; }
namespace Scripting { class IRuntime; }
namespace Scripting { class IScriptEngine; }
namespace Scripting { class IWatchdog; }
namespace Scripting { class RegistryManager; }
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct ModuleDescriptor; }
namespace Scripting { struct RuntimeStats; }
namespace Scripting { struct ScriptContextResult; }
namespace Scripting { struct SupportedBindingModule; }
namespace Scripting { struct UUID; }
namespace Scripting { struct WatchdogSettings; }
// clang-format on

namespace Scripting {

class ScriptEngine : public ::Scripting::IScriptEngine {
public:
    // ScriptEngine inner types declare
    // clang-format off
    struct NamedRuntime;
    // clang-format on

    // ScriptEngine inner types define
    struct NamedRuntime {
    public:
        // prevent constructor by default
        NamedRuntime& operator=(NamedRuntime const&);
        NamedRuntime(NamedRuntime const&);
        NamedRuntime();

    public:
        // NOLINTBEGIN
        MCAPI ~NamedRuntime();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    ScriptEngine& operator=(ScriptEngine const&);
    ScriptEngine(ScriptEngine const&);
    ScriptEngine();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptEngine() = default;

    // vIndex: 1
    virtual struct Scripting::ScriptContextResult
    createScriptingContext(std::string const&, struct Scripting::ModuleDescriptor const&, std::vector<struct Scripting::ModuleDescriptor> const&, class Scripting::IDependencyLoader*, class Scripting::IPrinter*, struct Scripting::ContextConfig const&);

    // vIndex: 2
    virtual class Scripting::RegistryManager& getRegistryManager();

    MCAPI explicit ScriptEngine(class Scripting::RegistryManager*);

    MCAPI void addModuleBindingFactory(std::unique_ptr<class Scripting::IModuleBindingFactory>);

    MCAPI void addRuntime(std::string name, std::unique_ptr<class Scripting::IRuntime> runtime);

    MCAPI struct Scripting::RuntimeStats computeRuntimeStats(std::string const&) const;

    MCAPI void disableDebugger(std::string const&);

    MCAPI void disableWatchdog(std::string const&);

    MCAPI class Scripting::IDebuggerController*
    enableDebugger(std::string const&, class Scripting::IDebuggerTransport&);

    MCAPI class Scripting::IWatchdog*
    enableWatchdog(std::string const&, struct Scripting::WatchdogSettings const& settings);

    MCAPI void executeCoroutines(std::optional<std::chrono::microseconds>);

    MCAPI std::optional<struct Scripting::ModuleDescriptor> getModuleDescriptorByName(std::string const& name) const;

    MCAPI std::vector<struct Scripting::SupportedBindingModule> getSupportedBindingModules() const;

    MCAPI class Scripting::IWatchdog* getWatchdog(std::string const&) const;

    MCAPI bool hasModuleBindingFactory(struct Scripting::UUID const& uuid) const;

    MCAPI bool hasRuntime(std::string const& name) const;

    MCAPI void releaseRuntimes();

    MCAPI void startProfiler(std::string const&);

    MCAPI void stopProfiler(std::string const&, std::string const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI class Scripting::IRuntime* _getRuntime(std::string const&) const;

    // NOLINTEND
};

}; // namespace Scripting
