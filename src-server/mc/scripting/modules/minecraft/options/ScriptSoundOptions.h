#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptSoundOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 16> mUnkdbc387;
    ::ll::UntypedStorage<4, 8> mUnka3a93a;
    ::ll::UntypedStorage<4, 8> mUnkfc4ebf;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptSoundOptions& operator=(ScriptSoundOptions const&);
    ScriptSoundOptions(ScriptSoundOptions const&);
    ScriptSoundOptions();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindV010();
    // NOLINTEND

};

}
