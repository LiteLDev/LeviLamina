#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/ScriptEntityWaypoint.h"
#include "mc/scripting/modules/minecraft/ScriptPlayerVisibilityRules.h"

// auto generated forward declare list
// clang-format off
class ServerWaypoint;
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptPlayerWaypoint : public ::ScriptModuleMinecraft::ScriptEntityWaypoint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 2, ::ScriptModuleMinecraft::ScriptPlayerVisibilityRules const> mPlayerRules;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::unique_ptr<::ServerWaypoint> createWaypoint() const /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
