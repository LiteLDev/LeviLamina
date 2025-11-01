#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/ScriptBlockFilter.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptBlockRaycastOptions : public ::ScriptModuleMinecraft::ScriptBlockFilter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnkd33855;
    ::ll::UntypedStorage<1, 2> mUnke8721f;
    ::ll::UntypedStorage<1, 2> mUnk11f33b;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockRaycastOptions& operator=(ScriptBlockRaycastOptions const&);
    ScriptBlockRaycastOptions(ScriptBlockRaycastOptions const&);
    ScriptBlockRaycastOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ScriptBlockRaycastOptions();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();

    MCNAPI static ::Scripting::ClassBinding bindV010();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
