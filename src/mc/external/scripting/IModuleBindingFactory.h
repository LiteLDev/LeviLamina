#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct ModuleBinding; }
namespace Scripting { struct ModuleDescriptor; }
namespace Scripting { struct UUID; }
namespace Scripting { struct Version; }
// clang-format on

namespace Scripting {

class IModuleBindingFactory {
public:
    // prevent constructor by default
    IModuleBindingFactory& operator=(IModuleBindingFactory const&);
    IModuleBindingFactory(IModuleBindingFactory const&);
    IModuleBindingFactory();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1IModuleBindingFactory@Scripting@@UEAA@XZ
    virtual ~IModuleBindingFactory() = default;

    // vIndex: 1, symbol:
    // ?getName@GenericModuleBindingFactory@Scripting@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const = 0;

    // vIndex: 2, symbol: ?getUUID@GenericModuleBindingFactory@Scripting@@UEBA?AUUUID@2@XZ
    virtual struct Scripting::UUID getUUID() const = 0;

    // vIndex: 3, symbol:
    // ?hasAlias@GenericModuleBindingFactory@Scripting@@UEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual bool hasAlias(std::string const& alias) const = 0;

    // vIndex: 4, symbol:
    // ?getSupportedVersions@GenericModuleBindingFactory@Scripting@@UEBA?AV?$vector@UVersion@Scripting@@V?$allocator@UVersion@Scripting@@@std@@@std@@XZ
    virtual std::vector<struct Scripting::Version> getSupportedVersions() const = 0;

    // vIndex: 5, symbol:
    // ?getDependencies@GenericModuleBindingFactory@Scripting@@UEBA?AV?$vector@UModuleDescriptor@Scripting@@V?$allocator@UModuleDescriptor@Scripting@@@std@@@std@@UVersion@2@@Z
    virtual std::vector<struct Scripting::ModuleDescriptor> getDependencies(struct Scripting::Version version
    ) const = 0;

    // vIndex: 6, symbol:
    // ?createModuleBinding@GenericModuleBindingFactory@Scripting@@UEAA?AV?$optional@UModuleBinding@Scripting@@@std@@UVersion@2@AEBV?$optional@UContextConfig@Scripting@@@4@@Z
    virtual std::optional<struct Scripting::ModuleBinding> createModuleBinding(
        struct Scripting::Version                             version,
        std::optional<struct Scripting::ContextConfig> const& config
    ) = 0;

    // NOLINTEND
};

}; // namespace Scripting
