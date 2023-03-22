/**
 * @file  CreatorMetadataUtils.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Json.hpp"
#include "Scripting.hpp"
#include "Core.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


namespace CreatorMetadataUtils {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol ?_generateBlocksMetadataJson\@CreatorMetadataUtils\@\@YA?AVValue\@Json\@\@XZ
     */
    MCAPI class Json::Value _generateBlocksMetadataJson();
    /**
     * @symbol ?_generateScriptingModuleMetadataJson\@CreatorMetadataUtils\@\@YA?AVValue\@Json\@\@AEBUModuleBinding\@Scripting\@\@AEBUSupportedBindingModule\@5\@AEBUModuleBindingBundle\@5\@\@Z
     */
    MCAPI class Json::Value _generateScriptingModuleMetadataJson(struct Scripting::ModuleBinding const &, struct Scripting::SupportedBindingModule const &, struct Scripting::ModuleBindingBundle const &);
    /**
     * @symbol ?generateBlocksDocumentation\@CreatorMetadataUtils\@\@YAXAEBVPath\@Core\@\@\@Z
     */
    MCAPI void generateBlocksDocumentation(class Core::Path const &);
    /**
     * @symbol ?generateCommandsDocumentation\@CreatorMetadataUtils\@\@YAXAEAVCommandRegistry\@\@AEBVPath\@Core\@\@\@Z
     */
    MCAPI void generateCommandsDocumentation(class CommandRegistry &, class Core::Path const &);
    /**
     * @symbol ?generateScriptingDocumentation\@CreatorMetadataUtils\@\@YAXAEAVScriptEngine\@Scripting\@\@AEBVPath\@Core\@\@\@Z
     */
    MCAPI void generateScriptingDocumentation(class Scripting::ScriptEngine &, class Core::Path const &);
    /**
     * @symbol ?getGameSemVersionAsString\@CreatorMetadataUtils\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getGameSemVersionAsString();
    /**
     * @symbol ?scriptingVersionToString\@CreatorMetadataUtils\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBUVersion\@Scripting\@\@\@Z
     */
    MCAPI std::string scriptingVersionToString(struct Scripting::Version const &);
    /**
     * @symbol ?writeJsonMetadataToFile\@CreatorMetadataUtils\@\@YA_NAEBVValue\@Json\@\@AEBVPath\@Core\@\@\@Z
     */
    MCAPI bool writeJsonMetadataToFile(class Json::Value const &, class Core::Path const &);

};