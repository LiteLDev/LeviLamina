#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct ModuleBinding; }
namespace Scripting { struct ModuleDescriptor; }
namespace Scripting { struct UUID; }
namespace Scripting { struct Version; }
namespace gametest { class GameTestRegistry; }
namespace mce { class UUID; }
// clang-format on

class ScriptGameTestModuleFactory {
public:
    // prevent constructor by default
    ScriptGameTestModuleFactory& operator=(ScriptGameTestModuleFactory const&);
    ScriptGameTestModuleFactory(ScriptGameTestModuleFactory const&);
    ScriptGameTestModuleFactory();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ScriptGameTestModuleFactory@@UEAA@XZ
    virtual ~ScriptGameTestModuleFactory() = default;

    // vIndex: 1, symbol:
    // ?getName@GenericModuleBindingFactory@Scripting@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 2, symbol: ?getUUID@GenericModuleBindingFactory@Scripting@@UEBA?AUUUID@2@XZ
    virtual struct Scripting::UUID getUUID() const;

    // vIndex: 3, symbol:
    // ?hasAlias@GenericModuleBindingFactory@Scripting@@UEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual bool hasAlias(std::string const&) const;

    // vIndex: 4, symbol:
    // ?getSupportedVersions@GenericModuleBindingFactory@Scripting@@UEBA?AV?$vector@UVersion@Scripting@@V?$allocator@UVersion@Scripting@@@std@@@std@@XZ
    virtual std::vector<struct Scripting::Version> getSupportedVersions() const;

    // vIndex: 5, symbol:
    // ?getDependencies@GenericModuleBindingFactory@Scripting@@UEBA?AV?$vector@UModuleDescriptor@Scripting@@V?$allocator@UModuleDescriptor@Scripting@@@std@@@std@@UVersion@2@@Z
    virtual std::vector<struct Scripting::ModuleDescriptor> getDependencies(struct Scripting::Version) const;

    // vIndex: 6, symbol:
    // ?createModuleBinding@GenericModuleBindingFactory@Scripting@@UEAA?AV?$optional@UModuleBinding@Scripting@@@std@@UVersion@2@AEBV?$optional@UContextConfig@Scripting@@@4@@Z
    virtual std::optional<struct Scripting::ModuleBinding>
    createModuleBinding(struct Scripting::Version, std::optional<struct Scripting::ContextConfig> const&);

    // symbol: ??0ScriptGameTestModuleFactory@@QEAA@AEAVGameTestRegistry@gametest@@@Z
    MCAPI explicit ScriptGameTestModuleFactory(class gametest::GameTestRegistry&);

    // symbol:
    // ?getModuleUUIDAsString@ScriptGameTestModuleFactory@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI static std::string getModuleUUIDAsString();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_addVersions@ScriptGameTestModuleFactory@@AEAAXXZ
    MCAPI void _addVersions();

    // symbol:
    // ?_generateBindings@ScriptGameTestModuleFactory@@AEAA?AUModuleBinding@Scripting@@AEAVModuleBindingBuilder@3@_NAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
    MCAPI struct Scripting::ModuleBinding
    _generateBindings(class Scripting::ModuleBindingBuilder&, bool, std::vector<std::string> const&);

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?ModuleName@ScriptGameTestModuleFactory@@0PEBDEB
    MCAPI static char const* ModuleName;

    // symbol: ?ModuleUUID@ScriptGameTestModuleFactory@@0VUUID@mce@@A
    MCAPI static class mce::UUID ModuleUUID;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $ModuleName() { return ModuleName; }

    static auto& $ModuleUUID() { return ModuleUUID; }

    // NOLINTEND
};
