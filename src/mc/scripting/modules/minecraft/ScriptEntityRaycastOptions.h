#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/ScriptActorFilter.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptEntityRaycastOptions : public ::ScriptModuleMinecraft::ScriptActorFilter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnk529469;
    ::ll::UntypedStorage<1, 2> mUnk1fbb2e;
    ::ll::UntypedStorage<1, 2> mUnk3b6b12;
    ::ll::UntypedStorage<1, 2> mUnkf4d7c2;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptEntityRaycastOptions& operator=(ScriptEntityRaycastOptions const&);
    ScriptEntityRaycastOptions(ScriptEntityRaycastOptions const&);
    ScriptEntityRaycastOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ScriptEntityRaycastOptions();
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

} // namespace ScriptModuleMinecraft
