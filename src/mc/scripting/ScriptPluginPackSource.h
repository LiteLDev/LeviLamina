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
    // vIndex: 1
    virtual ::PackManifest const& getManifest() /*override*/;

    // vIndex: 2
    virtual ::std::vector<::std::string> enumerateScripts(::std::string const& extension) /*override*/;

    // vIndex: 3
    virtual ::std::optional<::std::string> loadScript(::std::string const& path) /*override*/;

    // vIndex: 4
    virtual ::std::string removeRootFromPath(::std::string const& path) /*override*/;

    // vIndex: 0
    virtual ~ScriptPluginPackSource() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Core::Path _removeRootFromPath(::Core::Path const& pathIn);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::PackManifest const& $getManifest();

    MCAPI ::std::vector<::std::string> $enumerateScripts(::std::string const& extension);

    MCAPI ::std::optional<::std::string> $loadScript(::std::string const& path);

    MCAPI ::std::string $removeRootFromPath(::std::string const& path);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
