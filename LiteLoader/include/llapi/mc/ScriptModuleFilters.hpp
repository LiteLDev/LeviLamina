/**
 * @file  ScriptModuleFilters.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Scripting.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC namespace ScriptModuleFilters.
 *
 */
namespace ScriptModuleFilters {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @hash   -143094135
     * @symbol  ?getEditorModuleFilter\@ScriptModuleFilters\@\@YA?AV?$function\@$$A6A_NAEBVPackManifest\@\@AEBUModuleDescriptor\@Scripting\@\@1AEAVScriptPluginResult\@\@\@Z\@std\@\@_N\@Z
     */
    MCAPI class std::function<bool (class PackManifest const &, struct Scripting::ModuleDescriptor const &, struct Scripting::ModuleDescriptor const &, class ScriptPluginResult &)> getEditorModuleFilter(bool);
    /**
     * @hash   -1601786037
     * @symbol  ?getGameTestModuleFilter\@ScriptModuleFilters\@\@YA?AV?$function\@$$A6A_NAEBVPackManifest\@\@AEBUModuleDescriptor\@Scripting\@\@1AEAVScriptPluginResult\@\@\@Z\@std\@\@_N\@Z
     */
    MCAPI class std::function<bool (class PackManifest const &, struct Scripting::ModuleDescriptor const &, struct Scripting::ModuleDescriptor const &, class ScriptPluginResult &)> getGameTestModuleFilter(bool);
    /**
     * @hash   1653741285
     * @symbol  ?getReleaseModuleFilter\@ScriptModuleFilters\@\@YA?AV?$function\@$$A6A_NAEBVPackManifest\@\@AEBUModuleDescriptor\@Scripting\@\@1AEAVScriptPluginResult\@\@\@Z\@std\@\@_N0\@Z
     */
    MCAPI class std::function<bool (class PackManifest const &, struct Scripting::ModuleDescriptor const &, struct Scripting::ModuleDescriptor const &, class ScriptPluginResult &)> getReleaseModuleFilter(bool, bool);

};