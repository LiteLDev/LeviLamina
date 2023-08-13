#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/IScriptPluginSource.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

class ScriptPluginPackSource : public ::IScriptPluginSource {

public:
    // prevent constructor by default
    ScriptPluginPackSource& operator=(ScriptPluginPackSource const&) = delete;
    ScriptPluginPackSource(ScriptPluginPackSource const&)            = delete;
    ScriptPluginPackSource()                                         = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getManifest\@ScriptPluginPackSource\@\@UEAAAEBVPackManifest\@\@XZ
     */
    virtual class PackManifest const& getManifest();
    /**
     * @vftbl 2
     * @symbol
     * ?loadScripts\@ScriptPluginPackSource\@\@UEAA?AV?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@\@std\@\@\@2\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
     */
    virtual std::unordered_map<std::string, std::string> loadScripts(std::string const&);
    /**
     * @vftbl 3
     * @symbol
     * ?removeRootFromPath\@ScriptPluginPackSource\@\@UEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@\@Z
     */
    virtual std::string removeRootFromPath(std::string const&);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_removeRootFromPath\@ScriptPluginPackSource\@\@AEAA?AVPath\@Core\@\@AEBV23\@\@Z
     */
    MCAPI class Core::Path _removeRootFromPath(class Core::Path const&);
    // NOLINTEND
};
