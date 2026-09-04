#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraftServerUI {

struct ScriptButtonOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 224> mUnkbbf55f;
    ::ll::UntypedStorage<8, 48>  mUnkf594c3;
    ::ll::UntypedStorage<8, 48>  mUnk2b8fdc;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptButtonOptions& operator=(ScriptButtonOptions const&);
    ScriptButtonOptions(ScriptButtonOptions const&);
    ScriptButtonOptions();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftServerUI
