#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/IScriptPluginSource.h"

// auto generated forward declare list
// clang-format off
class PackManifest;
namespace Core { class Path; }
// clang-format on

class ScriptPluginPackSource : public ::IScriptPluginSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnka6c77a;
    ::ll::UntypedStorage<8, 8>  mUnkec988c;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPluginPackSource& operator=(ScriptPluginPackSource const&);
    ScriptPluginPackSource(ScriptPluginPackSource const&);
    ScriptPluginPackSource();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::PackManifest const& getManifest() /*override*/;

    virtual ::std::vector<::std::string> enumerateScripts(::std::string const& extension) /*override*/;

    virtual ::std::optional<::std::string> loadScript(::std::string const& path) /*override*/;

    virtual ::std::string removeRootFromPath(::std::string const& path) /*override*/;

    virtual ~ScriptPluginPackSource() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Core::Path _removeRootFromPath(::Core::Path const& pathIn);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::PackManifest const& $getManifest();

    MCNAPI ::std::vector<::std::string> $enumerateScripts(::std::string const& extension);

    MCNAPI ::std::optional<::std::string> $loadScript(::std::string const& path);

    MCNAPI ::std::string $removeRootFromPath(::std::string const& path);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
