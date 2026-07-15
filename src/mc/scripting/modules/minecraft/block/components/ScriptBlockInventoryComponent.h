#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongObjectHandle.h"
#include "mc/scripting/modules/minecraft/block/components/BaseScriptBlockActorComponent.h"

namespace ScriptModuleMinecraft {

class ScriptBlockInventoryComponent : public ::ScriptModuleMinecraft::BaseScriptBlockActorComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::std::optional<::Scripting::StrongObjectHandle>> mScriptContainer;
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
