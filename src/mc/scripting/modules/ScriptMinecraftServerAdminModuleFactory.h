#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct ModuleBinding; }
namespace Scripting { struct ModuleDescriptor; }
namespace Scripting { struct UUID; }
namespace Scripting { struct Version; }
namespace mce { class UUID; }
// clang-format on

class ScriptMinecraftServerAdminModuleFactory {

public:
    // prevent constructor by default
    ScriptMinecraftServerAdminModuleFactory& operator=(ScriptMinecraftServerAdminModuleFactory const&) = delete;
    ScriptMinecraftServerAdminModuleFactory(ScriptMinecraftServerAdminModuleFactory const&)            = delete;
    ScriptMinecraftServerAdminModuleFactory()                                                          = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?getName\@GenericModuleBindingFactory\@Scripting\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const; // NOLINT
    /**
     * @vftbl 2
     * @symbol ?getUUID\@GenericModuleBindingFactory\@Scripting\@\@UEBA?AUUUID\@2\@XZ
     */
    virtual struct Scripting::UUID getUUID() const; // NOLINT
    /**
     * @vftbl 3
     * @symbol
     * ?hasAlias\@GenericModuleBindingFactory\@Scripting\@\@UEBA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual bool hasAlias(std::string const&) const; // NOLINT
    /**
     * @vftbl 4
     * @symbol
     * ?getSupportedVersions\@GenericModuleBindingFactory\@Scripting\@\@UEBA?AV?$vector\@UVersion\@Scripting\@\@V?$allocator\@UVersion\@Scripting\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<struct Scripting::Version> getSupportedVersions() const; // NOLINT
    /**
     * @vftbl 5
     * @symbol
     * ?getDependencies\@GenericModuleBindingFactory\@Scripting\@\@UEBA?AV?$vector\@UModuleDescriptor\@Scripting\@\@V?$allocator\@UModuleDescriptor\@Scripting\@\@\@std\@\@\@std\@\@UVersion\@2\@\@Z
     */
    virtual std::vector<struct Scripting::ModuleDescriptor> getDependencies(struct Scripting::Version) const; // NOLINT
    /**
     * @vftbl 6
     * @symbol
     * ?createModuleBinding\@GenericModuleBindingFactory\@Scripting\@\@UEAA?AV?$optional\@UModuleBinding\@Scripting\@\@\@std\@\@UVersion\@2\@AEBV?$optional\@UContextConfig\@Scripting\@\@\@4\@\@Z
     */
    virtual class std::optional<struct Scripting::ModuleBinding>
    createModuleBinding(struct Scripting::Version, class std::optional<struct Scripting::ContextConfig> const&); // NOLINT
    /**
     * @symbol
     * ??0ScriptMinecraftServerAdminModuleFactory\@\@QEAA\@V?$NonOwnerPointer\@VScriptPackConfigurationManager\@\@\@Bedrock\@\@\@Z
     */
    MCAPI ScriptMinecraftServerAdminModuleFactory(class Bedrock::NonOwnerPointer<
                                                  class ScriptPackConfigurationManager>); // NOLINT
    /**
     * @symbol
     * ?getModuleUUIDAsString\@ScriptMinecraftServerAdminModuleFactory\@\@SA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI static std::string getModuleUUIDAsString(); // NOLINT

    // private:
    /**
     * @symbol
     * ?_generateBindings\@ScriptMinecraftServerAdminModuleFactory\@\@AEAA?AUModuleBinding\@Scripting\@\@AEAVModuleBindingBuilder\@3\@V?$optional\@UContextConfig\@Scripting\@\@\@std\@\@_NAEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@6\@\@Z
     */
    MCAPI struct Scripting::ModuleBinding
    _generateBindings(class Scripting::ModuleBindingBuilder&, class std::optional<struct Scripting::ContextConfig>, bool, std::vector<std::string> const&); // NOLINT

private:
    /**
     * @symbol ?ModuleName\@ScriptMinecraftServerAdminModuleFactory\@\@0PEBDEB
     */
    MCAPI static char const* ModuleName; // NOLINT
    /**
     * @symbol ?ModuleUUID\@ScriptMinecraftServerAdminModuleFactory\@\@0VUUID\@mce\@\@B
     */
    MCAPI static class mce::UUID const ModuleUUID; // NOLINT
};
