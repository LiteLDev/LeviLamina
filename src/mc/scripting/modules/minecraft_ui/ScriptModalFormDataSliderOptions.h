#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraftServerUI {

struct ScriptModalFormDataSliderOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8>   mUnk718950;
    ::ll::UntypedStorage<4, 8>   mUnk8f2c82;
    ::ll::UntypedStorage<8, 224> mUnkc2aee1;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptModalFormDataSliderOptions& operator=(ScriptModalFormDataSliderOptions const&);
    ScriptModalFormDataSliderOptions(ScriptModalFormDataSliderOptions const&);
    ScriptModalFormDataSliderOptions();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftServerUI
