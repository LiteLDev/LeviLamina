#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptEaseOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnk2705ed;
    ::ll::UntypedStorage<4, 8> mUnk8b8fa8;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptEaseOptions& operator=(ScriptEaseOptions const&);
    ScriptEaseOptions(ScriptEaseOptions const&);
    ScriptEaseOptions();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();

    MCNAPI static ::Scripting::InterfaceBinding bindV1();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
