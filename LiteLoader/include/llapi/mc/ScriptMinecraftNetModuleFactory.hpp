/**
 * @file  MC/ScriptMinecraftNetModuleFactory.hpp
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
 * @brief MC class ScriptMinecraftNetModuleFactory.
 *
 */
class ScriptMinecraftNetModuleFactory : public TextObjectText {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMINECRAFTNETMODULEFACTORY
public:
    class ScriptMinecraftNetModuleFactory& operator=(class ScriptMinecraftNetModuleFactory const &) = delete;
    ScriptMinecraftNetModuleFactory(class ScriptMinecraftNetModuleFactory const &) = delete;
    ScriptMinecraftNetModuleFactory() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ScriptMinecraftNetModuleFactory();
    /**
     * @hash   1659655987
     * @symbol ??0ScriptMinecraftNetModuleFactory@@QEAA@V?$NonOwnerPointer@VScheduler@@@Bedrock@@@Z
     */
    MCAPI ScriptMinecraftNetModuleFactory(class Bedrock::NonOwnerPointer<class Scheduler>);
    /**
     * @hash   148091648
     * @symbol ?getModuleUUIDAsString@ScriptMinecraftNetModuleFactory@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI static std::string getModuleUUIDAsString();

//private:
    /**
     * @symbol ?_generateBindings@ScriptMinecraftNetModuleFactory@@AEAA?AUModuleBinding@Scripting@@AEBUVersion@3@V?$optional@UContextConfig@Scripting@@@std@@_NAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@6@@Z
     */
    MCAPI struct Scripting::ModuleBinding _generateBindings(struct Scripting::Version const &, class std::optional<struct Scripting::ContextConfig>, bool, std::vector<std::string> const &);

private:
    /**
     * @hash   986869263
     * @symbol ?ModuleName@ScriptMinecraftNetModuleFactory@@0PEBDEB
     */
    MCAPI static char const * ModuleName;
    /**
     * @hash   1375377670
     * @symbol ?ModuleUUID@ScriptMinecraftNetModuleFactory@@0VUUID@mce@@B
     */
    MCAPI static class mce::UUID const ModuleUUID;

};