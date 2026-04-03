#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct CustomBiome;
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace Editor::ScriptModule {

struct ScriptCustomBiomeConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk3e7d6c;
    ::ll::UntypedStorage<8, 24> mUnk1656d0;
    ::ll::UntypedStorage<8, 24> mUnk6e743d;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCustomBiomeConfig(ScriptCustomBiomeConfig const&);
    ScriptCustomBiomeConfig();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addToMap(::std::map<::std::string, ::CustomBiome>& map) const;

    MCNAPI ::Editor::ScriptModule::ScriptCustomBiomeConfig&
    operator=(::Editor::ScriptModule::ScriptCustomBiomeConfig&&);

    MCNAPI ::Editor::ScriptModule::ScriptCustomBiomeConfig&
    operator=(::Editor::ScriptModule::ScriptCustomBiomeConfig const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bindType();

    MCNAPI static ::std::map<::std::string, ::CustomBiome>
    buildMap(::std::vector<::Editor::ScriptModule::ScriptCustomBiomeConfig> const& listOfCustomBiomes);
    // NOLINTEND
};

} // namespace Editor::ScriptModule
