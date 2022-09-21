/**
 * @file  MC/ScriptMinecraftUIModuleFactory.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Scripting.hpp"
#include "TextObjectText.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ScriptMinecraftUIModuleFactory.
 *
 */
class ScriptMinecraftUIModuleFactory : public TextObjectText {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMINECRAFTUIMODULEFACTORY
public:
    class ScriptMinecraftUIModuleFactory& operator=(class ScriptMinecraftUIModuleFactory const &) = delete;
    ScriptMinecraftUIModuleFactory(class ScriptMinecraftUIModuleFactory const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ScriptMinecraftUIModuleFactory();
    /**
     * @hash   1858716772
     * @symbol ??0ScriptMinecraftUIModuleFactory@@QEAA@XZ
     */
    MCAPI ScriptMinecraftUIModuleFactory();
    /**
     * @hash   -171371272
     * @symbol ?getModuleUUIDAsString@ScriptMinecraftUIModuleFactory@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI static std::string getModuleUUIDAsString();

//private:
    /**
     * @hash   -1412575311
     * @symbol ?_addVersions@ScriptMinecraftUIModuleFactory@@AEAAXXZ
     */
    MCAPI void _addVersions();
    /**
     * @hash   -885851810
     * @symbol ?_generateBindings@ScriptMinecraftUIModuleFactory@@AEAA?AUModuleBinding@Scripting@@AEBUVersion@3@_NAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
     */
    MCAPI struct Scripting::ModuleBinding _generateBindings(struct Scripting::Version const &, bool, std::vector<std::string> const &);

private:
    /**
     * @hash   243502586
     * @symbol ?ModuleName@ScriptMinecraftUIModuleFactory@@0PEBDEB
     */
    MCAPI static char const * ModuleName;
    /**
     * @hash   1086419209
     * @symbol ?ModuleUUID@ScriptMinecraftUIModuleFactory@@0VUUID@mce@@B
     */
    MCAPI static class mce::UUID const ModuleUUID;

};