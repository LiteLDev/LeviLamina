/**
 * @file  ScriptMinecraftModuleFactory.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Scripting.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ScriptMinecraftModuleFactory.
 *
 */
class ScriptMinecraftModuleFactory {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMINECRAFTMODULEFACTORY
public:
    class ScriptMinecraftModuleFactory& operator=(class ScriptMinecraftModuleFactory const &) = delete;
    ScriptMinecraftModuleFactory(class ScriptMinecraftModuleFactory const &) = delete;
    ScriptMinecraftModuleFactory() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getName\@GenericModuleBindingFactory\@Scripting\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 2
     * @symbol ?getUUID\@GenericModuleBindingFactory\@Scripting\@\@UEBA?AUUUID\@2\@XZ
     */
    virtual struct Scripting::UUID getUUID() const;
    /**
     * @vftbl 3
     * @symbol ?hasAlias\@GenericModuleBindingFactory\@Scripting\@\@UEBA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual bool hasAlias(std::string const &) const;
    /**
     * @vftbl 4
     * @symbol ?getSupportedVersions\@GenericModuleBindingFactory\@Scripting\@\@UEBA?AV?$vector\@UVersion\@Scripting\@\@V?$allocator\@UVersion\@Scripting\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<struct Scripting::Version> getSupportedVersions() const;
    /**
     * @vftbl 5
     * @symbol ?getDependencies\@GenericModuleBindingFactory\@Scripting\@\@UEBA?AV?$vector\@UModuleDescriptor\@Scripting\@\@V?$allocator\@UModuleDescriptor\@Scripting\@\@\@std\@\@\@std\@\@UVersion\@2\@\@Z
     */
    virtual std::vector<struct Scripting::ModuleDescriptor> getDependencies(struct Scripting::Version) const;
    /**
     * @vftbl 6
     * @symbol ?createModuleBinding\@GenericModuleBindingFactory\@Scripting\@\@UEAA?AV?$optional\@UModuleBinding\@Scripting\@\@\@std\@\@UVersion\@2\@AEBV?$optional\@UContextConfig\@Scripting\@\@\@4\@\@Z
     */
    virtual class std::optional<struct Scripting::ModuleBinding> createModuleBinding(struct Scripting::Version, class std::optional<struct Scripting::ContextConfig> const &);
    /**
     * @symbol ??0ScriptMinecraftModuleFactory\@\@QEAA\@PEAVServerLevel\@\@\@Z
     */
    MCAPI ScriptMinecraftModuleFactory(class ServerLevel *);
    /**
     * @symbol ?getModuleUUIDAsString\@ScriptMinecraftModuleFactory\@\@SA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI static std::string getModuleUUIDAsString();
    /**
     * @symbol ?makeModuleDescriptorFor\@ScriptMinecraftModuleFactory\@\@SA?AUModuleDescriptor\@Scripting\@\@UVersion\@3\@\@Z
     */
    MCAPI static struct Scripting::ModuleDescriptor makeModuleDescriptorFor(struct Scripting::Version);

//private:
    /**
     * @symbol ?_addVersions\@ScriptMinecraftModuleFactory\@\@AEAAXXZ
     */
    MCAPI void _addVersions();
    /**
     * @symbol ?_generateBindings\@ScriptMinecraftModuleFactory\@\@AEAA?AUModuleBinding\@Scripting\@\@AEAVModuleBindingBuilder\@3\@_NAEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI struct Scripting::ModuleBinding _generateBindings(class Scripting::ModuleBindingBuilder &, bool, std::vector<std::string> const &);

private:
    /**
     * @symbol ?LegacyModuleName\@ScriptMinecraftModuleFactory\@\@0PEBDEB
     */
    MCAPI static char const * LegacyModuleName;
    /**
     * @symbol ?ModuleName\@ScriptMinecraftModuleFactory\@\@0PEBDEB
     */
    MCAPI static char const * ModuleName;
    /**
     * @symbol ?ModuleUUID\@ScriptMinecraftModuleFactory\@\@0VUUID\@mce\@\@B
     */
    MCAPI static class mce::UUID const ModuleUUID;

};
