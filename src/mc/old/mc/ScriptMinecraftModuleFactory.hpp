/**
 * @file  ScriptMinecraftModuleFactory.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Scripting.hpp"
#include "ScriptModuleMinecraft.hpp"

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
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ScriptMinecraftModuleFactory();
    /**
     * @vftbl  1
     * @symbol  ?getName\@GenericModuleBindingFactory\@Scripting\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl  2
     * @symbol  ?getUUID\@GenericModuleBindingFactory\@Scripting\@\@UEBA?AUUUID\@2\@XZ
     */
    virtual struct Scripting::UUID getUUID() const;
    /**
     * @vftbl  3
     * @symbol  ?hasAlias\@GenericModuleBindingFactory\@Scripting\@\@UEBA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual bool hasAlias(std::string const &) const;
    /**
     * @vftbl  4
     * @symbol  ?getSupportedVersions\@GenericModuleBindingFactory\@Scripting\@\@UEBA?AV?$vector\@UVersion\@Scripting\@\@V?$allocator\@UVersion\@Scripting\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<struct Scripting::Version> getSupportedVersions() const;
    /**
     * @vftbl  5
     * @symbol  ?getDependencies\@GenericModuleBindingFactory\@Scripting\@\@UEBA?AV?$vector\@UModuleDescriptor\@Scripting\@\@V?$allocator\@UModuleDescriptor\@Scripting\@\@\@std\@\@\@std\@\@UVersion\@2\@\@Z
     */
    virtual std::vector<struct Scripting::ModuleDescriptor> getDependencies(struct Scripting::Version) const;
    /**
     * @vftbl  6
     * @symbol  ?createModuleBinding\@GenericModuleBindingFactory\@Scripting\@\@UEAA?AV?$optional\@UModuleBinding\@Scripting\@\@\@std\@\@UVersion\@2\@AEBV?$optional\@UContextConfig\@Scripting\@\@\@4\@$$QEAV?$vector\@UModuleBinding\@Scripting\@\@V?$allocator\@UModuleBinding\@Scripting\@\@\@std\@\@\@4\@\@Z
     */
    virtual class std::optional<struct Scripting::ModuleBinding> createModuleBinding(struct Scripting::Version, class std::optional<struct Scripting::ContextConfig> const &, std::vector<struct Scripting::ModuleBinding> &&);
    /**
     * @symbol  ??0ScriptMinecraftModuleFactory\@\@QEAA\@PEAVServerLevel\@\@\@Z
     */
    MCAPI ScriptMinecraftModuleFactory(class ServerLevel *);
    /**
     * @symbol  ?getActorComponentFactories\@ScriptMinecraftModuleFactory\@\@SAAEAV?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$unique_ptr\@VIComponentFactory\@ScriptModuleMinecraft\@\@U?$default_delete\@VIComponentFactory\@ScriptModuleMinecraft\@\@\@std\@\@\@2\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$unique_ptr\@VIComponentFactory\@ScriptModuleMinecraft\@\@U?$default_delete\@VIComponentFactory\@ScriptModuleMinecraft\@\@\@std\@\@\@2\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI static class std::unordered_map<std::string, std::unique_ptr<class ScriptModuleMinecraft::IComponentFactory>, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, std::unique_ptr<class ScriptModuleMinecraft::IComponentFactory>>>> & getActorComponentFactories();
    /**
     * @symbol  ?getModuleUUIDAsString\@ScriptMinecraftModuleFactory\@\@SA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI static std::string getModuleUUIDAsString();
    /**
     * @symbol  ?makeModuleDescriptorFor\@ScriptMinecraftModuleFactory\@\@SA?AUModuleDescriptor\@Scripting\@\@UVersion\@3\@\@Z
     */
    MCAPI static struct Scripting::ModuleDescriptor makeModuleDescriptorFor(struct Scripting::Version);

//private:
    /**
     * @symbol  ?_addVersions\@ScriptMinecraftModuleFactory\@\@AEAAXXZ
     */
    MCAPI void _addVersions();
    /**
     * @symbol  ?_generateBindings\@ScriptMinecraftModuleFactory\@\@AEAA?AUModuleBinding\@Scripting\@\@AEAVModuleBindingBuilder\@3\@_NAEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI struct Scripting::ModuleBinding _generateBindings(class Scripting::ModuleBindingBuilder &, bool, std::vector<std::string> const &);

private:
    /**
     * @symbol  ?LegacyModuleName\@ScriptMinecraftModuleFactory\@\@0PEBDEB
     */
    MCAPI static char const * LegacyModuleName;
    /**
     * @symbol  ?ModuleName\@ScriptMinecraftModuleFactory\@\@0PEBDEB
     */
    MCAPI static char const * ModuleName;
    /**
     * @symbol  ?ModuleUUID\@ScriptMinecraftModuleFactory\@\@0VUUID\@mce\@\@B
     */
    MCAPI static class mce::UUID const ModuleUUID;

};