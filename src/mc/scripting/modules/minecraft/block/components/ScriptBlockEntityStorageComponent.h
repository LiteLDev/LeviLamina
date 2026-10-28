#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/block/components/BaseScriptBlockActorComponent.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockEntityStorageComponent : public ::ScriptModuleMinecraft::BaseScriptBlockActorComponent {
public:
    // ScriptBlockEntityStorageComponent inner types declare
    // clang-format off
    struct EntityStorageInfo;
    // clang-format on

    // ScriptBlockEntityStorageComponent inner types define
    struct EntityStorageInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string> mUniqueId;
        ::ll::TypedStorage<8, 32, ::std::string> mDefinitionId;
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCAPI static ::Scripting::ClassBinding bind();
        // NOLINTEND
    };

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
