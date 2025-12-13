#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPlayerSpawnAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk585cf2;
    ::ll::UntypedStorage<1, 1>  mUnk5293b3;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerSpawnAfterEvent& operator=(ScriptPlayerSpawnAfterEvent const&);
    ScriptPlayerSpawnAfterEvent(ScriptPlayerSpawnAfterEvent const&);
    ScriptPlayerSpawnAfterEvent();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
