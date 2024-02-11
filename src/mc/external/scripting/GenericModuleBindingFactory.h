#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/IModuleBindingFactory.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class IModuleBindingFactory; }
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct ModuleBinding; }
namespace Scripting { struct ModuleDescriptor; }
namespace Scripting { struct UUID; }
namespace Scripting { struct Version; }
// clang-format on

namespace Scripting {

class GenericModuleBindingFactory : public ::Scripting::IModuleBindingFactory {
public:
    // GenericModuleBindingFactory inner types declare
    // clang-format off
    struct ModuleData;
    // clang-format on

    // GenericModuleBindingFactory inner types define
    struct ModuleData {
    public:
        // prevent constructor by default
        ModuleData& operator=(ModuleData const&);
        ModuleData(ModuleData const&);
        ModuleData();

    public:
        // NOLINTBEGIN
        // symbol:
        // ??0ModuleData@GenericModuleBindingFactory@Scripting@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$QEAUVersion@2@$$QEAV?$function@$$A6A?AV?$optional@UModuleBinding@Scripting@@@std@@AEAVModuleBindingBuilder@Scripting@@AEBV?$optional@UContextConfig@Scripting@@@2@@Z@4@$$QEAV?$vector@UModuleDescriptor@Scripting@@V?$allocator@UModuleDescriptor@Scripting@@@std@@@4@@Z
        MCAPI
        ModuleData(std::string const&, struct Scripting::Version&&, std::function<std::optional<struct Scripting::ModuleBinding>(class Scripting::ModuleBindingBuilder&, std::optional<struct Scripting::ContextConfig> const&)>&&, std::vector<struct Scripting::ModuleDescriptor>&&);

        // symbol: ??1ModuleData@GenericModuleBindingFactory@Scripting@@QEAA@XZ
        MCAPI ~ModuleData();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    GenericModuleBindingFactory& operator=(GenericModuleBindingFactory const&);
    GenericModuleBindingFactory(GenericModuleBindingFactory const&);
    GenericModuleBindingFactory();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1GenericModuleBindingFactory@Scripting@@UEAA@XZ
    virtual ~GenericModuleBindingFactory();

    // vIndex: 1, symbol:
    // ?getName@GenericModuleBindingFactory@Scripting@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 2, symbol: ?getUUID@GenericModuleBindingFactory@Scripting@@UEBA?AUUUID@2@XZ
    virtual struct Scripting::UUID getUUID() const;

    // vIndex: 3, symbol:
    // ?hasAlias@GenericModuleBindingFactory@Scripting@@UEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual bool hasAlias(std::string const& alias) const;

    // vIndex: 4, symbol:
    // ?getSupportedVersions@GenericModuleBindingFactory@Scripting@@UEBA?AV?$vector@UVersion@Scripting@@V?$allocator@UVersion@Scripting@@@std@@@std@@XZ
    virtual std::vector<struct Scripting::Version> getSupportedVersions() const;

    // vIndex: 5, symbol:
    // ?getDependencies@GenericModuleBindingFactory@Scripting@@UEBA?AV?$vector@UModuleDescriptor@Scripting@@V?$allocator@UModuleDescriptor@Scripting@@@std@@@std@@UVersion@2@@Z
    virtual std::vector<struct Scripting::ModuleDescriptor> getDependencies(struct Scripting::Version version) const;

    // vIndex: 6, symbol:
    // ?createModuleBinding@GenericModuleBindingFactory@Scripting@@UEAA?AV?$optional@UModuleBinding@Scripting@@@std@@UVersion@2@AEBV?$optional@UContextConfig@Scripting@@@4@@Z
    virtual std::optional<struct Scripting::ModuleBinding> createModuleBinding(
        struct Scripting::Version                             version,
        std::optional<struct Scripting::ContextConfig> const& config
    );

    // symbol:
    // ??0GenericModuleBindingFactory@Scripting@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UUUID@1@@Z
    MCAPI GenericModuleBindingFactory(std::string name, struct Scripting::UUID uuid);

    // symbol:
    // ?addVersionedModuleBinding@GenericModuleBindingFactory@Scripting@@QEAAXUVersion@2@V?$function@$$A6A?AV?$optional@UModuleBinding@Scripting@@@std@@AEAVModuleBindingBuilder@Scripting@@AEBV?$optional@UContextConfig@Scripting@@@2@@Z@std@@0V?$vector@UModuleDescriptor@Scripting@@V?$allocator@UModuleDescriptor@Scripting@@@std@@@5@@Z
    MCAPI void addVersionedModuleBinding(
        struct Scripting::Version alias,
        std::function<std::optional<
            struct Scripting::
                ModuleBinding>(class Scripting::ModuleBindingBuilder&, std::optional<struct Scripting::ContextConfig> const&)>
            version,
        struct Scripting::Version,
        std::vector<struct Scripting::ModuleDescriptor> dependencies
    );

    // symbol:
    // ?addVersionedModuleBinding@GenericModuleBindingFactory@Scripting@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UVersion@2@V?$function@$$A6A?AV?$optional@UModuleBinding@Scripting@@@std@@AEAVModuleBindingBuilder@Scripting@@AEBV?$optional@UContextConfig@Scripting@@@2@@Z@4@1V?$vector@UModuleDescriptor@Scripting@@V?$allocator@UModuleDescriptor@Scripting@@@std@@@4@@Z
    MCAPI void
        addVersionedModuleBinding(std::string, struct Scripting::Version, std::function<std::optional<struct Scripting::ModuleBinding>(class Scripting::ModuleBindingBuilder&, std::optional<struct Scripting::ContextConfig> const&)>, struct Scripting::Version, std::vector<struct Scripting::ModuleDescriptor>);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol:
    // ?_addRuntimeDependency@GenericModuleBindingFactory@Scripting@@IEAAXAEAV?$vector@UModuleDescriptor@Scripting@@V?$allocator@UModuleDescriptor@Scripting@@@std@@@std@@UVersion@2@@Z
    MCAPI void _addRuntimeDependency(std::vector<struct Scripting::ModuleDescriptor>&, struct Scripting::Version);

    // NOLINTEND
};

}; // namespace Scripting
