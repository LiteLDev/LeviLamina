#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/deps/scripting/binding_type/InterfaceBindingBuilder.h"

// auto generated forward declare list
// clang-format off
class Vec2;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptXYRotation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk640831;
    ::ll::UntypedStorage<4, 4> mUnk69e4f7;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptXYRotation& operator=(ScriptXYRotation const&);
    ScriptXYRotation(ScriptXYRotation const&);
    ScriptXYRotation();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBindingBuilder<::Vec2> bind();

    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptXYRotation> bindV010();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
