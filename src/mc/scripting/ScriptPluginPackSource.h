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
    ScriptPluginPackSource& operator=(ScriptPluginPackSource const&);
    ScriptPluginPackSource(ScriptPluginPackSource const&);
    ScriptPluginPackSource();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptPluginPackSource() = default;

    // vIndex: 1
    virtual class PackManifest const& getManifest();

    // vIndex: 2
    virtual std::vector<std::string> enumerateScripts(std::string const& extension);

    // vIndex: 3
    virtual std::optional<std::string> loadScript(std::string const& path);

    // vIndex: 4
    virtual std::string removeRootFromPath(std::string const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI class Core::Path _removeRootFromPath(class Core::Path const& pathIn);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI std::vector<std::string> enumerateScripts$(std::string const& extension);

    MCAPI class PackManifest const& getManifest$();

    MCAPI std::optional<std::string> loadScript$(std::string const& path);

    MCAPI std::string removeRootFromPath$(std::string const&);

    // NOLINTEND
};
