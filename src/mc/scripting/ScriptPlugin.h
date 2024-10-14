#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/runtime/IDependencyLoader.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class IDependencyLoader; }
namespace Scripting { class ScriptContext; }
namespace Scripting { struct Capabilities; }
namespace Scripting { struct ModuleBinding; }
namespace Scripting { struct ModuleDescriptor; }
namespace Scripting { struct ScriptData; }
// clang-format on

class ScriptPlugin : public ::Scripting::IDependencyLoader {
public:
    // prevent constructor by default
    ScriptPlugin& operator=(ScriptPlugin const&);
    ScriptPlugin(ScriptPlugin const&);
    ScriptPlugin();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptPlugin();

    // vIndex: 1
    virtual std::optional<struct Scripting::ScriptData>
    onLoadScript(std::string const& name, std::optional<std::vector<struct Scripting::ModuleBinding>> moduleBindings);

    MCAPI ScriptPlugin(class ScriptPlugin&& rhs);

    MCAPI ScriptPlugin(
        std::shared_ptr<class IScriptPluginSource>        pluginSource,
        struct Scripting::ModuleDescriptor&&              moduleDesc,
        std::vector<struct Scripting::ModuleDescriptor>&& moduleDependencies,
        struct Scripting::Capabilities&&                  capabilities,
        std::string const&                                engineVersion,
        struct PackIdVersion const&                       packId,
        std::string const&                                runtimeName,
        std::string const&                                mainScriptFilePath
    );

    MCAPI struct Scripting::ModuleDescriptor const& getModuleDescriptor() const;

    MCAPI class Scripting::ScriptContext& getScriptContext();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI std::optional<struct Scripting::ScriptData> _loadScript(std::string const& fileName);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    MCAPI std::optional<struct Scripting::ScriptData>
    onLoadScript$(std::string const& name, std::optional<std::vector<struct Scripting::ModuleBinding>> moduleBindings);

    // NOLINTEND
};
