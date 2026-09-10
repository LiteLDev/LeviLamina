#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraftServerUI {

struct ScriptImageOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>  mUnk56c529;
    ::ll::UntypedStorage<8, 48>  mUnk6d5201;
    ::ll::UntypedStorage<8, 224> mUnk2f447f;
    ::ll::UntypedStorage<8, 120> mUnk57b224;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptImageOptions& operator=(ScriptImageOptions const&);
    ScriptImageOptions(ScriptImageOptions const&);
    ScriptImageOptions();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftServerUI
