/**
 * @file  ScriptPluginUtils.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Scripting.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC namespace ScriptPluginUtils.
 *
 */
namespace ScriptPluginUtils {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    /**
     * @symbol  ?BETA_RELEASE\@ScriptPluginUtils\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const BETA_RELEASE;
    /**
     * @symbol  ?CreateRuntimeByType\@ScriptPluginUtils\@\@YA?AV?$unique_ptr\@VIRuntime\@Scripting\@\@U?$default_delete\@VIRuntime\@Scripting\@\@\@std\@\@\@std\@\@W4ScriptRuntimeType\@\@AEAVRegistryManager\@Scripting\@\@PEAVDependencyLocator\@6\@\@Z
     */
    MCAPI std::unique_ptr<class Scripting::IRuntime> CreateRuntimeByType(enum class ScriptRuntimeType, class Scripting::RegistryManager &, class Scripting::DependencyLocator *);
    /**
     * @symbol  ?GetRuntimeType\@ScriptPluginUtils\@\@YA?AW4ScriptRuntimeType\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI enum class ScriptRuntimeType GetRuntimeType(std::string const &);
    /**
     * @symbol  ?GetRuntimeTypeFromFileExtension\@ScriptPluginUtils\@\@YA?AW4ScriptRuntimeType\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI enum class ScriptRuntimeType GetRuntimeTypeFromFileExtension(std::string const &);
    /**
     * @symbol  ?INTERNAL_RELEASE\@ScriptPluginUtils\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const INTERNAL_RELEASE;
    /**
     * @symbol  ?JAVA_SCRIPT_RUNTIME_EXTENSION\@ScriptPluginUtils\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const JAVA_SCRIPT_RUNTIME_EXTENSION;
    /**
     * @symbol  ?JAVA_SCRIPT_RUNTIME_NAME\@ScriptPluginUtils\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const JAVA_SCRIPT_RUNTIME_NAME;
    /**
     * @symbol  ?JavaScriptModuleNameNormalizer\@ScriptPluginUtils\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@3\@AEBV23\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@3\@\@Z
     */
    MCAPI std::string JavaScriptModuleNameNormalizer(class std::basic_string_view<char, struct std::char_traits<char>> const &, std::string const &, std::vector<std::string> const &);
    /**
     * @symbol  ?SanitizeRuntimeName\@ScriptPluginUtils\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@\@Z
     */
    MCAPI std::string SanitizeRuntimeName(std::string const &);

};