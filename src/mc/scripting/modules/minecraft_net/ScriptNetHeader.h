#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraftNet {

struct ScriptNetHeader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkcef7b0;
    ::ll::UntypedStorage<8, 72> mUnkec2e98;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptNetHeader& operator=(ScriptNetHeader const&);
    ScriptNetHeader(ScriptNetHeader const&);
    ScriptNetHeader();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftNet
