#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraftServerUI {

struct ScriptSliderOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 224> mUnkfd46f3;
    ::ll::UntypedStorage<8, 48>  mUnk498825;
    ::ll::UntypedStorage<8, 48>  mUnkbafe6e;
    ::ll::UntypedStorage<8, 48>  mUnkd555bf;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptSliderOptions& operator=(ScriptSliderOptions const&);
    ScriptSliderOptions(ScriptSliderOptions const&);
    ScriptSliderOptions();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftServerUI
