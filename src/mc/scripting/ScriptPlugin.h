#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/IDependencyLoader.h"

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
    onLoadScript(std::string const& name, std::optional<std::vector<struct Scripting::ModuleBinding>>);

    MCAPI ScriptPlugin(class ScriptPlugin&& rhs);

    MCAPI
    ScriptPlugin(std::shared_ptr<class IScriptPluginSource>, struct Scripting::ModuleDescriptor&&, std::vector<struct Scripting::ModuleDescriptor>&&, struct Scripting::Capabilities&&, std::string const&, struct PackIdVersion const&, std::string const&, std::string const&);

    MCAPI struct Scripting::ModuleDescriptor const& getModuleDescriptor() const;

    MCAPI class Scripting::ScriptContext& getScriptContext();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI std::optional<struct Scripting::ScriptData> _loadScript(std::string const& fileName);

    // NOLINTEND
};
