#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class GameRules;
class Level;
namespace Scripting { class ModuleBindingBuilder; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptGameRules {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk6dc759;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptGameRules& operator=(ScriptGameRules const&);
    ScriptGameRules(ScriptGameRules const&);
    ScriptGameRules();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bind(::Scripting::ModuleBindingBuilder& moduleBuilder, ::Level const& level);
    // NOLINTEND

};

}
