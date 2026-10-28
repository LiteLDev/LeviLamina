#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraftServerUI {

struct ScriptCustomFormButtonData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 216> mUnka629be;
    ::ll::UntypedStorage<8, 112> mUnk6ad934;
    ::ll::UntypedStorage<8, 464> mUnkfdafcc;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCustomFormButtonData& operator=(ScriptCustomFormButtonData const&);
    ScriptCustomFormButtonData(ScriptCustomFormButtonData const&);
    ScriptCustomFormButtonData();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftServerUI
