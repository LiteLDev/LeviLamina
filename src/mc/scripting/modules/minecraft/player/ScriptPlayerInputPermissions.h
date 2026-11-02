#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/deps/script_core/binding_type/scripting/ClassBindingBuilder.h"
#include "mc/entity/enums/ClientInputLockCategory.h"

// auto generated forward declare list
// clang-format off
struct ClientInputLockComponent;
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptPlayerInputPermissions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::WeakEntityRef> mPlayer;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ClientInputLockComponent* _tryGetClientInputLockComponent() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _makeCategoryPropertyBinding(
        ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptPlayerInputPermissions>& classBuilder,
        ::ClientInputLockCategory                                                                category
    );

    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
