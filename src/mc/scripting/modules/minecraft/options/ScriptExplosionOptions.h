#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/TypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptExplosionOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::optional<::Scripting::TypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>>>
                                                    mSource;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>> mBreaksBlocks;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>> mCausesFire;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>> mAllowUnderwater;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bindV010();

    MCAPI static ::Scripting::InterfaceBinding bindV1();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static bool const& ALLOW_UNDERWATER_DEFAULT();

    MCAPI static bool const& BREAKS_BLOCKS_DEFAULT();

    MCAPI static bool const& CAUSES_FIRE_DEFAULT();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
