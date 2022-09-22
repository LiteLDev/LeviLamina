/**
 * @file  ScriptMinecraftServerAdminModuleFactory.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Bedrock.hpp"
#include "Scripting.hpp"
#include "TextObjectText.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ScriptMinecraftServerAdminModuleFactory.
 *
 */
class ScriptMinecraftServerAdminModuleFactory : public TextObjectText {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMINECRAFTSERVERADMINMODULEFACTORY
public:
    class ScriptMinecraftServerAdminModuleFactory& operator=(class ScriptMinecraftServerAdminModuleFactory const &) = delete;
    ScriptMinecraftServerAdminModuleFactory(class ScriptMinecraftServerAdminModuleFactory const &) = delete;
    ScriptMinecraftServerAdminModuleFactory() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ScriptMinecraftServerAdminModuleFactory();
    /**
     * @hash   1734647876
     * @symbol ??0ScriptMinecraftServerAdminModuleFactory@@QEAA@V?$NonOwnerPointer@VScriptPackConfigurationManager@@@Bedrock@@@Z
     */
    MCAPI ScriptMinecraftServerAdminModuleFactory(class Bedrock::NonOwnerPointer<class ScriptPackConfigurationManager>);
    /**
     * @hash   -1966199666
     * @symbol ?getModuleUUIDAsString@ScriptMinecraftServerAdminModuleFactory@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI static std::string getModuleUUIDAsString();
    /**
     * @hash   -437344467
     * @symbol ?makeModuleDescriptorFor@ScriptMinecraftServerAdminModuleFactory@@SA?AUModuleDescriptor@Scripting@@UVersion@3@@Z
     */
    MCAPI static struct Scripting::ModuleDescriptor makeModuleDescriptorFor(struct Scripting::Version);

//private:
    /**
     * @symbol ?_generateBindings@ScriptMinecraftServerAdminModuleFactory@@AEAA?AUModuleBinding@Scripting@@AEBUVersion@3@V?$optional@UContextConfig@Scripting@@@std@@_NAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@6@@Z
     */
    MCAPI struct Scripting::ModuleBinding _generateBindings(struct Scripting::Version const &, class std::optional<struct Scripting::ContextConfig>, bool, std::vector<std::string> const &);

private:
    /**
     * @hash   38852926
     * @symbol ?ModuleName@ScriptMinecraftServerAdminModuleFactory@@0PEBDEB
     */
    MCAPI static char const * ModuleName;
    /**
     * @hash   1696382013
     * @symbol ?ModuleUUID@ScriptMinecraftServerAdminModuleFactory@@0VUUID@mce@@B
     */
    MCAPI static class mce::UUID const ModuleUUID;

};