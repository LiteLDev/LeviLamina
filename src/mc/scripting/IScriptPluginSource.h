#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class PackManifest;
// clang-format on

class IScriptPluginSource {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IScriptPluginSource() = default;

    virtual ::PackManifest const& getManifest() = 0;

    virtual ::std::vector<::std::string> enumerateScripts(::std::string const&) = 0;

    virtual ::std::optional<::std::string> loadScript(::std::string const&) = 0;

    virtual ::std::string removeRootFromPath(::std::string const&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
