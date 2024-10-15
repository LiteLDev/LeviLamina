#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/script_engine/IScriptEngine.h"

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

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void dtor$();

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
    virtual struct Scripting::ScriptContextResult createScriptingContext(
        std::string const&                                     runtimeName,
        struct Scripting::ModuleDescriptor const&              forModule,
        std::vector<struct Scripting::ModuleDescriptor> const& dependencies,
        class Scripting::IDependencyLoader*                    loader,
        class Scripting::IPrinter*                             printer,
        struct Scripting::ContextConfig const&                 config
    );

    // vIndex: 2
    virtual class Scripting::RegistryManager& getRegistryManager();

    MCAPI explicit ScriptEngine(class Scripting::RegistryManager* registryManager);

    MCAPI void addModuleBindingFactory(std::unique_ptr<class Scripting::IModuleBindingFactory> moduleBindingFactory);

    MCAPI void addRuntime(std::string name, std::unique_ptr<class Scripting::IRuntime> runtime);

    MCAPI struct Scripting::RuntimeStats computeRuntimeStats(std::string const& runtimeName) const;

    MCAPI void disableDebugger(std::string const& runtimeName);

    MCAPI void disableWatchdog(std::string const& runtimeName);

    MCAPI class Scripting::IDebuggerController*
    enableDebugger(std::string const& runtimeName, class Scripting::IDebuggerTransport& transport);

    MCAPI class Scripting::IWatchdog*
    enableWatchdog(std::string const& runtimeName, struct Scripting::WatchdogSettings const& settings);

    MCAPI void executeCoroutines(std::optional<std::chrono::microseconds> timeSlice);

    MCAPI std::optional<struct Scripting::ModuleDescriptor> getModuleDescriptorByName(std::string const& name) const;

    MCAPI std::vector<struct Scripting::SupportedBindingModule> getSupportedBindingModules() const;

    MCAPI class Scripting::IWatchdog* getWatchdog(std::string const& runtimeName) const;

    MCAPI bool hasModuleBindingFactory(struct Scripting::UUID const& uuid) const;

    MCAPI bool hasRuntime(std::string const& name) const;

    MCAPI void releaseRuntimes();

    MCAPI void startProfiler(std::string const& runtimeName);

    MCAPI void stopProfiler(std::string const& runtimeName, std::string const& savePath);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI class Scripting::IRuntime* _getRuntime(std::string const& runtimeName) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(class Scripting::RegistryManager* registryManager);

    MCAPI struct Scripting::ScriptContextResult createScriptingContext$(
        std::string const&                                     runtimeName,
        struct Scripting::ModuleDescriptor const&              forModule,
        std::vector<struct Scripting::ModuleDescriptor> const& dependencies,
        class Scripting::IDependencyLoader*                    loader,
        class Scripting::IPrinter*                             printer,
        struct Scripting::ContextConfig const&                 config
    );

    MCAPI class Scripting::RegistryManager& getRegistryManager$();

    // NOLINTEND
};

}; // namespace Scripting
