#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptLootPoolTiers {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk45b804;
    ::ll::UntypedStorage<8, 8> mUnke9b344;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptLootPoolTiers& operator=(ScriptLootPoolTiers const&);
    ScriptLootPoolTiers(ScriptLootPoolTiers const&);
    ScriptLootPoolTiers();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

};

}
