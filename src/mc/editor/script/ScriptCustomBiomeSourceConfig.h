#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace Editor::ScriptModule {

struct ScriptCustomBiomeSourceConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk1d7824;
    ::ll::UntypedStorage<8, 24> mUnk7f9bc0;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCustomBiomeSourceConfig& operator=(ScriptCustomBiomeSourceConfig const&);
    ScriptCustomBiomeSourceConfig(ScriptCustomBiomeSourceConfig const&);
    ScriptCustomBiomeSourceConfig();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bindType();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
