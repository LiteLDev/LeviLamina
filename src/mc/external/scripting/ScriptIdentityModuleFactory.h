#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class ScriptIdentityModuleFactory {
public:
    // prevent constructor by default
    ScriptIdentityModuleFactory& operator=(ScriptIdentityModuleFactory const&);
    ScriptIdentityModuleFactory(ScriptIdentityModuleFactory const&);
    ScriptIdentityModuleFactory();

private:
    // NOLINTBEGIN
    // symbol: ?ModuleName@ScriptIdentityModuleFactory@@0PEBDEB
    MCAPI static char const* ModuleName;

    // symbol: ?ModuleUUID@ScriptIdentityModuleFactory@@0VUUID@mce@@B
    MCAPI static class mce::UUID const ModuleUUID;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $ModuleName() { return ModuleName; }

    static auto& $ModuleUUID() { return ModuleUUID; }

    // NOLINTEND
};
