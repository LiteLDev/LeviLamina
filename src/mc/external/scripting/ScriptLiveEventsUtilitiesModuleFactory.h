#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/GenericModuleBindingFactory.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class GenericModuleBindingFactory; }
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct ModuleBinding; }
namespace Scripting { struct ModuleDescriptor; }
namespace Scripting { struct UUID; }
namespace Scripting { struct Version; }
namespace mce { class UUID; }
// clang-format on

class ScriptLiveEventsUtilitiesModuleFactory : public ::Scripting::GenericModuleBindingFactory {
public:
    // prevent constructor by default
    ScriptLiveEventsUtilitiesModuleFactory& operator=(ScriptLiveEventsUtilitiesModuleFactory const&);
    ScriptLiveEventsUtilitiesModuleFactory(ScriptLiveEventsUtilitiesModuleFactory const&);
    ScriptLiveEventsUtilitiesModuleFactory();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptLiveEventsUtilitiesModuleFactory() = default;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static char const* ModuleName;

    MCAPI static class mce::UUID const ModuleUUID;

    // NOLINTEND
};
