#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace Editor::ScriptModule {

struct ScriptCustomBiomeReplacementConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnke520fd;
    ::ll::UntypedStorage<4, 4>  mUnkd169d1;
    ::ll::UntypedStorage<8, 40> mUnk38f096;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCustomBiomeReplacementConfig& operator=(ScriptCustomBiomeReplacementConfig const&);
    ScriptCustomBiomeReplacementConfig(ScriptCustomBiomeReplacementConfig const&);
    ScriptCustomBiomeReplacementConfig();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bindType();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
